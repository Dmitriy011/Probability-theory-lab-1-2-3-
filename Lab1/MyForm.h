#pragma once

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

double factorial(int number)
{
    int res = 1;
    for (int j = 1; j <= number; j++)
    {
        res = res * j;
    }

    return res;
}

double combination(int n, int k)
{
    if (n == k)
    {
        return 1;
    }
    if (k == 1)
    {
        return n;
    }
    if (k == 0)
    {
        return 1;
    }

    return factorial(n) / (factorial(n - k) * factorial(k));
}

double combination_2(int n, int k)
{
    double res = 1;
    for (int i = 1; i <= k; i++)
    {
        res *= double(n) / double(i);
        n--;
    }

    return res;
}

int experiment(int N, int M, int r)
{
    int n = 0;
    int tmp_N = N;
    int tmp_M = M;
    for (int i = 1; i <= r; i++)
    {
        int number = rand() % tmp_N + 1;
        if (number <= tmp_M)
        {
            n++;
            tmp_M--;
            tmp_N--;
        }
        else
        {
            if (number > tmp_M && number <= N)
            {
                tmp_N--;
            }
        }
    }

    return n;
}

std::string type_SystemString_to_String(System::String^ text_syst)
{
    char cStr[50] = { 0 };
    if (text_syst->Length < sizeof(cStr))
    {
        sprintf(cStr, "%s", text_syst);
    }
    std::string text_str(cStr);

    return text_str;
}

double Gamma_func(double value)
{
    if (value == 1)
    {
        return value;
    }
    if (value == 0.5)
    {
        const double PI = 3.141592653589793;
        return sqrt(PI);
    }

    return (value - 1) * Gamma_func(value - 1);
}

double integral_xhi_in_sqr(int r, double R0)
{
    int n = 100000;
    double a = 0;
    double b = R0;
    double res = 0;
    for (int i = 1; i <= n; i++)
    {
        double x1 = a + (b - a) * double(i - 1) / double(n);
        double gamma1 = Gamma_func(double(r) / 2);
        double x2 = a + (b - a) * double(i) / double(n);

        double g1 = pow(2, -double(r) / 2) * (1 / gamma1) * pow(x1, double(r) / 2 - 1) * std::exp(-x1 / 2);
        double g2 = pow(2, -double(r) / 2) * (1 / gamma1) * pow(x2, double(r) / 2 - 1) * std::exp(-x2 / 2);
        res += (g1 + g2) * double(b - a) / double(2 * n);
    }

    return res;
}

namespace Lab1
{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public: int count_tap = 0;

    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: bool button1_check = false;

    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Eη;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Выборочное_среднее;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dη;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
    private: System::Windows::Forms::DataGridView^ dataGridView4;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::DataGridView^ dataGridView5;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ Alpha;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Label^ label11;









