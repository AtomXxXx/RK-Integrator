#pragma once
#include "RK.h"

namespace RKGraph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RKForm
	/// </summary>
	public ref class RKForm : public System::Windows::Forms::Form
	{
	public:
		RKForm(void)
		{
			InitializeComponent();
			isFirstOrder = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RKForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  mainTableLayoutPanel;
	private: System::Windows::Forms::Button^  secondOrderButton;
	private: System::Windows::Forms::Button^  firstOrderButton;
	private: bool isFirstOrder;
	protected:

	protected:


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  expression;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  y0;

	private: System::Windows::Forms::TextBox^  x0;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::TextBox^  h;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::TextBox^  numh;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  Calculate;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->secondOrderButton = (gcnew System::Windows::Forms::Button());
			this->firstOrderButton = (gcnew System::Windows::Forms::Button());
			this->mainTableLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainTableLayoutPanel
			// 
			this->mainTableLayoutPanel->ColumnCount = 1;
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->mainTableLayoutPanel->Controls->Add(this->secondOrderButton, 0, 1);
			this->mainTableLayoutPanel->Controls->Add(this->firstOrderButton, 0, 0);
			this->mainTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainTableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->mainTableLayoutPanel->Name = L"mainTableLayoutPanel";
			this->mainTableLayoutPanel->RowCount = 2;
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->mainTableLayoutPanel->Size = System::Drawing::Size(587, 478);
			this->mainTableLayoutPanel->TabIndex = 0;
			// 
			// secondOrderButton
			// 
			this->secondOrderButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->secondOrderButton->Location = System::Drawing::Point(193, 333);
			this->secondOrderButton->Name = L"secondOrderButton";
			this->secondOrderButton->Size = System::Drawing::Size(200, 50);
			this->secondOrderButton->TabIndex = 1;
			this->secondOrderButton->Text = L"Second Order";
			this->secondOrderButton->UseVisualStyleBackColor = true;
			this->secondOrderButton->Click += gcnew System::EventHandler(this, &RKForm::secondOrderButton_Click);
			// 
			// firstOrderButton
			// 
			this->firstOrderButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->firstOrderButton->Location = System::Drawing::Point(193, 94);
			this->firstOrderButton->Name = L"firstOrderButton";
			this->firstOrderButton->Size = System::Drawing::Size(200, 50);
			this->firstOrderButton->TabIndex = 0;
			this->firstOrderButton->Text = L"First Order";
			this->firstOrderButton->UseVisualStyleBackColor = true;
			this->firstOrderButton->Click += gcnew System::EventHandler(this, &RKForm::firstOrderButton_Click);
			// 
			// RKForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 478);
			this->Controls->Add(this->mainTableLayoutPanel);
			this->Name = L"RKForm";
			this->Text = L"RKForm";
			this->Load += gcnew System::EventHandler(this, &RKForm::RKForm_Load);
			this->mainTableLayoutPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


		void InitializeFirstOrderPartialLayout()
		{
			this->tableLayoutPanel4->ColumnCount = 4;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel4->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->y0, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->x0, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(243, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(377, 29);
			this->tableLayoutPanel4->TabIndex = 1;
		}


		void InitializeSecondOrderPartialLayout()
		{
			this->tableLayoutPanel4->ColumnCount = 6;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->Controls->Add(this->textBox1, 5, 0);
			this->tableLayoutPanel4->Controls->Add(this->label6, 4, 0);
			this->tableLayoutPanel4->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->y0, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->x0, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(243, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(377, 29);
			this->tableLayoutPanel4->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(313, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(61, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(251, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"y\' 0";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;


			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());

			legend2->DockedToChartArea = L"ChartArea1";
			legend2->Name = L"Legend2";
			this->chart1->Legends->Add(legend2);

			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend2";
			series2->Name = L"y";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;

			this->chart1->Series->Add(series2);
		}


		void InitializeMainControls()
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->h = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->expression = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->y0 = (gcnew System::Windows::Forms::TextBox());
			this->x0 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numh = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Calculate = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.53211F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.46789F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(623, 70);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				39.18367F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60.81633F)));
			this->tableLayoutPanel5->Controls->Add(this->h, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 38);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(234, 29);
			this->tableLayoutPanel5->TabIndex = 2;
			// 
			// h
			// 
			this->h->Dock = System::Windows::Forms::DockStyle::Fill;
			this->h->Location = System::Drawing::Point(94, 3);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(137, 20);
			this->h->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Step Size";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				39.59184F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60.40816F)));
			this->tableLayoutPanel3->Controls->Add(this->expression, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(234, 29);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// expression
			// 
			this->expression->Dock = System::Windows::Forms::DockStyle::Fill;
			this->expression->Location = System::Drawing::Point(95, 3);
			this->expression->Name = L"expression";
			this->expression->Size = System::Drawing::Size(136, 20);
			this->expression->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 29);
			this->label1->TabIndex = 0;
			if (!isFirstOrder) this->label1->Text = L"y\'\'(x) = ";
			else this->label1->Text = L"y\'(x) = ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tableLayoutPanel4
			// 
			if (isFirstOrder)
			{
				InitializeFirstOrderPartialLayout();
			}
			else
			{
				InitializeSecondOrderPartialLayout();
			}
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(127, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"y0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"x0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// y0
			// 
			this->y0->Dock = System::Windows::Forms::DockStyle::Fill;
			this->y0->Location = System::Drawing::Point(189, 3);
			this->y0->Name = L"y0";
			this->y0->Size = System::Drawing::Size(56, 20);
			this->y0->TabIndex = 3;
			// 
			// x0
			// 
			this->x0->Dock = System::Windows::Forms::DockStyle::Fill;
			this->x0->Location = System::Drawing::Point(65, 3);
			this->x0->Name = L"x0";
			this->x0->Size = System::Drawing::Size(56, 20);
			this->x0->TabIndex = 2;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel6->Controls->Add(this->numh, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->Calculate, 2, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(243, 38);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(377, 29);
			this->tableLayoutPanel6->TabIndex = 3;
			// 
			// numh
			// 
			this->numh->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numh->Location = System::Drawing::Point(116, 3);
			this->numh->Name = L"numh";
			this->numh->Size = System::Drawing::Size(107, 20);
			this->numh->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 29);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Number of steps";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Calculate
			// 
			this->Calculate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Calculate->Location = System::Drawing::Point(229, 3);
			this->Calculate->Name = L"Calculate";
			this->Calculate->Size = System::Drawing::Size(145, 23);
			this->Calculate->TabIndex = 3;
			this->Calculate->Text = L"Calculate";
			this->Calculate->UseVisualStyleBackColor = true;
			this->Calculate->Click += gcnew System::EventHandler(this, &RKForm::Calculate_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->chart1, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 70);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(623, 406);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->DockedToChartArea = L"ChartArea1";
			legend1->ItemColumnSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::Line;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			this->chart1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			if(isFirstOrder) series1->Name = L"y";
			else series1->Name = L"y\'";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(617, 400);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 476);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"Runge Kutta";
			this->Load += gcnew System::EventHandler(this, &RKForm::RKForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
		}

	

private: System::Void firstOrderButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	isFirstOrder = true;
	InitializeMainControls();

	mainTableLayoutPanel->SuspendLayout();
	mainTableLayoutPanel->Visible = false;
}
private: System::Void secondOrderButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	isFirstOrder = false;
	InitializeMainControls();

	mainTableLayoutPanel->SuspendLayout();
	mainTableLayoutPanel->Visible = false;
}

	private: char* StringToCharArray(String^ string)
	{
		IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string);
		char* result = static_cast<char*>(ptrToNativeString.ToPointer());
		return result;
	}

	double GetNumber(char* infix)
	{
		int i = 0;
		int stack[50];
		int top = -1;
		char ch;
		bool decimal = false;
		bool negative = false;
		if (infix[i] == '-')
		{
			negative = true;
			i++;
		}
		while (true)
		{
			ch = infix[i++];
			if (isdigit(ch))
			{
				stack[++top] = ch - '0';
			}
			else if (ch == '.')
			{
				decimal = true;
				break;
			}
			else
			{
				break;
			}
		}
		double sum = 0;
		int power = 0;
		while (top != -1)
		{
			sum = sum + stack[top--] * powf(10, power);
			power++;
		}
		power = 1;
		if (decimal)
		{
			while (true)
			{
				ch = infix[i++];
				if (isdigit(ch))
				{
					int num = ch - '0';
					sum = sum + num * (1 / pow(10.0, power++));
				}
				else
				{
					break;
				}
			}
		}
		if (!negative)
			return sum;
		return sum * -1;
	}

