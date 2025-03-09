#include "Langevin.h"

double Langevin::normalDistributionBoxMuller(double mean, double variance) {

	double u1 = 1. * rand() / RAND_MAX;
	double u2 = 1. * rand() / RAND_MAX;

	double z0 = sqrt(-2.0 * log(u1)) * cos(2 * M_PI * u2);
	double z1 = sqrt(-2.0 * log(u1)) * sin(2 * M_PI * u2);

	return mean + sqrt(variance) * z0;
}

double Langevin::dVdq() {//��������������� ����, ����������� ��� ������������������ � ��������������� ���������������
	if (q < r1) {
		return C_gs*(q-r_gs);
	}
	else return -C_sd * (q - r_sd);
}

void Langevin::Init() {

}

Langevin::Langevin(double m, int A, double V_gs, double gamma, double r1, double r_gs, double r_sd, double r_sc, double p, int n, double tau, double E_int): m(m), A(A), V_gs(V_gs), gamma(gamma), r1(r1), r_gs(r_gs), r_sd(r_sd), r_sc(r_sc), p(p), n(n), tau(tau), E_int(E_int) {
	Ksi = 0; //���������������������� �������� � ���������� 2
	Teta = 1;//��������� ��������� ����

	//����������
	E_pot = 100;//������������� �������
	p = 100;    //������� �������

	n = 0;       //����� ���� �� �������
	B_f = 9.3; //�������
	T = sqrt(Energy() * 10 / A); //�����������
	q = 0.375;
	C_gs = 200;
	C_sd = 200;
	E_tot = E_int + EnergyKin() + Energy();//������ �������

}

void Langevin::doOneStep() {
	double p_new, q_new;
	E_int = E_tot - p * p / 2 / m - Energy();
	T = sqrt(E_int * 10 / A);
	Teta = sqrt(gamma * T);
	Ksi = normalDistributionBoxMuller(0, 2);
	p_new = p - (dVdq() + gamma * p / m) * tau + Teta * Ksi * sqrt(tau);
	q_new = q + (p_new + p) * tau / (2 * m);
	q = q_new;
	p = p_new;
//	dq = p / m;
//	dp = -dVdq(r) - gamma * p / m + Teta * Ksi;
}

double Langevin::Energy() {
	if (q < r1) {
		return V_gs + C_gs * (q - r_gs) * (q - r_gs) / 2;
	}
	else return V_gs + B_f - C_sd * (q - r_sd) * (q - r_sd) / 2;
}

double Langevin::EnergyKin() {
	return p * p / 2 / m;
}

