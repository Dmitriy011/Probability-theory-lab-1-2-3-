#pragma once

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <cmath>

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
    /*
    for (int i = 0; i < u_i_norm.size(); i++)
    {
        double sum_p = 0;
        int k = 0;

        while (k < r + 1 || sum_p != 1)
        {
            if (u_i_norm[i] >= sum_p)
            {
                sum_p = sum_p + p_i[k];

                if (u_i_norm[i] < sum_p)
                {
                    n_i[k]++;
                    break;
                }

                k++;
            }
        }
    }
    */
}

namespace Lab1
{

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







    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
            this->dataGridView2->Size = System::Drawing::Size(733, 124);
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
            this->dataGridView3->Size = System::Drawing::Size(733, 150);
            this->dataGridView3->TabIndex = 18;
            this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick_1);
            // 
            // chart1
            // 
            chartArea1->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend1";
            this->chart1->Legends->Add(legend1);
            this->chart1->Location = System::Drawing::Point(874, 195);
            this->chart1->Name = L"chart1";
            this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
            series1->BorderWidth = 2;
            series1->ChartArea = L"ChartArea1";
            series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series1->LabelBorderWidth = 5;
            series1->Legend = L"Legend1";
            series1->Name = L"Fη(x)";
            series2->ChartArea = L"ChartArea1";
            series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series2->LabelBorderWidth = 30;
            series2->Legend = L"Legend1";
            series2->Name = L"Fη(x)^";
            this->chart1->Series->Add(series1);
            this->chart1->Series->Add(series2);
            this->chart1->Size = System::Drawing::Size(419, 388);
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
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1924, 1061);
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
        std::vector<double> F_theory; //Размах выборки
        std::vector<double> p_i;
        double max_difference_frequency_and_pi = 0;

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
            p_i.push_back(combination(M, i) * combination(N - M, r - i) / combination(N, r));
            dataGridView3->Rows[2]->Cells[k]->Value = combination(M, i) * combination(N - M, r - i) / combination(N, r);
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
        //Дисперсия:
        D_dispersion = tmp_math_waitng_in_pow2 - E_math_waiting * E_math_waiting;
        //Заполнение мат ожидания т2,л2:
        dataGridView1->Rows[0]->Cells[0]->Value = E_math_waiting;
        //Заполнение дисперсии т2,л2:
        dataGridView1->Rows[0]->Cells[3]->Value = D_dispersion;
        //заполнение vec n_i для табл1 (лаб1)
        for (size_t i = 0; i < count_experement; i++)
        {
            int count_burned_lamps_in_experiment = experiment(N, M, r);
            k = 0;
            for (size_t i = min_y_i; i <= max_y_i; i++)
            {
                if (count_burned_lamps_in_experiment == i)
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
            dataGridView2->Rows[2]->Cells[i]->Value = n_i[i-1];
            dataGridView2->Rows[3]->Cells[i]->Value = n_i_norm[i - 1];
            dataGridView3->Rows[3]->Cells[i]->Value = n_i_norm[i - 1];

            //|n_i_norm - p_i| т3,л2
            dataGridView3->Rows[4]->Cells[i]->Value = std::abs(n_i_norm[i - 1] - p_i[i-1]);
        }
        //Выборочное среднее (мат.ож из эксперимента)
        for (size_t i = 0; i < y_i.size(); i++)
        {
            x_selective_average += y_i[i];
        }
        x_selective_average /= y_i.size();
        //Заполнение выборочного среднего (мат.ож из эксперимента) т2,л2
        dataGridView1->Rows[0]->Cells[1]->Value = x_selective_average;
        //Разница Мат ожидания и выборочного среднего
        difference_E_math_waiting_And_X_sample_mean = abs(E_math_waiting - x_selective_average);
        //Заполнение разницы мат ожидания и выборочного среднего т2,л2
        dataGridView1->Rows[0]->Cells[2]->Value = difference_E_math_waiting_And_X_sample_mean;
        //Выборочная дисперсия (дисперсия из эксперимента)
        for (size_t i = 0; i < y_i.size(); i++)
        {
            D_selective_average += (y_i[i] - x_selective_average) * (y_i[i] - x_selective_average);
        }
        D_selective_average = D_selective_average / y_i.size();
        dataGridView1->Rows[0]->Cells[4]->Value = D_selective_average;
        //разница дисперсии и выборочной дисперсии
        differenceD_selective_average_And_D_selective_average = abs(D_dispersion - D_selective_average);
        //Заполнение дисперсии т2,л2
        dataGridView1->Rows[0]->Cells[5]->Value = differenceD_selective_average_And_D_selective_average;
        //Размах выборки
        scope_selection = y_i[y_i.size() - 1] - y_i[0];
        //Заполнение Размаха выборки
        dataGridView1->Rows[0]->Cells[7]->Value = scope_selection;
        //Медиана выборки:
        int tmp_k = 0.0;
        tmp_k = y_i.size() / 2;
        if(y_i.size() % 2 == 1)
        {
            Me_selection = y_i[tmp_k + 1 - 1];
        }
        else
        {
            Me_selection = double((y_i[tmp_k - 1] + y_i[tmp_k + 1 - 1]))/2;
        }
        //Заполнение Медианы выборки
        dataGridView1->Rows[0]->Cells[6]->Value = Me_selection;
       
        //F_theory.push_back()
        using namespace System::Windows::Forms::DataVisualization::Charting;
        Series^ series_F_theory = chart1->Series[0];
        series_F_theory->BorderWidth = 4;
        Series^ series12 = chart1->Series[1];
        series12->BorderWidth = 4;
        //chart1->Series[0]->Points->Clear();
        //chart1->Series[1]->Points->Clear();

        
        double tmp_p = 0.0;
        F_theory.push_back(0);
        for (double i = 0; i < p_i.size(); i++)
        {
            tmp_p += p_i[i];
            F_theory.push_back(tmp_p);
        }

        for (double i = 0; i < p_i.size(); i++)
        {
            series_F_theory->Points->AddXY(i, F_theory[i]);
            series_F_theory->Points->AddXY(i+1, F_theory[i]);
        }
       

        /*
        int z = 0;
        double x = double(int(y_i[0]) - 1);
        while (F_theory[z] != 1 && z < F_theory.size())
        {
            for(int i = 0; i < y_i.size(); i++)
            {
                if(x <= y_i[i])
                {
                    series_F_theory->Points->AddXY(x, F_theory[z]);
                    x += 0.2;
                }
                else
                {
                    z++;
                    break;
                }
            }
        }
        */

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
};
}