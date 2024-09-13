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
	private: System::Windows::Forms::Button^ watermelon_drink;
	private: System::Windows::Forms::Button^ chocolate_drink;
	private: System::Windows::Forms::Button^ green_tea;
	private: System::Windows::Forms::Button^ coffe;
	private: System::Windows::Forms::Button^ tako;
	private: System::Windows::Forms::Button^ stake;
	private: System::Windows::Forms::Button^ sawerma;
	private: System::Windows::Forms::Button^ salata;
	private: System::Windows::Forms::Button^ pasta;
	private: System::Windows::Forms::Button^ korien_ramen;
	private: System::Windows::Forms::Button^ ramen;
	private: System::Windows::Forms::Button^ pizza;
	private: System::Windows::Forms::Button^ cake_chocolate;
	private: System::Windows::Forms::Button^ candys;
	private: System::Windows::Forms::Button^ burger_chicken;
	private: System::Windows::Forms::Button^ burger_beef;
	private: System::Windows::Forms::Button^ molton_cake;
	private: System::Windows::Forms::Button^ donat;
	private: System::Windows::Forms::Button^ icecream;
	private: System::Windows::Forms::Button^ ice_tea;
	private: System::Windows::Forms::Button^ chese_cake;
	private: System::Windows::Forms::Button^ cake_vanilla;
	private: System::Windows::Forms::Button^ waffel;
	private: System::Windows::Forms::Button^ rolls_cake;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->tako = (gcnew System::Windows::Forms::Button());
			this->stake = (gcnew System::Windows::Forms::Button());
			this->sawerma = (gcnew System::Windows::Forms::Button());
			this->salata = (gcnew System::Windows::Forms::Button());
			this->pasta = (gcnew System::Windows::Forms::Button());
			this->korien_ramen = (gcnew System::Windows::Forms::Button());
			this->ramen = (gcnew System::Windows::Forms::Button());
			this->pizza = (gcnew System::Windows::Forms::Button());
			this->cake_chocolate = (gcnew System::Windows::Forms::Button());
			this->candys = (gcnew System::Windows::Forms::Button());
			this->burger_chicken = (gcnew System::Windows::Forms::Button());
			this->burger_beef = (gcnew System::Windows::Forms::Button());
			this->molton_cake = (gcnew System::Windows::Forms::Button());
			this->donat = (gcnew System::Windows::Forms::Button());
			this->icecream = (gcnew System::Windows::Forms::Button());
			this->ice_tea = (gcnew System::Windows::Forms::Button());
			this->chese_cake = (gcnew System::Windows::Forms::Button());
			this->cake_vanilla = (gcnew System::Windows::Forms::Button());
			this->waffel = (gcnew System::Windows::Forms::Button());
			this->rolls_cake = (gcnew System::Windows::Forms::Button());
			this->chocolate_drink = (gcnew System::Windows::Forms::Button());
			this->green_tea = (gcnew System::Windows::Forms::Button());
			this->coffe = (gcnew System::Windows::Forms::Button());
			this->watermelon_drink = (gcnew System::Windows::Forms::Button());
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
			this->panel2->SuspendLayout();
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
			this->panel2->Controls->Add(this->tako);
			this->panel2->Controls->Add(this->stake);
			this->panel2->Controls->Add(this->sawerma);
			this->panel2->Controls->Add(this->salata);
			this->panel2->Controls->Add(this->pasta);
			this->panel2->Controls->Add(this->korien_ramen);
			this->panel2->Controls->Add(this->ramen);
			this->panel2->Controls->Add(this->pizza);
			this->panel2->Controls->Add(this->cake_chocolate);
			this->panel2->Controls->Add(this->candys);
			this->panel2->Controls->Add(this->burger_chicken);
			this->panel2->Controls->Add(this->burger_beef);
			this->panel2->Controls->Add(this->molton_cake);
			this->panel2->Controls->Add(this->donat);
			this->panel2->Controls->Add(this->icecream);
			this->panel2->Controls->Add(this->ice_tea);
			this->panel2->Controls->Add(this->chese_cake);
			this->panel2->Controls->Add(this->cake_vanilla);
			this->panel2->Controls->Add(this->waffel);
			this->panel2->Controls->Add(this->rolls_cake);
			this->panel2->Controls->Add(this->chocolate_drink);
			this->panel2->Controls->Add(this->green_tea);
			this->panel2->Controls->Add(this->coffe);
			this->panel2->Controls->Add(this->watermelon_drink);
			this->panel2->Location = System::Drawing::Point(695, 8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(650, 435);
			this->panel2->TabIndex = 0;
			// 
			// tako
			// 
			this->tako->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tako.BackgroundImage")));
			this->tako->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tako->ForeColor = System::Drawing::Color::Blue;
			this->tako->Location = System::Drawing::Point(526, 322);
			this->tako->Margin = System::Windows::Forms::Padding(0);
			this->tako->Name = L"tako";
			this->tako->Size = System::Drawing::Size(95, 95);
			this->tako->TabIndex = 23;
			this->tako->Text = L"2.9$";
			this->tako->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->tako->UseVisualStyleBackColor = true;
			this->tako->Click += gcnew System::EventHandler(this, &MyForm::tako_Click);
			// 
			// stake
			// 
			this->stake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stake.BackgroundImage")));
			this->stake->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stake->ForeColor = System::Drawing::Color::Blue;
			this->stake->Location = System::Drawing::Point(526, 221);
			this->stake->Margin = System::Windows::Forms::Padding(0);
			this->stake->Name = L"stake";
			this->stake->Size = System::Drawing::Size(95, 95);
			this->stake->TabIndex = 22;
			this->stake->Text = L"9.5$";
			this->stake->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->stake->UseVisualStyleBackColor = true;
			this->stake->Click += gcnew System::EventHandler(this, &MyForm::stake_Click);
			// 
			// sawerma
			// 
			this->sawerma->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sawerma.BackgroundImage")));
			this->sawerma->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sawerma->ForeColor = System::Drawing::Color::Blue;
			this->sawerma->Location = System::Drawing::Point(526, 120);
			this->sawerma->Margin = System::Windows::Forms::Padding(0);
			this->sawerma->Name = L"sawerma";
			this->sawerma->Size = System::Drawing::Size(95, 95);
			this->sawerma->TabIndex = 21;
			this->sawerma->Text = L"4.9$";
			this->sawerma->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->sawerma->UseVisualStyleBackColor = true;
			this->sawerma->Click += gcnew System::EventHandler(this, &MyForm::sawerma_Click);
			// 
			// salata
			// 
			this->salata->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salata.BackgroundImage")));
			this->salata->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salata->ForeColor = System::Drawing::Color::Blue;
			this->salata->Location = System::Drawing::Point(526, 19);
			this->salata->Margin = System::Windows::Forms::Padding(0);
			this->salata->Name = L"salata";
			this->salata->Size = System::Drawing::Size(95, 95);
			this->salata->TabIndex = 20;
			this->salata->Text = L"0.5$";
			this->salata->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->salata->UseVisualStyleBackColor = true;
			this->salata->Click += gcnew System::EventHandler(this, &MyForm::salata_Click);
			// 
			// pasta
			// 
			this->pasta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasta.BackgroundImage")));
			this->pasta->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pasta->ForeColor = System::Drawing::Color::Blue;
			this->pasta->Location = System::Drawing::Point(426, 322);
			this->pasta->Margin = System::Windows::Forms::Padding(0);
			this->pasta->Name = L"pasta";
			this->pasta->Size = System::Drawing::Size(95, 95);
			this->pasta->TabIndex = 19;
			this->pasta->Text = L"3$";
			this->pasta->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pasta->UseVisualStyleBackColor = true;
			this->pasta->Click += gcnew System::EventHandler(this, &MyForm::pasta_Click);
			// 
			// korien_ramen
			// 
			this->korien_ramen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"korien_ramen.BackgroundImage")));
			this->korien_ramen->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->korien_ramen->ForeColor = System::Drawing::Color::Blue;
			this->korien_ramen->Location = System::Drawing::Point(426, 221);
			this->korien_ramen->Margin = System::Windows::Forms::Padding(0);
			this->korien_ramen->Name = L"korien_ramen";
			this->korien_ramen->Size = System::Drawing::Size(95, 95);
			this->korien_ramen->TabIndex = 18;
			this->korien_ramen->Text = L"3.2$";
			this->korien_ramen->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->korien_ramen->UseVisualStyleBackColor = true;
			this->korien_ramen->Click += gcnew System::EventHandler(this, &MyForm::korien_ramen_Click);
			// 
			// ramen
			// 
			this->ramen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ramen.BackgroundImage")));
			this->ramen->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ramen->ForeColor = System::Drawing::Color::Blue;
			this->ramen->Location = System::Drawing::Point(426, 120);
			this->ramen->Margin = System::Windows::Forms::Padding(0);
			this->ramen->Name = L"ramen";
			this->ramen->Size = System::Drawing::Size(95, 95);
			this->ramen->TabIndex = 17;
			this->ramen->Text = L"3.5$";
			this->ramen->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ramen->UseVisualStyleBackColor = true;
			this->ramen->Click += gcnew System::EventHandler(this, &MyForm::ramen_Click);
			// 
			// pizza
			// 
			this->pizza->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pizza.BackgroundImage")));
			this->pizza->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pizza->ForeColor = System::Drawing::Color::Blue;
			this->pizza->Location = System::Drawing::Point(426, 19);
			this->pizza->Margin = System::Windows::Forms::Padding(0);
			this->pizza->Name = L"pizza";
			this->pizza->Size = System::Drawing::Size(95, 95);
			this->pizza->TabIndex = 16;
			this->pizza->Text = L"9$";
			this->pizza->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pizza->UseVisualStyleBackColor = true;
			this->pizza->Click += gcnew System::EventHandler(this, &MyForm::pizza_Click);
			// 
			// cake_chocolate
			// 
			this->cake_chocolate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cake_chocolate.BackgroundImage")));
			this->cake_chocolate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cake_chocolate->ForeColor = System::Drawing::Color::Blue;
			this->cake_chocolate->Location = System::Drawing::Point(327, 322);
			this->cake_chocolate->Margin = System::Windows::Forms::Padding(0);
			this->cake_chocolate->Name = L"cake_chocolate";
			this->cake_chocolate->Size = System::Drawing::Size(95, 95);
			this->cake_chocolate->TabIndex = 15;
			this->cake_chocolate->Text = L"8.5$";
			this->cake_chocolate->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->cake_chocolate->UseVisualStyleBackColor = true;
			this->cake_chocolate->Click += gcnew System::EventHandler(this, &MyForm::cake_chocolate_Click);
			// 
			// candys
			// 
			this->candys->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"candys.BackgroundImage")));
			this->candys->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->candys->ForeColor = System::Drawing::Color::Blue;
			this->candys->Location = System::Drawing::Point(327, 221);
			this->candys->Margin = System::Windows::Forms::Padding(0);
			this->candys->Name = L"candys";
			this->candys->Size = System::Drawing::Size(95, 95);
			this->candys->TabIndex = 14;
			this->candys->Text = L"0.5$";
			this->candys->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->candys->UseVisualStyleBackColor = true;
			this->candys->Click += gcnew System::EventHandler(this, &MyForm::candys_Click);
			// 
			// burger_chicken
			// 
			this->burger_chicken->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burger_chicken.BackgroundImage")));
			this->burger_chicken->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->burger_chicken->ForeColor = System::Drawing::Color::Blue;
			this->burger_chicken->Location = System::Drawing::Point(327, 120);
			this->burger_chicken->Margin = System::Windows::Forms::Padding(0);
			this->burger_chicken->Name = L"burger_chicken";
			this->burger_chicken->Size = System::Drawing::Size(95, 95);
			this->burger_chicken->TabIndex = 13;
			this->burger_chicken->Text = L"4.5$";
			this->burger_chicken->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->burger_chicken->UseVisualStyleBackColor = true;
			this->burger_chicken->Click += gcnew System::EventHandler(this, &MyForm::burger_chicken_Click);
			// 
			// burger_beef
			// 
			this->burger_beef->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burger_beef.BackgroundImage")));
			this->burger_beef->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->burger_beef->ForeColor = System::Drawing::Color::Blue;
			this->burger_beef->Location = System::Drawing::Point(327, 19);
			this->burger_beef->Margin = System::Windows::Forms::Padding(0);
			this->burger_beef->Name = L"burger_beef";
			this->burger_beef->Size = System::Drawing::Size(95, 95);
			this->burger_beef->TabIndex = 12;
			this->burger_beef->Text = L"5$";
			this->burger_beef->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->burger_beef->UseVisualStyleBackColor = true;
			this->burger_beef->Click += gcnew System::EventHandler(this, &MyForm::burger_beef_Click);
			// 
			// molton_cake
			// 
			this->molton_cake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"molton_cake.BackgroundImage")));
			this->molton_cake->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->molton_cake->ForeColor = System::Drawing::Color::Blue;
			this->molton_cake->Location = System::Drawing::Point(227, 322);
			this->molton_cake->Margin = System::Windows::Forms::Padding(0);
			this->molton_cake->Name = L"molton_cake";
			this->molton_cake->Size = System::Drawing::Size(95, 95);
			this->molton_cake->TabIndex = 11;
			this->molton_cake->Text = L"4$";
			this->molton_cake->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->molton_cake->UseVisualStyleBackColor = true;
			this->molton_cake->Click += gcnew System::EventHandler(this, &MyForm::molton_cake_Click);
			// 
			// donat
			// 
			this->donat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"donat.BackgroundImage")));
			this->donat->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->donat->ForeColor = System::Drawing::Color::Blue;
			this->donat->Location = System::Drawing::Point(227, 221);
			this->donat->Margin = System::Windows::Forms::Padding(0);
			this->donat->Name = L"donat";
			this->donat->Size = System::Drawing::Size(95, 95);
			this->donat->TabIndex = 10;
			this->donat->Text = L"1.5$";
			this->donat->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->donat->UseVisualStyleBackColor = true;
			this->donat->Click += gcnew System::EventHandler(this, &MyForm::donat_Click);
			// 
			// icecream
			// 
			this->icecream->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icecream.BackgroundImage")));
			this->icecream->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->icecream->ForeColor = System::Drawing::Color::Blue;
			this->icecream->Location = System::Drawing::Point(227, 120);
			this->icecream->Margin = System::Windows::Forms::Padding(0);
			this->icecream->Name = L"icecream";
			this->icecream->Size = System::Drawing::Size(95, 95);
			this->icecream->TabIndex = 9;
			this->icecream->Text = L"1$";
			this->icecream->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->icecream->UseVisualStyleBackColor = true;
			this->icecream->Click += gcnew System::EventHandler(this, &MyForm::icecream_Click);
			// 
			// ice_tea
			// 
			this->ice_tea->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ice_tea.BackgroundImage")));
			this->ice_tea->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ice_tea->ForeColor = System::Drawing::Color::Blue;
			this->ice_tea->Location = System::Drawing::Point(227, 19);
			this->ice_tea->Margin = System::Windows::Forms::Padding(0);
			this->ice_tea->Name = L"ice_tea";
			this->ice_tea->Size = System::Drawing::Size(95, 95);
			this->ice_tea->TabIndex = 8;
			this->ice_tea->Text = L"1.3$";
			this->ice_tea->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ice_tea->UseVisualStyleBackColor = true;
			this->ice_tea->Click += gcnew System::EventHandler(this, &MyForm::ice_tea_Click);
			// 
			// chese_cake
			// 
			this->chese_cake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chese_cake.BackgroundImage")));
			this->chese_cake->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chese_cake->ForeColor = System::Drawing::Color::Blue;
			this->chese_cake->Location = System::Drawing::Point(126, 322);
			this->chese_cake->Margin = System::Windows::Forms::Padding(0);
			this->chese_cake->Name = L"chese_cake";
			this->chese_cake->Size = System::Drawing::Size(95, 95);
			this->chese_cake->TabIndex = 7;
			this->chese_cake->Text = L"2.5$";
			this->chese_cake->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->chese_cake->UseVisualStyleBackColor = true;
			this->chese_cake->Click += gcnew System::EventHandler(this, &MyForm::chese_cake_Click);
			// 
			// cake_vanilla
			// 
			this->cake_vanilla->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cake_vanilla.BackgroundImage")));
			this->cake_vanilla->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cake_vanilla->ForeColor = System::Drawing::Color::Blue;
			this->cake_vanilla->Location = System::Drawing::Point(126, 221);
			this->cake_vanilla->Margin = System::Windows::Forms::Padding(0);
			this->cake_vanilla->Name = L"cake_vanilla";
			this->cake_vanilla->Size = System::Drawing::Size(95, 95);
			this->cake_vanilla->TabIndex = 6;
			this->cake_vanilla->Text = L"2.3$";
			this->cake_vanilla->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->cake_vanilla->UseVisualStyleBackColor = true;
			this->cake_vanilla->Click += gcnew System::EventHandler(this, &MyForm::cake_vanilla_Click);
			// 
			// waffel
			// 
			this->waffel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"waffel.BackgroundImage")));
			this->waffel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->waffel->ForeColor = System::Drawing::Color::Blue;
			this->waffel->Location = System::Drawing::Point(126, 120);
			this->waffel->Margin = System::Windows::Forms::Padding(0);
			this->waffel->Name = L"waffel";
			this->waffel->Size = System::Drawing::Size(95, 95);
			this->waffel->TabIndex = 5;
			this->waffel->Text = L"2.7$";
			this->waffel->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->waffel->UseVisualStyleBackColor = true;
			this->waffel->Click += gcnew System::EventHandler(this, &MyForm::waffel_Click);
			// 
			// rolls_cake
			// 
			this->rolls_cake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rolls_cake.BackgroundImage")));
			this->rolls_cake->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rolls_cake->ForeColor = System::Drawing::Color::Blue;
			this->rolls_cake->Location = System::Drawing::Point(126, 19);
			this->rolls_cake->Margin = System::Windows::Forms::Padding(0);
			this->rolls_cake->Name = L"rolls_cake";
			this->rolls_cake->Size = System::Drawing::Size(95, 95);
			this->rolls_cake->TabIndex = 4;
			this->rolls_cake->Text = L"3$";
			this->rolls_cake->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->rolls_cake->UseVisualStyleBackColor = true;
			this->rolls_cake->Click += gcnew System::EventHandler(this, &MyForm::rolls_cake_Click);
			// 
			// chocolate_drink
			// 
			this->chocolate_drink->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chocolate_drink.BackgroundImage")));
			this->chocolate_drink->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chocolate_drink->ForeColor = System::Drawing::Color::Blue;
			this->chocolate_drink->Location = System::Drawing::Point(26, 322);
			this->chocolate_drink->Margin = System::Windows::Forms::Padding(0);
			this->chocolate_drink->Name = L"chocolate_drink";
			this->chocolate_drink->Size = System::Drawing::Size(95, 95);
			this->chocolate_drink->TabIndex = 3;
			this->chocolate_drink->Text = L"1.50$";
			this->chocolate_drink->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->chocolate_drink->UseVisualStyleBackColor = true;
			this->chocolate_drink->Click += gcnew System::EventHandler(this, &MyForm::chocolate_drink_Click);
			// 
			// green_tea
			// 
			this->green_tea->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"green_tea.BackgroundImage")));
			this->green_tea->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->green_tea->ForeColor = System::Drawing::Color::Blue;
			this->green_tea->Location = System::Drawing::Point(26, 221);
			this->green_tea->Margin = System::Windows::Forms::Padding(0);
			this->green_tea->Name = L"green_tea";
			this->green_tea->Size = System::Drawing::Size(95, 95);
			this->green_tea->TabIndex = 2;
			this->green_tea->Text = L"2.30$";
			this->green_tea->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->green_tea->UseVisualStyleBackColor = true;
			this->green_tea->Click += gcnew System::EventHandler(this, &MyForm::green_tea_Click);
			// 
			// coffe
			// 
			this->coffe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coffe.BackgroundImage")));
			this->coffe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coffe->ForeColor = System::Drawing::Color::Blue;
			this->coffe->Location = System::Drawing::Point(26, 120);
			this->coffe->Margin = System::Windows::Forms::Padding(0);
			this->coffe->Name = L"coffe";
			this->coffe->Size = System::Drawing::Size(95, 95);
			this->coffe->TabIndex = 1;
			this->coffe->Text = L"1.20$";
			this->coffe->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->coffe->UseVisualStyleBackColor = true;
			this->coffe->Click += gcnew System::EventHandler(this, &MyForm::coffe_Click);
			// 
			// watermelon_drink
			// 
			this->watermelon_drink->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"watermelon_drink.BackgroundImage")));
			this->watermelon_drink->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->watermelon_drink->ForeColor = System::Drawing::Color::Blue;
			this->watermelon_drink->Location = System::Drawing::Point(26, 19);
			this->watermelon_drink->Margin = System::Windows::Forms::Padding(0);
			this->watermelon_drink->Name = L"watermelon_drink";
			this->watermelon_drink->Size = System::Drawing::Size(95, 95);
			this->watermelon_drink->TabIndex = 0;
			this->watermelon_drink->Text = L"2$";
			this->watermelon_drink->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->watermelon_drink->UseVisualStyleBackColor = true;
			this->watermelon_drink->Click += gcnew System::EventHandler(this, &MyForm::watermelon_drink_Click);
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
			this->buttonRemoveItem->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonRemoveItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRemoveItem->Location = System::Drawing::Point(191, 84);
			this->buttonRemoveItem->Name = L"buttonRemoveItem";
			this->buttonRemoveItem->Size = System::Drawing::Size(172, 68);
			this->buttonRemoveItem->TabIndex = 0;
			this->buttonRemoveItem->Text = L"remove item";
			this->buttonRemoveItem->UseVisualStyleBackColor = false;
			this->buttonRemoveItem->Click += gcnew System::EventHandler(this, &MyForm::buttonRemoveItem_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPrint->Location = System::Drawing::Point(13, 84);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(172, 68);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"print";
			this->buttonPrint->UseVisualStyleBackColor = false;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &MyForm::buttonPrint_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReset->Location = System::Drawing::Point(191, 11);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(172, 68);
			this->buttonReset->TabIndex = 0;
			this->buttonReset->Text = L"reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonPay
			// 
			this->buttonPay->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPay->Location = System::Drawing::Point(13, 11);
			this->buttonPay->Name = L"buttonPay";
			this->buttonPay->Size = System::Drawing::Size(172, 68);
			this->buttonPay->TabIndex = 0;
			this->buttonPay->Text = L"Pay";
			this->buttonPay->UseVisualStyleBackColor = false;
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
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1);
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
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
			this->lblBarCode->Font = (gcnew System::Drawing::Font(L"CODE3X", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1368, 741);
			this->Controls->Add(this->lblBarCode);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bondok_Casher";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
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
//cards iteam
private: System::Void watermelon_drink_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("watermelon drink", "1", 2);
	AddCost();
}
private: System::Void coffe_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("coffe", "1", 1.20);
	AddCost();
}
private: System::Void green_tea_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("green tea", "1", 2.30);
	AddCost();
}
private: System::Void chocolate_drink_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("chocolate drink", "1", 1.50);
	AddCost();
}