private: System::Void Calculate_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (isFirstOrder)
	{
		double x0 = GetNumber(StringToCharArray(this->x0->Text));
		double y0 = GetNumber(StringToCharArray(this->y0->Text));
		double h = GetNumber(StringToCharArray(this->h->Text));
		double numh = GetNumber(StringToCharArray(this->numh->Text));

		char* infix = StringToCharArray(this->expression->Text);

		Token postfix[1000];
		int n = ConvertToPostfix(infix, postfix);

		System::Windows::Forms::DataVisualization::Charting::Series^  series1;
		series1 = chart1->Series->FindByName(L"y");
		series1->Points->Clear();

		for (int i = 0; i < numh; i++)
		{
			double result = RKFirstOrder(postfix, n, x0, y0, h);
			x0 = x0 + h;
			y0 = result;
			series1->Points->AddXY(x0, y0);
		}
	}
	else
	{
		double x0 = GetNumber(StringToCharArray(this->x0->Text));
		double y0 = GetNumber(StringToCharArray(this->y0->Text));
		double y1_0 = GetNumber(StringToCharArray(this->textBox1->Text));
		double h = GetNumber(StringToCharArray(this->h->Text));
		double numh = GetNumber(StringToCharArray(this->numh->Text));

		char* infix = StringToCharArray(this->expression->Text);

		System::Windows::Forms::DataVisualization::Charting::Series^  series1;
		series1 = chart1->Series->FindByName(L"y");
		series1->Points->Clear();

		System::Windows::Forms::DataVisualization::Charting::Series^  series2;
		series2 = chart1->Series->FindByName(L"y'");
		series2->Points->Clear();

		Token dydx[1], dzdx[1000];
		dydx[0].type = TokenType::Z;
		dydx[0].token = 'Z';

		int numDzdx = ConvertToPostfix(infix, dzdx);
		double yRes = 0.0;
		double y1Res = 0.0;

		for (int i = 0; i < numh; i++)
		{
			RKSimultaneousFirstOrder(dydx, dzdx, 1, numDzdx, x0, y0, y1_0, h, &yRes, &y1Res);
			x0 = x0 + h;
			y0 = yRes;
			y1_0 = y1Res;
			series1->Points->AddXY(x0, y0);
			series2->Points->AddXY(x0, y1_0);
		}
	}
}
private: System::Void RKForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
