#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <random>

class Langevin
{
public:
	//Величины, которые мы задаём или ищем из уже заданных величин
	int A;      //Массовое число ядра
	double Ksi; //Нормальнораспределённая величина с дисперсией 2
	double Teta;//Амплитуда случайной силы
	double m;   //Массовый параметр
	double V_gs;//Константа (=0, чаще всего) необходимая для вычисления E_pot
	double C_gs;//Константа
	double B_f; //Барьер деления
	double C_sd;//Константа
	double r1;   //Точка сшивки парабол
	double r_gs; //Положение основного состояния
	double r_sd; //Положение барьера деления
	double r_sc; //Критическая деформация
	
	//Переменные
	double E_pot;//Потенциальная энергия
	double E_int;//Внутренняя энергия возбуждения
	double p;    //Импульс частицы
	double gamma;//Коэффициент трения
	double E_tot;//Полная энергия
	int n;       //Номер шага по времени
	double tau;  //Шаг по времени

	double T;    //Температура ядра
	double dq;   //Производная по времени от коллективной координаты
	double dp;   //Производная по времени от импульса
	double q;	 //Координата

	Langevin(double m, int A, double V_gs, double gamma, double r1, double r_gs, double r_sd, double r_sc, double p, int n, double tau, double E_int);
	void Init();
	void doOneStep();
	double Energy();
	double EnergyKin();
	double normalDistributionBoxMuller(double mean, double variance); //Нормальное распределение
	double dVdq();//Систематическая сила, возникающая при внутримолекулярных и межмолекулярных взаимодействиях
};