private: System::Void rolls_cake_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("rolls cake", "1", 3);
	AddCost();
}
private: System::Void waffel_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("waffel", "1", 2.70);
	AddCost();
}
private: System::Void cake_vanilla_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("cake vanilla", "1", 2.30);
	AddCost();
}
private: System::Void chese_cake_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("chese cake", "1", 2.50);
	AddCost();
}
private: System::Void ice_tea_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("ice tea", "1", 1.30);
	AddCost();
}
private: System::Void icecream_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("icecream", "1", 1);
	AddCost();
}
private: System::Void donat_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("donat", "1", 1.50);
	AddCost();
}
private: System::Void molton_cake_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("molton cake", "1", 4);
	AddCost();
}
private: System::Void burger_beef_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("burger beef", "1", 5);
	AddCost();
}
private: System::Void burger_chicken_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("burger chicken", "1", 4.50);
	AddCost();
}
private: System::Void candys_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("candys", "1", 0.50);
	AddCost();
}
private: System::Void cake_chocolate_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("cake chocolate", "1", 8.50);
	AddCost();
}
private: System::Void pizza_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("pizza", "1", 9);
	AddCost();
}
private: System::Void ramen_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("ramen", "1", 3.50);
	AddCost();
}
private: System::Void korien_ramen_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("korien ramen", "1", 3.20);
	AddCost();
}
private: System::Void pasta_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("pasta", "1", 3);
	AddCost();
}
private: System::Void salata_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("salata", "1", 0.50);
	AddCost();
}
private: System::Void sawerma_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("sawerma", "1", 4.90);
	AddCost();
}
private: System::Void stake_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("stake", "1", 9.50);
	AddCost();
}
private: System::Void tako_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("tako", "1", 2.90);
	AddCost();
}
};
}
