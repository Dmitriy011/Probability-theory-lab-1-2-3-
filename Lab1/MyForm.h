#pragma once

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <time.h>

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

	return factorial(n) / (factorial(n - k) * factorial(k)) ;
}

void experiment(size_t r,std::vector<double> p_i, std::vector<double>& n_i, std::vector<double> u_i_norm)
{
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














	private:
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
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
			this->textBox1->Text = L"10";
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
			this->label2->TabIndex = 6;
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
			this->dataGridView2->Size = System::Drawing::Size(830, 149);
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
			this->textBox4->TabIndex = 12;
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
			this->dataGridView1->Location = System::Drawing::Point(12, 349);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(830, 100);
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
			this->dataGridView3->Location = System::Drawing::Point(12, 455);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(830, 128);
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
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Fη(x)";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Fη(x)^";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(419, 388);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1061);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		srand(time(NULL));

		size_t M = Convert::ToInt32(textBox1->Text);
		size_t N = Convert::ToInt32(textBox2->Text);
		size_t r = Convert::ToInt32(textBox3->Text);
		size_t count_experement = Convert::ToInt32(textBox4->Text);

		//создание таблицы1 (Лаб1)
		dataGridView2->ColumnCount = r + 2;
		dataGridView2->RowCount = 5;
		dataGridView2->TopLeftHeaderCell->Value = "Table1";
		for (size_t i = 0; i < dataGridView2->Rows->Count; i++)
		{
			for (size_t j = 0; j < dataGridView2->ColumnCount; j++)
			{
				dataGridView2->Rows[i]->Cells[j]->Value = "";
			}
		}
		dataGridView2->Rows[0]->Cells[0]->Value = "i";
		dataGridView2->Rows[1]->Cells[0]->Value = "y_i";
		dataGridView2->Rows[2]->Cells[0]->Value = "p_i";
		dataGridView2->Rows[3]->Cells[0]->Value = "n_i";
		dataGridView2->Rows[4]->Cells[0]->Value = "n_i/ N";
		dataGridView2->Columns[0]->Width = 90;

		//создание таблицы2 (Лаб2)
		dataGridView1->RowCount = 2;
		dataGridView1->TopLeftHeaderCell->Value = "Table2";
		dataGridView1->Columns[0]->Width = 90;
		//создание таблицы1 (Лаб2)
		dataGridView3->RowCount = 4;
		dataGridView3->TopLeftHeaderCell->Value = "Table3";
		dataGridView3->ColumnCount = r + 2;
		for (size_t i = 0; i < dataGridView3->Rows->Count; i++)
		{
			for (size_t j = 0; j < dataGridView3->ColumnCount; j++)
			{
				dataGridView3->Rows[i]->Cells[j]->Value = "";
			}
		}
		dataGridView3->Rows[0]->Cells[0]->Value = "i";
		dataGridView3->Rows[1]->Cells[0]->Value = "y_i";
		dataGridView3->Rows[2]->Cells[0]->Value = "Р(<<Эта>> = y_i)";
		dataGridView3->Rows[3]->Cells[0]->Value = "n_i/ n";
		dataGridView3->Columns[0]->Width = 90;

		//переменные (общ.)
		std::vector<size_t> indexes;
		std::vector<size_t> y_i;
		//переменные (Лаб1)
		std::vector<double> p_i;
		std::vector<double> u_i_norm;
		std::vector<double> n_i;
		std::vector<double> n_i_norm;
		//indexes (табл1)
		for (size_t i = 1; i < dataGridView2->ColumnCount; i++)
		{
			indexes.push_back(i - 1);
			dataGridView2->Rows[0]->Cells[i]->Value = i - 1;
		}
		//indexes (табл3)
		for (size_t i = 1; i < dataGridView3->ColumnCount; i++)
		{
			dataGridView3->Rows[0]->Cells[i]->Value = i - 1;
		}
		//y_i (табл3)
		for (size_t i = 1; i < dataGridView3->ColumnCount; i++)
		{
			dataGridView3->Rows[1]->Cells[i]->Value = i - 1;
		}
		//y_i (табл1)
		for (size_t i = 1; i < dataGridView2->ColumnCount; i++)
		{
			y_i.push_back(i - 1);
			dataGridView2->Rows[1]->Cells[i]->Value = i - 1;
		}
		//p_i (табл1)
		for (size_t i = 1; i < dataGridView2->ColumnCount; i++)
		{
			p_i.push_back(combination(M, i - 1) * combination(N - M, r - (i - 1)) / combination(N, r));
			dataGridView2->Rows[2]->Cells[i]->Value = p_i[i-1];
		}
		//n_i = 0 для всех i (табл1)
		for (size_t j = 0; j < r + 1; j++)
		{
			n_i.push_back(0);
			n_i_norm.push_back(0);
		}
		//u_i_norm = rand для всех i (табл1)
		for (size_t i = 0; i < count_experement; i++)
		{
			u_i_norm.push_back((double)(rand()) / RAND_MAX);
		}

		//эксперимент
		experiment(r, p_i, n_i, u_i_norm);
		//заполнение n_i_norm
		for (size_t j = 0; j < r + 1; j++)
		{
			n_i_norm[j] = n_i[j] / count_experement;
		}
		//заполнение таблицы1 строками n_i и n_i_norm 
		for (size_t i = 1; i < dataGridView2->ColumnCount; i++)
		{
			dataGridView2->Rows[3]->Cells[i]->Value = n_i[i-1];
			dataGridView2->Rows[4]->Cells[i]->Value = n_i_norm[i - 1];
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
};
}
