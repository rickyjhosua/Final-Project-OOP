#pragma once

namespace ATMCPPsys {

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
		int pinNo;
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
	private: System::Windows::Forms::Button^ btnleft2;
	protected:
	private: System::Windows::Forms::Button^ btnright3;
	private: System::Windows::Forms::Button^ btnempty7;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnempty9;
	private: System::Windows::Forms::Button^ btnemptyenter;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnright2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ txtenterpin;
	private: System::Windows::Forms::RichTextBox^ rtDisplay;
	private: System::Windows::Forms::Button^ btnenter;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btnclear;
	private: System::Windows::Forms::Button^ btnright4;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnleft1;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnleft4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnleft3;
	private: System::Windows::Forms::Button^ btnright1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnleft2 = (gcnew System::Windows::Forms::Button());
			this->btnright3 = (gcnew System::Windows::Forms::Button());
			this->btnempty7 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnempty9 = (gcnew System::Windows::Forms::Button());
			this->btnemptyenter = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnright2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtenterpin = (gcnew System::Windows::Forms::TextBox());
			this->rtDisplay = (gcnew System::Windows::Forms::RichTextBox());
			this->btnenter = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnright4 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnleft1 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnleft4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnleft3 = (gcnew System::Windows::Forms::Button());
			this->btnright1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnleft2
			// 
			this->btnleft2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnleft2.Image")));
			this->btnleft2->Location = System::Drawing::Point(3, 64);
			this->btnleft2->Name = L"btnleft2";
			this->btnleft2->Size = System::Drawing::Size(102, 45);
			this->btnleft2->TabIndex = 12;
			this->toolTip1->SetToolTip(this->btnleft2, L"Cash With Receipt");
			this->btnleft2->UseVisualStyleBackColor = true;
			this->btnleft2->Click += gcnew System::EventHandler(this, &MyForm::btnleft2_Click);
			// 
			// btnright3
			// 
			this->btnright3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnright3.Image")));
			this->btnright3->Location = System::Drawing::Point(349, 115);
			this->btnright3->Name = L"btnright3";
			this->btnright3->Size = System::Drawing::Size(102, 45);
			this->btnright3->TabIndex = 10;
			this->toolTip1->SetToolTip(this->btnright3, L"Balance");
			this->btnright3->UseVisualStyleBackColor = true;
			this->btnright3->Click += gcnew System::EventHandler(this, &MyForm::btnright3_Click);
			// 
			// btnempty7
			// 
			this->btnempty7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnempty7.Image")));
			this->btnempty7->Location = System::Drawing::Point(6, 201);
			this->btnempty7->Name = L"btnempty7";
			this->btnempty7->Size = System::Drawing::Size(99, 60);
			this->btnempty7->TabIndex = 49;
			this->btnempty7->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn0.Image")));
			this->btn0->Location = System::Drawing::Point(121, 201);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(99, 60);
			this->btn0->TabIndex = 48;
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btnempty9
			// 
			this->btnempty9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnempty9.Image")));
			this->btnempty9->Location = System::Drawing::Point(235, 201);
			this->btnempty9->Name = L"btnempty9";
			this->btnempty9->Size = System::Drawing::Size(99, 60);
			this->btnempty9->TabIndex = 47;
			this->btnempty9->UseVisualStyleBackColor = true;
			// 
			// btnemptyenter
			// 
			this->btnemptyenter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnemptyenter.Image")));
			this->btnemptyenter->Location = System::Drawing::Point(349, 201);
			this->btnemptyenter->Name = L"btnemptyenter";
			this->btnemptyenter->Size = System::Drawing::Size(99, 60);
			this->btnemptyenter->TabIndex = 46;
			this->btnemptyenter->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn7.Image")));
			this->btn7->Location = System::Drawing::Point(6, 135);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(99, 60);
			this->btn7->TabIndex = 45;
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn8.Image")));
			this->btn8->Location = System::Drawing::Point(121, 135);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(99, 60);
			this->btn8->TabIndex = 44;
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn9.Image")));
			this->btn9->Location = System::Drawing::Point(235, 135);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(99, 60);
			this->btn9->TabIndex = 43;
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btnright2
			// 
			this->btnright2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnright2.Image")));
			this->btnright2->Location = System::Drawing::Point(349, 64);
			this->btnright2->Name = L"btnright2";
			this->btnright2->Size = System::Drawing::Size(102, 45);
			this->btnright2->TabIndex = 9;
			this->toolTip1->SetToolTip(this->btnright2, L"Deposit");
			this->btnright2->UseVisualStyleBackColor = true;
			this->btnright2->Click += gcnew System::EventHandler(this, &MyForm::btnright2_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->txtenterpin);
			this->panel4->Controls->Add(this->rtDisplay);
			this->panel4->Location = System::Drawing::Point(105, 8);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(243, 205);
			this->panel4->TabIndex = 3;
			// 
			// txtenterpin
			// 
			this->txtenterpin->Font = (gcnew System::Drawing::Font(L"Courier New", 15, System::Drawing::FontStyle::Bold));
			this->txtenterpin->Location = System::Drawing::Point(23, 43);
			this->txtenterpin->Margin = System::Windows::Forms::Padding(5);
			this->txtenterpin->Multiline = true;
			this->txtenterpin->Name = L"txtenterpin";
			this->txtenterpin->Size = System::Drawing::Size(193, 138);
			this->txtenterpin->TabIndex = 1;
			this->txtenterpin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// rtDisplay
			// 
			this->rtDisplay->Location = System::Drawing::Point(3, 3);
			this->rtDisplay->Name = L"rtDisplay";
			this->rtDisplay->Size = System::Drawing::Size(233, 195);
			this->rtDisplay->TabIndex = 0;
			this->rtDisplay->Text = L"";
			// 
			// btnenter
			// 
			this->btnenter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnenter.Image")));
			this->btnenter->Location = System::Drawing::Point(349, 135);
			this->btnenter->Name = L"btnenter";
			this->btnenter->Size = System::Drawing::Size(99, 60);
			this->btnenter->TabIndex = 42;
			this->btnenter->UseVisualStyleBackColor = true;
			this->btnenter->Click += gcnew System::EventHandler(this, &MyForm::btnenter_Click);
			// 
			// btn4
			// 
			this->btn4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4.Image")));
			this->btn4->Location = System::Drawing::Point(6, 69);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(99, 60);
			this->btn4->TabIndex = 41;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn5.Image")));
			this->btn5->Location = System::Drawing::Point(121, 69);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(99, 60);
			this->btn5->TabIndex = 40;
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btnclear
			// 
			this->btnclear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnclear.Image")));
			this->btnclear->Location = System::Drawing::Point(349, 69);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(99, 60);
			this->btnclear->TabIndex = 38;
			this->btnclear->UseVisualStyleBackColor = true;
			this->btnclear->Click += gcnew System::EventHandler(this, &MyForm::btnclear_Click_1);
			// 
			// btnright4
			// 
			this->btnright4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnright4.Image")));
			this->btnright4->Location = System::Drawing::Point(349, 163);
			this->btnright4->Name = L"btnright4";
			this->btnright4->Size = System::Drawing::Size(102, 45);
			this->btnright4->TabIndex = 11;
			this->toolTip1->SetToolTip(this->btnright4, L"Print");
			this->btnright4->UseVisualStyleBackColor = true;
			this->btnright4->Click += gcnew System::EventHandler(this, &MyForm::btnright4_Click);
			// 
			// btn6
			// 
			this->btn6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn6.Image")));
			this->btn6->Location = System::Drawing::Point(235, 69);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(99, 60);
			this->btn6->TabIndex = 39;
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btnleft1
			// 
			this->btnleft1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnleft1.Image")));
			this->btnleft1->Location = System::Drawing::Point(3, 13);
			this->btnleft1->Name = L"btnleft1";
			this->btnleft1->Size = System::Drawing::Size(102, 45);
			this->btnleft1->TabIndex = 4;
			this->toolTip1->SetToolTip(this->btnleft1, L"Withdraw Cash");
			this->btnleft1->UseVisualStyleBackColor = true;
			this->btnleft1->Click += gcnew System::EventHandler(this, &MyForm::btnleft1_Click);
			// 
			// btn1
			// 
			this->btn1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1.Image")));
			this->btn1->Location = System::Drawing::Point(6, 3);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(99, 60);
			this->btn1->TabIndex = 29;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click_1);
			// 
			// btnleft4
			// 
			this->btnleft4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnleft4.Image")));
			this->btnleft4->Location = System::Drawing::Point(3, 163);
			this->btnleft4->Name = L"btnleft4";
			this->btnleft4->Size = System::Drawing::Size(102, 45);
			this->btnleft4->TabIndex = 14;
			this->toolTip1->SetToolTip(this->btnleft4, L"Mini Statement");
			this->btnleft4->UseVisualStyleBackColor = true;
			this->btnleft4->Click += gcnew System::EventHandler(this, &MyForm::btnleft4_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnleft4);
			this->panel2->Controls->Add(this->btnleft3);
			this->panel2->Controls->Add(this->btnleft2);
			this->panel2->Controls->Add(this->btnright4);
			this->panel2->Controls->Add(this->btnright3);
			this->panel2->Controls->Add(this->btnright2);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->btnright1);
			this->panel2->Controls->Add(this->btnleft1);
			this->panel2->Location = System::Drawing::Point(21, 23);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(460, 220);
			this->panel2->TabIndex = 1;
			// 
			// btnleft3
			// 
			this->btnleft3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnleft3.Image")));
			this->btnleft3->Location = System::Drawing::Point(3, 115);
			this->btnleft3->Name = L"btnleft3";
			this->btnleft3->Size = System::Drawing::Size(102, 45);
			this->btnleft3->TabIndex = 13;
			this->toolTip1->SetToolTip(this->btnleft3, L"Request New Pin");
			this->btnleft3->UseVisualStyleBackColor = true;
			this->btnleft3->Click += gcnew System::EventHandler(this, &MyForm::btnleft3_Click);
			// 
			// btnright1
			// 
			this->btnright1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnright1.Image")));
			this->btnright1->Location = System::Drawing::Point(349, 13);
			this->btnright1->Name = L"btnright1";
			this->btnright1->Size = System::Drawing::Size(102, 45);
			this->btnright1->TabIndex = 8;
			this->toolTip1->SetToolTip(this->btnright1, L"Loan");
			this->btnright1->UseVisualStyleBackColor = true;
			this->btnright1->Click += gcnew System::EventHandler(this, &MyForm::btnright1_Click);
			// 
			// btn2
			// 
			this->btn2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2.Image")));
			this->btn2->Location = System::Drawing::Point(121, 3);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(99, 60);
			this->btn2->TabIndex = 28;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3.Image")));
			this->btn3->Location = System::Drawing::Point(235, 3);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(99, 60);
			this->btn3->TabIndex = 27;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btncancel
			// 
			this->btncancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncancel.Image")));
			this->btncancel->Location = System::Drawing::Point(349, 3);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(99, 60);
			this->btncancel->TabIndex = 26;
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &MyForm::btncancel_Click_1);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->btnempty7);
			this->panel3->Controls->Add(this->btn0);
			this->panel3->Controls->Add(this->btnempty9);
			this->panel3->Controls->Add(this->btnemptyenter);
			this->panel3->Controls->Add(this->btn7);
			this->panel3->Controls->Add(this->btn8);
			this->panel3->Controls->Add(this->btn9);
			this->panel3->Controls->Add(this->btnenter);
			this->panel3->Controls->Add(this->btn4);
			this->panel3->Controls->Add(this->btn5);
			this->panel3->Controls->Add(this->btn6);
			this->panel3->Controls->Add(this->btnclear);
			this->panel3->Controls->Add(this->btn1);
			this->panel3->Controls->Add(this->btn2);
			this->panel3->Controls->Add(this->btn3);
			this->panel3->Controls->Add(this->btncancel);
			this->panel3->Location = System::Drawing::Point(21, 249);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(460, 269);
			this->panel3->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(80, 107);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(506, 534);
			this->panel1->TabIndex = 1;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
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
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(667, 749);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EnabledButton() //(function pertama)
	{
		btnleft1->Enabled = false();
		btnleft2->Enabled = false();
		btnleft3->Enabled = false();
		btnleft4->Enabled = false();

		btnright1->Enabled = false();
		btnright2->Enabled = false();
		btnright3->Enabled = false();
		btnright4->Enabled = false();

		rtDisplay->Clear();
		txtenterpin->Text = "";
		txtenterpin->Visible = true;
		txtenterpin->Focus();
	}

	private: System::Void balance() //(function pertama)
	{
		if (pinNo == 2213)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t Account No: 645498\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t" + "$3920" + "\n\n");
		}
		if (pinNo == 4323)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t Account No: 351375\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t" + "$4560" + "\n\n");
		}if (pinNo == 5352)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t Account No: 467824\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t" + "$7000" + "\n\n");
		}
		if (pinNo == 2513)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t Account No: 239074\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t" + "$10500" + "\n\n");
		}
	}
	
		private: System::Void statement() //(function 3)
		{
			if (pinNo == 2213)
			{
				rtDisplay->Clear();
				rtDisplay->AppendText("Account No: 645498\n\n");
				rtDisplay->AppendText("Balance is" + "\t\t\t" + "$3920" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Lottery" + "\t\t\t" + "$20" + "\n\n");
				rtDisplay->AppendText("Poundland" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$55" + "\n\n");
				rtDisplay->AppendText("ASDA" + "\t\t\t" + "$15" + "\n\n");
				rtDisplay->AppendText("Council Tax" + "\t\t\t" + "$20" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$25" + "\n\n");
				rtDisplay->AppendText("Telephone" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Sainsbury's" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$100" + "\n\n");
				rtDisplay->AppendText("Superdug" + "\t\t\t" + "$30" + "\n\n");
			}
			if (pinNo == 4323)
			{
				rtDisplay->Clear();
				rtDisplay->AppendText("Account No: 351375\n\n");
				rtDisplay->AppendText("Balance is" + "\t\t\t" + "$4560" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Lottery" + "\t\t\t" + "$45" + "\n\n");
				rtDisplay->AppendText("Poundland" + "\t\t\t" + "$50" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$20" + "\n\n");
				rtDisplay->AppendText("ASDA" + "\t\t\t" + "$15" + "\n\n");
				rtDisplay->AppendText("Council Tax" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$100" + "\n\n");
				rtDisplay->AppendText("Telephone" + "\t\t\t" + "$325" + "\n\n");
				rtDisplay->AppendText("Sainsbury's" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Superdug" + "\t\t\t" + "$15" + "\n\n");
			}
			if (pinNo == 5352)
			{
				rtDisplay->Clear();
				rtDisplay->AppendText("Account No: 467824\n\n");
				rtDisplay->AppendText("Balance is" + "\t\t\t" + "$4560" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Lottery" + "\t\t\t" + "$45" + "\n\n");
				rtDisplay->AppendText("Poundland" + "\t\t\t" + "$50" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$20" + "\n\n");
				rtDisplay->AppendText("ASDA" + "\t\t\t" + "$15" + "\n\n");
				rtDisplay->AppendText("Council Tax" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$100" + "\n\n");
				rtDisplay->AppendText("Telephone" + "\t\t\t" + "$325" + "\n\n");
				rtDisplay->AppendText("Sainsbury's" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Superdug" + "\t\t\t" + "$15" + "\n\n");
			}
			if (pinNo == 2513)
			{
				rtDisplay->Clear();
				rtDisplay->AppendText("Account No: 239074\n\n");
				rtDisplay->AppendText("Balance is" + "\t\t\t" + "$4560" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Lottery" + "\t\t\t" + "$45" + "\n\n");
				rtDisplay->AppendText("Poundland" + "\t\t\t" + "$50" + "\n\n");
				rtDisplay->AppendText("Tesco" + "\t\t\t" + "$20" + "\n\n");
				rtDisplay->AppendText("ASDA" + "\t\t\t" + "$15" + "\n\\n");
				rtDisplay->AppendText("Council Tax" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$100" + "\n\n");
				rtDisplay->AppendText("Telephone" + "\t\t\t" + "$325" + "\n\n");
				rtDisplay->AppendText("Sainsbury's" + "\t\t\t" + "$30" + "\n\n");
				rtDisplay->AppendText("Rent" + "\t\t\t" + "$10" + "\n\n");
				rtDisplay->AppendText("Superdug" + "\t\t\t" + "$15" + "\n\n");
			}
		}



private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	EnabledButton();
}

private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "3";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 3;
	}
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "4";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 4;
	}
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "5";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 5;
	}
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "6";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 6;
	}
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "7";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 7;
	}
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "8";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 8;
	}
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "9";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 9;
	}
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "0";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 0;
	}
}
private: System::Void btnenter_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtenterpin->Text == "2213") || (txtenterpin->Text == "4323") || (txtenterpin->Text == "5352") ||
		(txtenterpin->Text == "2513"))
{
		pinNo = int::Parse(txtenterpin->Text);

	btnleft1->Enabled = true;
	btnleft2->Enabled = true;
	btnleft3->Enabled = true;
	btnleft4->Enabled = true;

	btnright1->Enabled = true;
	btnright2->Enabled = true;
	btnright3->Enabled = true;
	btnright4->Enabled = true;

	txtenterpin->Visible = false();

	rtDisplay->AppendText("\t\tWelcome to iBank\n\n");
	rtDisplay->AppendText("Withdraw Cash" + "\t\t" + "Transfer" + "\n\n\n");
	rtDisplay->AppendText("Cash with Receipt" + "\t\t" + "Deposit" + "\n\n\n");
	rtDisplay->AppendText("Statement" + "\t\t" + "Balance" + "\n\n\n");
	rtDisplay->AppendText("\t\t\t" + "Print " + "\n\n\n");
	

	}
	else 
	{
		txtenterpin->Text = "INVALID PIN NO";
		txtenterpin->Focus();

		btnleft1->Enabled = false();
		btnleft2->Enabled = false();
		btnleft3->Enabled = false();
		btnleft4->Enabled = false();

		btnright1->Enabled = false();
		btnright2->Enabled = false();
		btnright3->Enabled = false();
		btnright4->Enabled = false();
	}

	if ((txtenterpin->Text != "" && rtDisplay->Text != ""))
	{
		txtenterpin->Text = "Cash Withdrawal Confirmed";
	}
	if ((txtenterpin->Text != "" && rtDisplay->Text == "Loan"))
	{
		rtDisplay->Text ="";
		rtDisplay->AppendText("Loan of Cash Confirmed and Granted");
		txtenterpin->Text = "";
		txtenterpin->Text = "Loan Transaction Completed";
	}
	if ((txtenterpin->Text != "" && rtDisplay->Text == "Deposit"))
	{
		rtDisplay->Text = "";
		rtDisplay->AppendText("Cash deposit confirm, please re-enter your pin no.");
		txtenterpin->Text = "";
		txtenterpin->Text = "Deposit Transaction Completed";
	}


}
private: System::Void btn1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "1";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 1;
	}
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtenterpin->Text == "")
	{
		txtenterpin->Text = "2";
	}
	else
	{
		txtenterpin->Text = txtenterpin->Text + 2;
	}
}
private: System::Void btncancel_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Confirm if you want cancel", "ATM System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (iExit == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
private: System::Void btnclear_Click_1(System::Object^ sender, System::EventArgs^ e) {
	btnleft1->Enabled = false();
	btnleft2->Enabled = false();
	btnleft3->Enabled = false();
	btnleft4->Enabled = false();

	btnright1->Enabled = false();
	btnright2->Enabled = false();
	btnright3->Enabled = false();
	btnright4->Enabled = false();

	rtDisplay->Clear();
	txtenterpin->Text = "";
	txtenterpin->Visible = true;
	txtenterpin->Focus();
}

private: System::Void btnright1_Click(System::Object^ sender, System::EventArgs^ e) { //Loan
		rtDisplay->Clear();
		rtDisplay->AppendText("Loan");
		txtenterpin->Visible = true;
		txtenterpin->Clear();
		txtenterpin->Focus();
}
private: System::Void btnright2_Click(System::Object^ sender, System::EventArgs^ e) { //Deposit
	rtDisplay->Clear();
	rtDisplay->AppendText("Deposit");
	txtenterpin->Visible = true;
	txtenterpin->Clear();
	txtenterpin->Focus();
}
private: System::Void btnright3_Click(System::Object^ sender, System::EventArgs^ e) { //Balance

	balance();
}
private: System::Void btnright4_Click(System::Object^ sender, System::EventArgs^ e) { //Print

	statement();
	printPreviewDialog1->ShowDialog();
}
private: System::Void btnleft4_Click(System::Object^ sender, System::EventArgs^ e) { //Back
	rtDisplay->Clear();
	rtDisplay->AppendText("\t\tWelcome to iBank\n\n");
	rtDisplay->AppendText("Withdraw Cash" + "\t\t" + "Loan" + "\n\n\n");
	rtDisplay->AppendText("Cash with Receipt" + "\t\t" + "Deposit" + "\n\n\n");
	rtDisplay->AppendText("Statement" + "\t\t" + "Balance" + "\n\n\n");
	rtDisplay->AppendText("Back" + "\t\t" + "Print" + "\n\n\n");
	
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Time New Roman", 16, FontStyle::Regular);
	e->Graphics->DrawString(rtDisplay->Text, fntString, Brushes::Black, 100, 100);
}
private: System::Void btnleft3_Click(System::Object^ sender, System::EventArgs^ e) { //MiniStatement
	
	statement();

}
private: System::Void btnleft2_Click(System::Object^ sender, System::EventArgs^ e) { //CashReceipt
	rtDisplay->Clear();
	rtDisplay->AppendText("\tWelcome to iBank\n\n");
	rtDisplay->AppendText("Enter amount below\n\n");
	txtenterpin->Visible = true;
	txtenterpin->Clear();
	txtenterpin->Focus();

	printPreviewDialog1->ShowDialog();
}
private: System::Void btnleft1_Click(System::Object^ sender, System::EventArgs^ e) { //Withdraw Cash

	rtDisplay->Clear();
	rtDisplay->AppendText("\tWelcome to iBank\n\n");
	rtDisplay->AppendText("Enter amount below\n\n");
	txtenterpin->Visible = true;
	txtenterpin->Clear();
	txtenterpin->Focus();
}
};
}
