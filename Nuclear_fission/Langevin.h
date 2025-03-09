#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <random>

class Langevin
{
public:
	//��������, ������� �� ����� ��� ���� �� ��� �������� �������
	int A;      //�������� ����� ����
	double Ksi; //���������������������� �������� � ���������� 2
	double Teta;//��������� ��������� ����
	double m;   //�������� ��������
	double V_gs;//��������� (=0, ���� �����) ����������� ��� ���������� E_pot
	double C_gs;//���������
	double B_f; //������ �������
	double C_sd;//���������
	double r1;   //����� ������ �������
	double r_gs; //��������� ��������� ���������
	double r_sd; //��������� ������� �������
	double r_sc; //����������� ����������
	
	//����������
	double E_pot;//������������� �������
	double E_int;//���������� ������� �����������
	double p;    //������� �������
	double gamma;//����������� ������
	double E_tot;//������ �������
	int n;       //����� ���� �� �������
	double tau;  //��� �� �������

	double T;    //����������� ����
	double dq;   //����������� �� ������� �� ������������ ����������
	double dp;   //����������� �� ������� �� ��������
	double q;	 //����������

	Langevin(double m, int A, double V_gs, double gamma, double r1, double r_gs, double r_sd, double r_sc, double p, int n, double tau, double E_int);
	void Init();
	void doOneStep();
	double Energy();
	double EnergyKin();
	double normalDistributionBoxMuller(double mean, double variance); //���������� �������������
	double dVdq();//��������������� ����, ����������� ��� ������������������ � ��������������� ���������������
};

