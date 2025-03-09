#pragma once
#include "Langevin.h"
#include "Mathods.h"
#include <iostream>
#include <fstream>
using namespace cli;

namespace Nuclearfission {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:

		bool Button_Flag;
		bool Button_Flag2;
		Langevin* Barrier;
		Langevin* Particle;
		double m;
		int A;
		double V_gs;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
		   double gamma;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
		   double r1, r_gs, r_sc, r_sd;
		double p, E_int, tau;
		int n;
		double time;
		int NumberOfExperiment;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
		   /// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"r ";
			chartArea1->AxisY->Title = L"V(r) МэВ";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Black;
			series2->Name = L"Series2";
			series2->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1066, 712);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 718);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(326, 155);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(372, 718);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(326, 155);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Стоп";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1252, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"m";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1252, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"A";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1252, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"V_gs";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1252, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"gamma";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1330, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"5";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1330, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1330, 107);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"216";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1330, 75);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"2,35";
			// 
			// chart2
			// 
			chartArea2->AxisX->Title = L"Время";
			chartArea2->AxisY->Title = L"Координата q";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			this->chart2->Location = System::Drawing::Point(1098, 616);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Red;
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(351, 257);
			this->chart2->TabIndex = 12;
			this->chart2->Text = L"chart2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(740, 718);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(326, 155);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Удалить график";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1098, 44);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 116);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Создать i-ое количество экспериментов";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1330, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 22;
			this->textBox5->Text = L"0,59";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1330, 235);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 21;
			this->textBox6->Text = L"0,375";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1330, 267);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"0,825";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1330, 299);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"1,15";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1252, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"r_sc";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1252, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"r_sd";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1252, 241);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"r_gs";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1252, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"r1";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1330, 331);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 24;
			this->textBox9->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1252, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"p";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(1098, 166);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(110, 26);
			this->textBox10->TabIndex = 26;
			this->textBox10->Text = L"300";
			// 
			// chart3
			// 
			chartArea3->AxisX->Title = L"Номер эксперимента";
			chartArea3->AxisY->Title = L"Время";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			this->chart3->Location = System::Drawing::Point(1098, 363);
			this->chart3->Name = L"chart3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Color = System::Drawing::Color::ForestGreen;
			series4->LabelForeColor = System::Drawing::Color::Bisque;
			series4->Name = L"Series1";
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(351, 247);
			this->chart3->TabIndex = 27;
			this->chart3->Text = L"chart3";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(1098, 266);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 24);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"Отрисовка";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(1098, 235);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(112, 24);
			this->checkBox2->TabIndex = 29;
			this->checkBox2->Text = L"Пуск/Стоп";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(1330, 12);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 26);
			this->textBox11->TabIndex = 33;
			this->textBox11->Text = L"0,05";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(1330, 44);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 26);
			this->textBox12->TabIndex = 32;
			this->textBox12->Text = L"53";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1252, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 20);
			this->label10->TabIndex = 31;
			this->label10->Text = L"E_int";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1252, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 20);
			this->label11->TabIndex = 30;
			this->label11->Text = L"tau";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1461, 885);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		gamma = Convert::ToDouble(textBox1->Text);
		V_gs = Convert::ToDouble(textBox2->Text);
		A = Convert::ToInt32(textBox3->Text);
		m = Convert::ToDouble(textBox4->Text);
		r1 = Convert::ToDouble(textBox5->Text);
		r_gs = Convert::ToDouble(textBox6->Text);
		r_sd = Convert::ToDouble(textBox7->Text);
		r_sc = Convert::ToDouble(textBox8->Text);
		p = Convert::ToDouble(textBox9->Text);
		E_int = Convert::ToDouble(textBox12->Text);
		tau = Convert::ToDouble(textBox11->Text);

		std::ofstream fout("res.txt");
		std::ofstream fout2("r(t).txt");
		fout2 << "t\tr" << std::endl;
		double E;

		Button_Flag = 1;
		Barrier = new Langevin(m,A,V_gs,gamma, r1, r_gs, r_sd, r_sc, p, 0, tau, E_int);
		Barrier->E_tot = Barrier->E_int + Barrier->p * Barrier->p / 2 / Barrier->m + Barrier->Energy();//Полная энергия

		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart2->Series["Series1"]->Points->Clear();
		for (double i = -1.25*Barrier->r_sd; i < Barrier->r_sc; i += 0.01) {
			Application::DoEvents();
			if (i < Barrier->r1) {
				E = Barrier->V_gs + Barrier->C_gs * (i - Barrier->r_gs) * (i - Barrier->r_gs) / 2;
			}
			else E = Barrier->V_gs + Barrier->B_f - Barrier->C_sd * (i - Barrier->r_sd) * (i - Barrier->r_sd) / 2;
			fout << "E = " << E << "\ti = " << i << std::endl;
			chart1->Series["Series1"]->Points->AddXY(i, E);
		}

		while (Button_Flag && Barrier->q <= Barrier->r_sc) {
			Application::DoEvents();
			E = Barrier->p * Barrier->p / 2 / Barrier->m + Barrier->Energy();
			chart1->Series["Series2"]->Points->AddXY(Barrier->q, E);
			chart2->Series["Series1"]->Points->AddXY(Barrier->n * Barrier->tau, Barrier->q);
			//if (chart1->Series["Series2"]->Points->Count > 2)
			//	chart1->Series["Series2"]->Points->RemoveAt(0);
			//chart1->Series["Series2"]->Points->Clear();
			fout2 << Barrier->n * Barrier->tau << "\t" << Barrier->q << std::endl;
			Barrier->doOneStep();
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Button_Flag = 0;
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
			

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Button_Flag = 0;
	chart1->Series["Series1"]->Points->Clear();
	chart1->Series["Series2"]->Points->Clear();
	chart2->Series["Series1"]->Points->Clear();
}



