#pragma once

namespace casherApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ lblBarCode;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonDot;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTax;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblSubTotal;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonRemoveItem;
	private: System::Windows::Forms::Button^ buttonPrint;
	private: System::Windows::Forms::Button^ buttonReset;
	private: System::Windows::Forms::Button^ buttonPay;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lblChange;
	private: System::Windows::Forms::Label^ lblCash;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->buttonRemoveItem = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonPay = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblChange = (gcnew System::Windows::Forms::Label());
			this->lblCash = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblTax = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblSubTotal = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblBarCode = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->buttonC);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->buttonDot);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button0);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Location = System::Drawing::Point(12, 8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(348, 435);
			this->panel1->TabIndex = 0;
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(221, 320);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(95, 95);
			this->buttonC->TabIndex = 0;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(221, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 95);
			this->button3->TabIndex = 0;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(221, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 95);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(221, 17);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(95, 95);
			this->button9->TabIndex = 0;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// buttonDot
			// 
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDot->Location = System::Drawing::Point(120, 320);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(95, 95);
			this->buttonDot->TabIndex = 0;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(120, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 95);
			this->button2->TabIndex = 0;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(120, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 95);
			this->button5->TabIndex = 0;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(120, 17);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 95);
			this->button8->TabIndex = 0;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(19, 320);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(95, 95);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(19, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 95);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(19, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 95);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(19, 17);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 95);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Location = System::Drawing::Point(695, 8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(649, 435);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 453);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1332, 265);
			this->panel3->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(21, 19);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1282, 204);
			this->panel4->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel7->Controls->Add(this->buttonRemoveItem);
			this->panel7->Controls->Add(this->buttonPrint);
			this->panel7->Controls->Add(this->buttonReset);
			this->panel7->Controls->Add(this->buttonPay);
			this->panel7->Location = System::Drawing::Point(886, 18);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(377, 164);
			this->panel7->TabIndex = 0;
			// 
			// buttonRemoveItem
			// 
			this->buttonRemoveItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRemoveItem->Location = System::Drawing::Point(191, 84);
			this->buttonRemoveItem->Name = L"buttonRemoveItem";
			this->buttonRemoveItem->Size = System::Drawing::Size(172, 68);
			this->buttonRemoveItem->TabIndex = 0;
			this->buttonRemoveItem->Text = L"remove item";
			this->buttonRemoveItem->UseVisualStyleBackColor = true;
			this->buttonRemoveItem->Click += gcnew System::EventHandler(this, &MyForm::buttonRemoveItem_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPrint->Location = System::Drawing::Point(13, 84);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(172, 68);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &MyForm::buttonPrint_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReset->Location = System::Drawing::Point(191, 11);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(172, 68);
			this->buttonReset->TabIndex = 0;
			this->buttonReset->Text = L"reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonPay
			// 
			this->buttonPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPay->Location = System::Drawing::Point(13, 11);
			this->buttonPay->Name = L"buttonPay";
			this->buttonPay->Size = System::Drawing::Size(172, 68);
			this->buttonPay->TabIndex = 0;
			this->buttonPay->Text = L"Pay";
			this->buttonPay->UseVisualStyleBackColor = true;
			this->buttonPay->Click += gcnew System::EventHandler(this, &MyForm::buttonPay_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel6->Controls->Add(this->comboBox1);
			this->panel6->Controls->Add(this->lblChange);
			this->panel6->Controls->Add(this->lblCash);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(460, 18);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(403, 164);
			this->panel6->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(194, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(195, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// lblChange
			// 
			this->lblChange->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblChange->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblChange->Location = System::Drawing::Point(194, 106);
			this->lblChange->Name = L"lblChange";
			this->lblChange->Size = System::Drawing::Size(196, 46);
			this->lblChange->TabIndex = 0;
			this->lblChange->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCash
			// 
			this->lblCash->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblCash->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCash->Location = System::Drawing::Point(194, 60);
			this->lblCash->Name = L"lblCash";
			this->lblCash->Size = System::Drawing::Size(196, 46);
			this->lblCash->TabIndex = 0;
			this->lblCash->Text = L"0";
			this->lblCash->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 106);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(158, 46);
			this->label11->TabIndex = 0;
			this->label11->Text = L"change";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(178, 46);
			this->label8->TabIndex = 0;
			this->label8->Text = L"M.payment";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 46);
			this->label9->TabIndex = 0;
			this->label9->Text = L"cost";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel5->Controls->Add(this->lblTotal);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->lblTax);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->lblSubTotal);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Location = System::Drawing::Point(24, 18);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(411, 164);
			this->panel5->TabIndex = 0;
			// 
			// lblTotal
			// 
			this->lblTotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(178, 106);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(216, 46);
			this->lblTotal->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 46);
			this->label4->TabIndex = 0;
			this->label4->Text = L"total";
			// 
			// lblTax
			// 
			this->lblTax->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblTax->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTax->Location = System::Drawing::Point(178, 60);
			this->lblTax->Name = L"lblTax";
			this->lblTax->Size = System::Drawing::Size(216, 46);
			this->lblTax->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 46);
			this->label3->TabIndex = 0;
			this->label3->Text = L"tax";
			// 
			// lblSubTotal
			// 
			this->lblSubTotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblSubTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubTotal->Location = System::Drawing::Point(178, 14);
			this->lblSubTotal->Name = L"lblSubTotal";
			this->lblSubTotal->Size = System::Drawing::Size(216, 46);
			this->lblSubTotal->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 46);
			this->label2->TabIndex = 0;
			this->label2->Text = L"sub total";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(366, 8);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(322, 345);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"item";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 61;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"qty";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 54;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"amount";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// lblBarCode
			// 
			this->lblBarCode->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBarCode->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblBarCode->Font = (gcnew System::Drawing::Font(L"CODE3X", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBarCode->Location = System::Drawing::Point(366, 356);
			this->lblBarCode->Name = L"lblBarCode";
			this->lblBarCode->Size = System::Drawing::Size(321, 86);
			this->lblBarCode->TabIndex = 3;
			this->lblBarCode->Text = L"barQode";
			this->lblBarCode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1368, 741);
			this->Controls->Add(this->lblBarCode);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Bondok_Casher";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		Double CostOfItem() {
			try {
				double sum = 0;
				for (int i = 0; i < dataGridView1->Rows->Count; i++) {
					sum = sum + Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value);
				}
				return sum;
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

		private:System::Void Change() {
			try
			{
				double tax = 3.9, q = 0, c ;
				if (dataGridView1->Rows->Count > 0) {
					q = (CostOfItem() + ((CostOfItem() * tax) / 100));
					c = Convert::ToInt32(lblCash->Text);
					lblChange->Text = String::Format("{0:c2}", (c-q));
				}
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		public:System::Void AddCost() {
			try
			{
				double tax=3.9, q=0;
				for (int i = 0; i < dataGridView1->Rows->Count; i++) {
					lblTax->Text = String::Format("{0:c2}", ((CostOfItem() * tax) / 100));
					lblSubTotal->Text = String::Format("{0:c2}", (CostOfItem()));
					lblTotal->Text= String::Format("{0:c2}",CostOfItem() + ((CostOfItem() * tax) / 100));

					q= (CostOfItem() + ((CostOfItem() * tax) / 100));

					lblBarCode->Text = Convert::ToString(q + CostOfItem());
				}

			}
			catch (Exception^ ex) {

			}
		}

private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);

	if (lblCash->Text=="0") {
		lblCash->Text = b->Text;
	}
	else if (b->Text == ".") {
		if (!lblCash->Text->Contains(".")) {
			lblCash->Text = lblCash->Text + b->Text;
		}
	}
	else
	{
		lblCash->Text = lblCash->Text + b->Text;
	}
}
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
	lblCash->Text = "0";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Add("Cash");
	comboBox1->Items->Add("Visa Card");
	comboBox1->Items->Add("Master Card");
}
private: System::Void buttonPay_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (comboBox1->Text == "Cash") {
		Change();
	}
	else
	{
		lblChange->Text = "";
		lblCash->Text = "0";
	}
}
private: System::Void buttonRemoveItem_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (DataGridViewRow ^ row in this->dataGridView1->SelectedRows) {
		dataGridView1->Rows->Remove(row);
		AddCost();

		if (comboBox1->Text == "Cash") {
			Change();
		}
		else
		{
			lblChange->Text = "";
			lblCash->Text = "0";
		}

	}
}
private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	lblBarCode->Text = "";
	lblCash->Text = "0";
	lblChange->Text = "";
	lblSubTotal->Text = "";
	lblTax->Text = "";
	lblTotal->Text = "";
	comboBox1->Text = "";
}

	   Bitmap^ bitmap;

private: System::Void buttonPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	int height = dataGridView1->Height;
	dataGridView1->Height = dataGridView1->RowCount * dataGridView1->RowTemplate->Height * 2;
	bitmap = gcnew Bitmap(dataGridView1->Width, dataGridView1->Height);
	dataGridView1->DrawToBitmap(bitmap, System::Drawing::Rectangle(0,0, dataGridView1->Width, dataGridView1->Height));
	printPreviewDialog1->PrintPreviewControl->Zoom = 1;
	printPreviewDialog1->ShowDialog();
	dataGridView1->Height = height;
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	e ->Graphics->DrawImage(bitmap, 0, 0);
}

};
}