    private:System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Eη = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Выборочное_среднее = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Dη = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->Alpha = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(12, 12);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(119, 44);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Вычислить";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(424, 27);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(823, 67);
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(164, 74);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(238, 20);
            this->textBox1->TabIndex = 3;
            this->textBox1->Text = L"5";
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(164, 27);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(238, 20);
            this->textBox2->TabIndex = 4;
            this->textBox2->Text = L"12";
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(161, 11);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(138, 13);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Колличество лампочек: N";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(161, 58);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(214, 13);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Колличество перегоревших лампочек: M";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(164, 115);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(238, 20);
            this->textBox3->TabIndex = 7;
            this->textBox3->Text = L"6";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(161, 99);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(241, 13);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Колличество лампочек, выбранных на удачу: r";
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(12, 195);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->Size = System::Drawing::Size(830, 124);
            this->dataGridView2->TabIndex = 10;
            this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(161, 138);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(244, 13);
            this->label4->TabIndex = 11;
            this->label4->Text = L"Колличество экспериментов: count_experiment";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(164, 151);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(238, 20);
            this->textBox4->TabIndex = 3;
            this->textBox4->Text = L"100000";
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(1349, 36);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(563, 379);
            this->pictureBox2->TabIndex = 13;
            this->pictureBox2->TabStop = false;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(1346, 13);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(50, 13);
            this->label5->TabIndex = 14;
            this->label5->Text = L"Справка";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
                this->Eη, this->Выборочное_среднее,
                    this->Column1, this->Dη, this->Column, this->Column2, this->Column3, this->Column4
            });
            this->dataGridView1->Location = System::Drawing::Point(12, 325);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(830, 73);
            this->dataGridView1->TabIndex = 15;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
            // 
            // Eη
            // 
            this->Eη->HeaderText = L"Eη";
            this->Eη->Name = L"Eη";
            // 
            // Выборочное_среднее
            // 
            this->Выборочное_среднее->HeaderText = L"Выборочное среднее (x_)";
            this->Выборочное_среднее->Name = L"Выборочное_среднее";
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"|Eη - x_|";
            this->Column1->Name = L"Column1";
            // 
            // Dη
            // 
            this->Dη->HeaderText = L"Dη ";
            this->Dη->Name = L"Dη";
            // 
            // Column
            // 
            this->Column->HeaderText = L"S * S";
            this->Column->Name = L"Column";
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"|Dη - S * S|";
            this->Column2->Name = L"Column2";
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"Me^";
            this->Column3->Name = L"Column3";
            // 
            // Column4
            // 
            this->Column4->HeaderText = L"R^";
            this->Column4->Name = L"Column4";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(421, 11);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(43, 13);
            this->label6->TabIndex = 17;
            this->label6->Text = L"Задача";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click_1);
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Location = System::Drawing::Point(12, 404);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->Size = System::Drawing::Size(830, 150);
            this->dataGridView3->TabIndex = 18;
            this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick_1);
            // 
            // chart1
            // 
            chartArea1->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea1);
            this->chart1->Cursor = System::Windows::Forms::Cursors::Default;
            legend1->Name = L"Legend1";
            this->chart1->Legends->Add(legend1);
            this->chart1->Location = System::Drawing::Point(12, 626);
            this->chart1->Name = L"chart1";
            this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
            series1->BorderWidth = 2;
            series1->ChartArea = L"ChartArea1";
            series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
            series1->LabelBorderWidth = 5;
            series1->Legend = L"Legend1";
            series1->Name = L"Fη(x)";
            series2->ChartArea = L"ChartArea1";
            series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
            series2->LabelBorderWidth = 30;
            series2->Legend = L"Legend1";
            series2->Name = L"Fη(x)^";
            this->chart1->Series->Add(series1);
            this->chart1->Series->Add(series2);
            this->chart1->Size = System::Drawing::Size(830, 252);
            this->chart1->TabIndex = 19;
            this->chart1->Text = L"chart1";
            this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(12, 560);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(226, 60);
            this->pictureBox3->TabIndex = 20;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(256, 583);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 13);
            this->label7->TabIndex = 21;
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
            // 
            // chart2
            // 
            chartArea2->Name = L"ChartArea1";
            this->chart2->ChartAreas->Add(chartArea2);
            this->chart2->Cursor = System::Windows::Forms::Cursors::Default;
            legend2->Name = L"Legend1";
            this->chart2->Legends->Add(legend2);
            this->chart2->Location = System::Drawing::Point(865, 100);
            this->chart2->Name = L"chart2";
            this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
            series3->BorderWidth = 2;
            series3->ChartArea = L"ChartArea1";
            series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
            series3->LabelBorderWidth = 5;
            series3->Legend = L"Legend1";
            series3->Name = L"Fη(x)";
            this->chart2->Series->Add(series3);
            this->chart2->Size = System::Drawing::Size(204, 185);
            this->chart2->TabIndex = 22;
            this->chart2->Text = L"chart2";
            this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click);
            // 
            // chart3
            // 
            chartArea3->Name = L"ChartArea1";
            this->chart3->ChartAreas->Add(chartArea3);
            this->chart3->Cursor = System::Windows::Forms::Cursors::Default;
            legend3->Name = L"Legend1";
            this->chart3->Legends->Add(legend3);
            this->chart3->Location = System::Drawing::Point(865, 301);
            this->chart3->Name = L"chart3";
            series4->ChartArea = L"ChartArea1";
            series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
            series4->LabelBorderWidth = 30;
            series4->Legend = L"Legend1";
            series4->Name = L"Fη(x)^";
            this->chart3->Series->Add(series4);
            this->chart3->Size = System::Drawing::Size(204, 184);
            this->chart3->TabIndex = 23;
            this->chart3->Text = L"chart3";
            // 
            // dataGridView4
            // 
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Location = System::Drawing::Point(12, 894);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->Size = System::Drawing::Size(535, 106);
            this->dataGridView4->TabIndex = 24;
            this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(1083, 505);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(78, 13);
            this->label8->TabIndex = 25;
            this->label8->Text = L"k интервалов ";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(1086, 521);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(118, 20);
            this->textBox5->TabIndex = 26;
            this->textBox5->Text = L"3";
            this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(1084, 584);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(65, 13);
            this->label9->TabIndex = 27;
            this->label9->Text = L"Значения zi";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(1087, 600);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(118, 20);
            this->textBox6->TabIndex = 28;
            this->textBox6->Text = L"1;2;5;";
            this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(1086, 626);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(119, 19);
            this->button1->TabIndex = 29;
            this->button1->Text = L"Ввести";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // dataGridView5
            // 
            this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView5->Location = System::Drawing::Point(1085, 661);
            this->dataGridView5->Name = L"dataGridView5";
            this->dataGridView5->Size = System::Drawing::Size(535, 149);
            this->dataGridView5->TabIndex = 30;
            this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellContentClick);
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(1087, 560);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(118, 20);
            this->textBox7->TabIndex = 32;
            this->textBox7->Text = L"0.45";
            // 
            // Alpha
            // 
            this->Alpha->AutoSize = true;
            this->Alpha->Location = System::Drawing::Point(1084, 544);
            this->Alpha->Name = L"Alpha";
            this->Alpha->Size = System::Drawing::Size(34, 13);
            this->Alpha->TabIndex = 31;
            this->Alpha->Text = L"Alpha";
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(1087, 818);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(293, 60);
            this->pictureBox4->TabIndex = 33;
            this->pictureBox4->TabStop = false;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(1386, 842);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(0, 13);
            this->label10->TabIndex = 34;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(553, 919);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(293, 60);
            this->pictureBox5->TabIndex = 35;
            this->pictureBox5->TabStop = false;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(718, 930);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(0, 13);
            this->label11->TabIndex = 36;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1924, 1061);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->Alpha);
            this->Controls->Add(this->dataGridView5);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->dataGridView4);
            this->Controls->Add(this->chart3);
            this->Controls->Add(this->chart2);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->chart1);
            this->Controls->Add(this->dataGridView3);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->dataGridView2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        srand(time(NULL));

        int M = Convert::ToInt32(textBox1->Text);
        int N = Convert::ToInt32(textBox2->Text);
        int r = Convert::ToInt32(textBox3->Text);
        int count_experement = Convert::ToInt32(textBox4->Text);
        int min_y_i = std::max(0, r - N + M);
        int max_y_i = std::min(M, r);

        //графики        
        using namespace System::Windows::Forms::DataVisualization::Charting;
        //chart 1
        Series^ series_F_theory_1 = chart1->Series[0];
        series_F_theory_1->BorderWidth = 2;
        Series^ series_F_selection_1 = chart1->Series[1];
        series_F_selection_1->BorderWidth = 2;
        chart1->Series[0]->Points->Clear();
        chart1->Series[1]->Points->Clear();
        //chart 2
        Series^ series_F_theory_2 = chart2->Series[0];
        series_F_theory_2->BorderWidth = 2;
        Series^ series_F_selection_3 = chart3->Series[0];
        series_F_selection_3->BorderWidth = 2;
        chart2->Series[0]->Points->Clear();
        chart3->Series[0]->Points->Clear();

        //создание таблицы1 (Лаб1)
        dataGridView2->ColumnCount = max_y_i - min_y_i + 2;
        dataGridView2->RowCount = 4;
        dataGridView2->TopLeftHeaderCell->Value = "Table1: Lab1";
        for (size_t i = 0; i < dataGridView2->RowCount; i++)
        {
            for (size_t j = 0; j < dataGridView2->ColumnCount; j++)
            {
                dataGridView2->Rows[i]->Cells[j]->Value = "";
            }
        }
        dataGridView2->Rows[0]->Cells[0]->Value = "indexes";
        dataGridView2->Rows[1]->Cells[0]->Value = "y_i";
        dataGridView2->Rows[2]->Cells[0]->Value = "n_i";
        dataGridView2->Rows[3]->Cells[0]->Value = "n_i/ N";
        dataGridView2->Columns[0]->Width = 90;
        //создание табл2 (Лаб2)
        dataGridView1->RowCount = 2;
        dataGridView1->TopLeftHeaderCell->Value = "Table2: Lab2";
        dataGridView1->Columns[0]->Width = 90;
        //создание табл3 (Лаб2)
        dataGridView3->RowCount = 5;
        dataGridView3->TopLeftHeaderCell->Value = "Table3: Lab2";
        dataGridView3->ColumnCount = max_y_i - min_y_i + 2;
        for (size_t i = 0; i < dataGridView3->Rows->Count; i++)
        {
            for (size_t j = 0; j < dataGridView3->ColumnCount; j++)
            {
                dataGridView3->Rows[i]->Cells[j]->Value = "";
            }
        }
        dataGridView3->Rows[0]->Cells[0]->Value = "indexes";
        dataGridView3->Rows[1]->Cells[0]->Value = "y_i";
        dataGridView3->Rows[2]->Cells[0]->Value = "Р(с.в. = y_i) = p_i";
        dataGridView3->Rows[3]->Cells[0]->Value = "n_i/ N";
        dataGridView3->Rows[4]->Cells[0]->Value = "| n_i/N - pi |";
        dataGridView3->Columns[0]->Width = 90;

        //переменные (общ.)
        std::vector<size_t> indexes;
        std::vector<size_t> y_i;
        //переменные л1
        std::vector<double> u_i_norm;
        std::vector<double> n_i;
        std::vector<double> n_i_norm;
        //переменные л2
        double E_math_waiting = 0.0; //мат ожидание
        double x_selective_average = 0.0; //выборочное среднее
        double difference_E_math_waiting_And_X_sample_mean = 0.0; //разница мат ож и выборочного среднего
        double D_dispersion = 0.0; //дисперсия
        double D_selective_average = 0.0; //дисперсия выборочного среднего
        double differenceD_selective_average_And_D_selective_average = 0.0; //дисперсия выборочного среднего
        double Me_selection = 0.0; //Медиана выборки
        double scope_selection = 0.0; //Размах выборки
        std::vector<double> x_i;
        std::vector<double> F_theory; //Функц распределения (теоретич)
        std::vector<double> F_selection; //Функц распределения (теоретич)
        std::vector<double> p_i;
        double max_difference_frequency_and_pi = 0;
        //переменные л3
        /*
        System::String^ values_z_str = textBox6->Text;
        int size_values_z_str = 0;
        std::vector<int> values_z;
        int tmp_z = 0;
        string value = "";
        while (true)
        {
            //string tmp = size_values_z_str[tmp_z];
            //value.insert(0, );


            if(values_z_str[tmp_z] == ';')
            {
                tmp_z++;
            }


        }
        */

        for (size_t i = 1; i < dataGridView2->ColumnCount; i++)
        {
            //y_i т1,л1, т3,л2
            y_i.push_back(min_y_i + i - 1);
            dataGridView2->Rows[1]->Cells[i]->Value = min_y_i + i - 1;
            dataGridView3->Rows[1]->Cells[i]->Value = min_y_i + i - 1;

            //indexes т1,л1, т3,л2
            indexes.push_back(i - 1);
            dataGridView2->Rows[0]->Cells[i]->Value = i - 1;
            dataGridView3->Rows[0]->Cells[i]->Value = i - 1;
        }

        size_t k = 1;
        for (size_t i = min_y_i; i <= max_y_i; i++)
        {
            //p_i т3,л2
            p_i.push_back(combination_2(M, i) * combination_2(N - M, r - i) / combination_2(N, r));
            dataGridView3->Rows[2]->Cells[k]->Value = combination_2(M, i) * combination_2(N - M, r - i) / combination_2(N, r);
            k++;

            //создание n_i vec для т1,л1
            n_i.push_back(0);
        }

        double tmp_math_waitng_in_pow2 = 0.0;
        for (size_t i = 0; i < p_i.size(); i++)
        {
            //Мат ожидание т2,л2
            E_math_waiting += p_i[i] * y_i[i];

            //Мат.ожидание(с.в. ^ 2)
            tmp_math_waitng_in_pow2 += p_i[i] * y_i[i] * y_i[i];
        }
        //Заполнение мат ожидания т2,л2:
        dataGridView1->Rows[0]->Cells[0]->Value = E_math_waiting;

        //Дисперсия:
        D_dispersion = tmp_math_waitng_in_pow2 - E_math_waiting * E_math_waiting;
        //Заполнение дисперсии т2,л2:
        dataGridView1->Rows[0]->Cells[3]->Value = D_dispersion;

        //заполнение vec n_i для т1,л1
        for (size_t i = 0; i < count_experement; i++)
        {
            int count_burned_lamps_in_experiment = experiment(N, M, r);
            x_i.push_back(count_burned_lamps_in_experiment);
            k = 0;
            for (size_t j = min_y_i; j <= max_y_i; j++)
            {
                if (count_burned_lamps_in_experiment == j)
                {
                    n_i[k]++;
                }
                k++;
            }
        }

        //заполнение vec n_i_norm для т1,л1
        for (size_t i = 0; i < n_i.size(); i++)
        {
            n_i_norm.push_back(n_i[i] / count_experement);
        }
        for (size_t i = 1; i < dataGridView2->ColumnCount; i++)
        {
            //заполнение строками n_i и n_i_norm т1,л1 и т3,л2 
            dataGridView2->Rows[2]->Cells[i]->Value = n_i[i - 1];
            dataGridView2->Rows[3]->Cells[i]->Value = n_i_norm[i - 1];
            dataGridView3->Rows[3]->Cells[i]->Value = n_i_norm[i - 1];

            //|n_i_norm - p_i| т3,л2
            dataGridView3->Rows[4]->Cells[i]->Value = std::abs(n_i_norm[i - 1] - p_i[i - 1]);
        }
        
        //Выборочное среднее (мат.ож из эксперимента)
        for (size_t i = 0; i < n_i.size(); i++)
        {
            x_selective_average += n_i[i] * y_i[i];
        }
        x_selective_average = x_selective_average / (count_experement);
        //Заполнение выборочного среднего (мат.ож из эксперимента) т2,л2
        dataGridView1->Rows[0]->Cells[1]->Value = x_selective_average;
       
        //Разница Мат ожидания и выборочного среднего
        difference_E_math_waiting_And_X_sample_mean = abs(E_math_waiting - x_selective_average);
        //Заполнение разницы мат ожидания и выборочного среднего т2,л2
        dataGridView1->Rows[0]->Cells[2]->Value = difference_E_math_waiting_And_X_sample_mean;
        
        //Выборочная дисперсия (дисперсия из эксперимента)
        for (size_t i = 0; i < y_i.size(); i++)
        {
            D_selective_average += n_i[i] * (y_i[i] - x_selective_average) * (y_i[i] - x_selective_average);
        }
        D_selective_average = D_selective_average / count_experement;
        dataGridView1->Rows[0]->Cells[4]->Value = D_selective_average;
        
        //разница дисперсии и выборочной дисперсии
        differenceD_selective_average_And_D_selective_average = abs(D_dispersion - D_selective_average);
        //Заполнение разницы дисперсии и выборочной дисперсии т2,л2
        dataGridView1->Rows[0]->Cells[5]->Value = differenceD_selective_average_And_D_selective_average;
        
        //Размах выборки
        sort(x_i.begin(), x_i.end());
        scope_selection = x_i[x_i.size() - 1] - x_i[0];
        //Заполнение Размаха выборки
        dataGridView1->Rows[0]->Cells[7]->Value = scope_selection;
        
        //Медиана выборки:
        int tmp_k = 0.0;
        tmp_k = count_experement / 2;
        if (count_experement % 2 == 1)
        {
            Me_selection = x_i[tmp_k + 1 - 1];
        }
        else
        {
            Me_selection = double((x_i[tmp_k - 1] + x_i[tmp_k + 1 - 1])) / 2;
        }
        //Заполнение Медианы выборки
        dataGridView1->Rows[0]->Cells[6]->Value = Me_selection;

        //Функция распределения (теоретич)
        double tmp_p = 0.0;
        F_theory.push_back(0.0);
        for (double i = 0; i < p_i.size(); i++)
        {
            tmp_p += p_i[i];
            F_theory.push_back(tmp_p);
        }
        //Отрисовка функции распределения (теоретич)
        for (double i = 0; i < F_theory.size(); i++)
        {
            series_F_theory_1->Points->AddXY(i - 1, F_theory[i]);
            series_F_theory_1->Points->AddXY(i, F_theory[i]);

            series_F_theory_2->Points->AddXY(i - 1, F_theory[i]);
            series_F_theory_2->Points->AddXY(i, F_theory[i]);
        }

        //Функция распределения (выборка)
        double tmp_n_norm = 0.0;
        F_selection.push_back(0.0);
        for (int i = 0; i < n_i_norm.size(); i++)
        {
            tmp_n_norm += n_i_norm[i];
            F_selection.push_back(tmp_n_norm);
        }
        for (int i = 0; i < F_selection.size(); i++)
        {
            series_F_selection_1->Points->AddXY(i - 1, F_selection[i]);
            series_F_selection_1->Points->AddXY(i, F_selection[i]);

            series_F_selection_3->Points->AddXY(i - 1, F_selection[i]);
            series_F_selection_3->Points->AddXY(i, F_selection[i]);
        }

        //создание табл4 (л2)
        dataGridView4->RowCount = 3;
        dataGridView4->TopLeftHeaderCell->Value = "F";
        dataGridView4->ColumnCount = F_theory.size();
        dataGridView4->Rows[0]->Cells[0]->Value = "F_theory";
        dataGridView4->Rows[1]->Cells[0]->Value = "F_selection";
        dataGridView4->Rows[2]->Cells[0]->Value = "difference";

        double max_difference_F_and_F_selection = 0;
        for (int i = 1; i < F_theory.size(); i++)
        {
            dataGridView4->Columns[i]->Width = 70;
            dataGridView4->Rows[0]->Cells[i]->Value = F_theory[i];
            dataGridView4->Rows[1]->Cells[i]->Value = F_selection[i];
            dataGridView4->Rows[2]->Cells[i]->Value = abs(F_selection[i] - F_theory[i]);
        }

        double max_difference_F_theory_and_F_selection = 0;
        for (int i = 1; i < F_theory.size(); i++)
        {
            if (abs(F_selection[i] - F_theory[i]) > max_difference_F_theory_and_F_selection)
            {
                max_difference_F_theory_and_F_selection = abs(F_selection[i] - F_theory[i]);
            }
        }
        label11->Text = max_difference_F_theory_and_F_selection.ToString();

        
        for (int i = 0; i < F_theory.size(); i++)
        {
            F_theory.pop_back();
            F_selection.pop_back();
        }

        //Максимум от разности частоты и вероятности
        double tmp_max = 0;
        for (int i = 0; i < p_i.size(); i++)
        {
            tmp_max = std::abs(n_i_norm[i] - p_i[i]);
            if (max_difference_frequency_and_pi < tmp_max)
            {
                max_difference_frequency_and_pi = tmp_max;
            }
        }

        label7->Text = max_difference_frequency_and_pi.ToString();
        int k_count_intervals = Convert::ToInt32(textBox5->Text);
        std::vector<int> z_value_i;
        int checked_count_click = 0;
        //создание табл5 (л3)
        dataGridView5->RowCount = 8;
        dataGridView5->ColumnCount = k_count_intervals + 2;
        dataGridView5->Rows[0]->Cells[0]->Value = "k";
        dataGridView5->Rows[1]->Cells[0]->Value = "intervals";
        dataGridView5->Rows[2]->Cells[0]->Value = "n_new_for_intervals";
        dataGridView5->Rows[3]->Cells[0]->Value = "q_j";
        dataGridView5->Rows[4]->Cells[0]->Value = "R0_i";
        dataGridView5->Rows[5]->Cells[0]->Value = "R0";
        dataGridView5->Rows[6]->Cells[0]->Value = "F with dash";
        dataGridView5->Rows[7]->Cells[0]->Value = "alpha";
        for (int i = 0; i < k_count_intervals  +1; i++)
        {
            dataGridView5->Columns[i]->Width = 70;
        }

        double alpha = 0.0;

        String^ tmp_text1_for_intervals;
        string cur_value_str = "";
        String^ tmp_text2_for_aplha;
        if (button1_check)
        {
            tmp_text1_for_intervals = textBox6->Text;
            std::string text_str1_for_intervals = type_SystemString_to_String(tmp_text1_for_intervals);
            
            tmp_text2_for_aplha = textBox7->Text;
            std::string text_str2_for_alpha = type_SystemString_to_String(tmp_text2_for_aplha);
            alpha = atof(text_str2_for_alpha.c_str());

            for (int i = 0; i < text_str1_for_intervals.size(); i++)
            {
                while (text_str1_for_intervals[i] != ';')
                {
                    cur_value_str += text_str1_for_intervals[i];
                    i++;
                }

                z_value_i.push_back(std::stoi(cur_value_str));
                cur_value_str = "";
            }
        }

        std::vector<int> n_new_for_intervals;
        std::vector<double> q_j;
        double R_0;
        for (int i = 0; i < k_count_intervals + 1; i++)
        {
            n_new_for_intervals.push_back(0);
            q_j.push_back(0);
        }

        for (int i = 0; i < k_count_intervals; i++)
        {
            dataGridView5->Rows[1]->Cells[i + 1]->Value = z_value_i[i];
        }
        dataGridView5->Rows[0]->Cells[1]->Value = k_count_intervals;
        
        int z = 0;
        for (size_t i = 0; i < z_value_i.size(); i++)
        {
            while (y_i[z] < z_value_i[i])
            {
                n_new_for_intervals[i] = n_new_for_intervals[i] + n_i[z];
                z++;
            }
        }
        while (z < y_i.size() && z_value_i[z_value_i.size() - 1] >= y_i[z])
        {
            n_new_for_intervals[n_new_for_intervals.size() - 1] = n_new_for_intervals[n_new_for_intervals.size() - 1] + n_i[z];
            z++;
        }

        z = 0;
        for (size_t i = 0; i < z_value_i.size(); i++)
        {
            while (y_i[z] < z_value_i[i])
            {
                q_j[i] = q_j[i] + p_i[z];
                z++;
            }
        }
        while (z < y_i.size() && z_value_i[z_value_i.size() - 1] >= y_i[z])
        {
            q_j[q_j.size() - 1] = q_j[q_j.size() - 1] + p_i[z];
            z++;
        }

        std::vector<double> R_0_i;
        for (int i = 0; i < k_count_intervals + 1; i++)
        {
            R_0_i.push_back(0);
        }
        for (int i = 0; i < k_count_intervals + 1; i++)
        {
            R_0_i[i] = (n_new_for_intervals[i] - count_experement * q_j[i]) * (n_new_for_intervals[i] - count_experement * q_j[i]) / (count_experement * q_j[i]);
        }

        double R0;
        for (int i = 0; i < k_count_intervals + 1; i++)
        {
            R0 += (n_new_for_intervals[i] - count_experement * q_j[i]) * (n_new_for_intervals[i] - count_experement * q_j[i]) / (count_experement * q_j[i]);
        }
        
        double F_with_dash;
        F_with_dash = (1 - integral_xhi_in_sqr(k_count_intervals + 1, R0));

        for (int i = 0; i < n_new_for_intervals.size(); i++)
        {
            dataGridView5->Rows[2]->Cells[i + 1]->Value = n_new_for_intervals[i];
            dataGridView5->Rows[3]->Cells[i + 1]->Value = q_j[i];
            dataGridView5->Rows[4]->Cells[i+1]->Value = R_0_i[i];
        }
        dataGridView5->Rows[5]->Cells[1]->Value = R0;
        dataGridView5->Rows[6]->Cells[1]->Value = F_with_dash;
        dataGridView5->Rows[7]->Cells[1]->Value = alpha;

        if (F_with_dash > alpha)
        {
            label10->Text = "Yes";
        }
        else
        {
            label10->Text = "No";
        }

    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
    {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
    {

    }
    private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void dataGridView3_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        button1_check = true;
    }
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}