private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	gamma = Convert::ToDouble(textBox1->Text);
	V_gs = Convert::ToDouble(textBox2->Text);
	A = Convert::ToInt32(textBox3->Text);
	m = Convert::ToDouble(textBox4->Text);
	r1 = Convert::ToDouble(textBox5->Text);
	r_gs = Convert::ToDouble(textBox6->Text);
	r_sd = Convert::ToDouble(textBox7->Text);
	r_sc = Convert::ToDouble(textBox8->Text);
	p = Convert::ToDouble(textBox9->Text);
	n = Convert::ToInt32(textBox10->Text);
	E_int= Convert::ToDouble(textBox12->Text);
	tau = Convert::ToDouble(textBox11->Text);

	std::ofstream Exper("Experiment.txt");
	std::ofstream Styh("Time.txt");
	Exper << "n\ttime\tnumber of steps" << std::endl;
	int max = 0;
	double* En = new double[n];
	double E;
	time = 0;
	int NumberOfSteps, BarrierOfStep = 0;
	Particle = new Langevin(m, A, V_gs, gamma, r1, r_gs, r_sd, r_sc, p, n, tau, E_int);
	Particle->E_tot = Particle->E_int + Particle->p * Particle->p / 2 / Particle->m + Particle->Energy();//Полная энергия
	NumberOfExperiment = 0;
	srand(NULL);
	if(checkBox2->Checked == true){
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart2->Series["Series1"]->Points->Clear();
		chart3->Series["Series1"]->Points->Clear();
	for (double i = -1.25 * Particle->r_sd; i < Particle->r_sc; i += 0.01) {
		Application::DoEvents();
		if (i < Particle->r1) {
			E = Particle->V_gs + Particle->C_gs * (i - Particle->r_gs) * (i - Particle->r_gs) / 2;
		}
		else E = Particle->V_gs + Particle->B_f - Particle->C_sd * (i - Particle->r_sd) * (i - Particle->r_sd) / 2;
		chart1->Series["Series1"]->Points->AddXY(i, E);
	}
	for (int i = 0; i < Particle->n; i++) {
		if (checkBox2->Checked == true) {
			NumberOfSteps = 0;
			Particle->q = 0;
			Particle->p = p;
			if (checkBox1->Checked == true) {
				chart1->Series["Series2"]->Points->Clear();
				chart2->Series["Series1"]->Points->Clear();
			}
			while (Particle->q <= Particle->r_sc /* && NumberOfSteps <= BarrierOfStep / Particle->tau*/) {
				Application::DoEvents();
				E = Particle->EnergyKin() + Particle->Energy();
				Particle->doOneStep();
				NumberOfSteps++;
				BarrierOfStep++;
				if (checkBox1->Checked == true) {
					chart1->Series["Series2"]->Points->AddXY(Particle->q, E);
					chart2->Series["Series1"]->Points->AddXY(Particle->n * Particle->tau, Particle->q);
				}

			}
			En[i] = NumberOfSteps * Particle->tau;
			if (En[i] > max) max = En[i];
			NumberOfExperiment++;
			chart3->Series["Series1"]->Points->AddXY(NumberOfExperiment, time / NumberOfExperiment);
			time += NumberOfSteps * Particle->tau;
			Exper <<NumberOfExperiment << "\t" << time << "\t" << NumberOfSteps << std::endl;
			//Styh << NumberOfExperiment << "\t" << NumberOfSteps * Particle->tau << std::endl;
			if (NumberOfExperiment >= Particle->n) {
				break;
			}
		}
	}
	}
	if (checkBox2->Checked == true) {
		int* per = new int[max + 1];

		for (int i = 0; i <= max; i++) per[i] = 0;

		for (int i = 0; i <= max; i++) {
			for (int j = 0; j < Particle->n; j++) {
				if (i == int(En[j])) per[i]++;
			}
			Styh << i << "\t" << per[i] << std::endl;
		}

		Exper << "Time = " << time / NumberOfExperiment << std::endl;
	}
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
