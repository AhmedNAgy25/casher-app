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

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ lblTotal;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTax;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblSubTotal;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button37;
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
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
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
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button36);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button30);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button35);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button34);
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Location = System::Drawing::Point(12, 8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(348, 435);
			this->panel1->TabIndex = 0;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(221, 320);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(95, 95);
			this->button36->TabIndex = 0;
			this->button36->Text = L"C";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(221, 219);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(95, 95);
			this->button33->TabIndex = 0;
			this->button33->Text = L"3";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(221, 118);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(95, 95);
			this->button30->TabIndex = 0;
			this->button30->Text = L"6";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(221, 17);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(95, 95);
			this->button27->TabIndex = 0;
			this->button27->Text = L"9";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(120, 320);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(95, 95);
			this->button35->TabIndex = 0;
			this->button35->Text = L".";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(120, 219);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(95, 95);
			this->button32->TabIndex = 0;
			this->button32->Text = L"2";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(120, 118);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(95, 95);
			this->button29->TabIndex = 0;
			this->button29->Text = L"5";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(120, 17);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(95, 95);
			this->button26->TabIndex = 0;
			this->button26->Text = L"8";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(19, 320);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(95, 95);
			this->button34->TabIndex = 0;
			this->button34->Text = L"0";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(19, 219);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(95, 95);
			this->button31->TabIndex = 0;
			this->button31->Text = L"1";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(19, 118);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(95, 95);
			this->button28->TabIndex = 0;
			this->button28->Text = L"4";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(19, 17);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(95, 95);
			this->button25->TabIndex = 0;
			this->button25->Text = L"7";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(695, 8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(649, 435);
			this->panel2->TabIndex = 0;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(526, 320);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(95, 95);
			this->button24->TabIndex = 0;
			this->button24->Text = L"button1";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(526, 219);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(95, 95);
			this->button18->TabIndex = 0;
			this->button18->Text = L"button1";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(526, 118);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(95, 95);
			this->button12->TabIndex = 0;
			this->button12->Text = L"button1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(526, 17);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 95);
			this->button6->TabIndex = 0;
			this->button6->Text = L"button1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(425, 320);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(95, 95);
			this->button23->TabIndex = 0;
			this->button23->Text = L"button1";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(324, 320);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(95, 95);
			this->button22->TabIndex = 0;
			this->button22->Text = L"button1";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(425, 219);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(95, 95);
			this->button17->TabIndex = 0;
			this->button17->Text = L"button1";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(324, 219);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(95, 95);
			this->button16->TabIndex = 0;
			this->button16->Text = L"button1";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(425, 118);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(95, 95);
			this->button11->TabIndex = 0;
			this->button11->Text = L"button1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(223, 320);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(95, 95);
			this->button21->TabIndex = 0;
			this->button21->Text = L"button1";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(324, 118);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(95, 95);
			this->button10->TabIndex = 0;
			this->button10->Text = L"button1";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(223, 219);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(95, 95);
			this->button15->TabIndex = 0;
			this->button15->Text = L"button1";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Location = System::Drawing::Point(425, 17);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 95);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(122, 320);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(95, 95);
			this->button20->TabIndex = 0;
			this->button20->Text = L"button1";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(223, 118);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(95, 95);
			this->button9->TabIndex = 0;
			this->button9->Text = L"button1";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(122, 219);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(95, 95);
			this->button14->TabIndex = 0;
			this->button14->Text = L"button1";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Location = System::Drawing::Point(324, 17);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 95);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(21, 320);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(95, 95);
			this->button19->TabIndex = 0;
			this->button19->Text = L"button1";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(122, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 95);
			this->button8->TabIndex = 0;
			this->button8->Text = L"button1";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(21, 219);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(95, 95);
			this->button13->TabIndex = 0;
			this->button13->Text = L"button1";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(223, 17);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 95);
			this->button3->TabIndex = 0;
			this->button3->Text = L"button1";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(21, 118);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 95);
			this->button7->TabIndex = 0;
			this->button7->Text = L"button1";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(122, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 95);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button1";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 95);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
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
			this->panel7->Controls->Add(this->button40);
			this->panel7->Controls->Add(this->button38);
			this->panel7->Controls->Add(this->button39);
			this->panel7->Controls->Add(this->button37);
			this->panel7->Location = System::Drawing::Point(886, 18);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(377, 164);
			this->panel7->TabIndex = 0;
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(191, 84);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(172, 68);
			this->button40->TabIndex = 0;
			this->button40->Text = L"remove item";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(13, 84);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(172, 68);
			this->button38->TabIndex = 0;
			this->button38->Text = L"print";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(191, 11);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(172, 68);
			this->button39->TabIndex = 0;
			this->button39->Text = L"reset";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(13, 11);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(172, 68);
			this->button37->TabIndex = 0;
			this->button37->Text = L"Pay";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
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
			this->Text = L"MyForm";
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

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		double priceOfItem = 3.5;
		dataGridView1->Rows->Add("tomato", "1", priceOfItem);
		AddCost();
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
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	lblCash->Text = "0";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Add("Cash");
	comboBox1->Items->Add("Visa Card");
	comboBox1->Items->Add("Master Card");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double priceOfItem = 5;
	dataGridView1->Rows->Add("fan", "1", priceOfItem);
	AddCost();
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (comboBox1->Text == "Cash") {
		Change();
	}
	else
	{
		lblChange->Text = "";
		lblCash->Text = "0";
	}
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
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

private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
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
