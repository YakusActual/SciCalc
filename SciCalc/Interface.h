#pragma once
#include <iostream>
#include "Functions.h"

namespace SciCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			initFunctions();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  percentBtn;
	private: System::Windows::Forms::Button^  num1;
	private: System::Windows::Forms::Button^  num4;
	private: System::Windows::Forms::Button^  num7;
	private: System::Windows::Forms::TextBox^  output;
	private: System::Windows::Forms::Button^  divideBtn;
	private: System::Windows::Forms::Button^  multiplyBtn;
	private: System::Windows::Forms::Button^  subtractBtn;
	private: System::Windows::Forms::Button^  addBtn;
	private: System::Windows::Forms::Button^  num9;
	private: System::Windows::Forms::Button^  num6;
	private: System::Windows::Forms::Button^  num3;
	private: System::Windows::Forms::Button^  decimalBtn;
	private: System::Windows::Forms::Button^  num8;
	private: System::Windows::Forms::Button^  num5;
	private: System::Windows::Forms::Button^  num2;
	private: System::Windows::Forms::Button^  num0;
	private: System::Windows::Forms::Button^  enterBtn;
	private: System::Windows::Forms::Button^  clearBtn;
	private: System::Windows::Forms::Label^  operandDisplLbl;
	private: System::Windows::Forms::TextBox^  historyTb;

	private: bool operationPerformed = false;
			 Functions *fun;
			 void initFunctions() {
				 fun = new Functions();
			 }
			 bool pressed = false;
			 void resetPressed() {
				 pressed = (pressed) ? false : true;
			 }

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
			this->percentBtn = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->divideBtn = (gcnew System::Windows::Forms::Button());
			this->multiplyBtn = (gcnew System::Windows::Forms::Button());
			this->subtractBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->decimalBtn = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->enterBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->operandDisplLbl = (gcnew System::Windows::Forms::Label());
			this->historyTb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// percentBtn
			// 
			this->percentBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->percentBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->percentBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->percentBtn->Location = System::Drawing::Point(12, 85);
			this->percentBtn->Name = L"percentBtn";
			this->percentBtn->Size = System::Drawing::Size(50, 50);
			this->percentBtn->TabIndex = 37;
			this->percentBtn->Text = L"%";
			this->percentBtn->UseVisualStyleBackColor = false;
			this->percentBtn->Click += gcnew System::EventHandler(this, &Interface::percentBtn_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num1->Location = System::Drawing::Point(12, 253);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(50, 50);
			this->num1->TabIndex = 34;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &Interface::num1_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num4->Location = System::Drawing::Point(12, 197);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(50, 50);
			this->num4->TabIndex = 33;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &Interface::num4_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num7->Location = System::Drawing::Point(12, 141);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(50, 50);
			this->num7->TabIndex = 32;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &Interface::num7_Click);
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->output->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->output->Font = (gcnew System::Drawing::Font(L"Consolas", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->output->Location = System::Drawing::Point(12, 34);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(668, 45);
			this->output->TabIndex = 20;
			this->output->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// divideBtn
			// 
			this->divideBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->divideBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divideBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->divideBtn->Location = System::Drawing::Point(68, 85);
			this->divideBtn->Name = L"divideBtn";
			this->divideBtn->Size = System::Drawing::Size(50, 50);
			this->divideBtn->TabIndex = 21;
			this->divideBtn->Text = L"/";
			this->divideBtn->UseVisualStyleBackColor = false;
			this->divideBtn->Click += gcnew System::EventHandler(this, &Interface::divideBtn_Click);
			// 
			// multiplyBtn
			// 
			this->multiplyBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->multiplyBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiplyBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->multiplyBtn->Location = System::Drawing::Point(124, 85);
			this->multiplyBtn->Name = L"multiplyBtn";
			this->multiplyBtn->Size = System::Drawing::Size(50, 50);
			this->multiplyBtn->TabIndex = 22;
			this->multiplyBtn->Text = L"*";
			this->multiplyBtn->UseVisualStyleBackColor = false;
			this->multiplyBtn->Click += gcnew System::EventHandler(this, &Interface::multiplyBtn_Click);
			// 
			// subtractBtn
			// 
			this->subtractBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->subtractBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->subtractBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->subtractBtn->Location = System::Drawing::Point(180, 85);
			this->subtractBtn->Name = L"subtractBtn";
			this->subtractBtn->Size = System::Drawing::Size(50, 50);
			this->subtractBtn->TabIndex = 23;
			this->subtractBtn->Text = L"-";
			this->subtractBtn->UseVisualStyleBackColor = false;
			this->subtractBtn->Click += gcnew System::EventHandler(this, &Interface::subtractBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->addBtn->Location = System::Drawing::Point(180, 141);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(50, 106);
			this->addBtn->TabIndex = 24;
			this->addBtn->Text = L"+";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &Interface::addBtn_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num9->Location = System::Drawing::Point(124, 141);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(50, 50);
			this->num9->TabIndex = 25;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &Interface::num9_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num6->Location = System::Drawing::Point(124, 197);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(50, 50);
			this->num6->TabIndex = 26;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &Interface::num6_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num3->Location = System::Drawing::Point(124, 253);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(50, 50);
			this->num3->TabIndex = 27;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &Interface::num3_Click);
			// 
			// decimalBtn
			// 
			this->decimalBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->decimalBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decimalBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->decimalBtn->Location = System::Drawing::Point(124, 309);
			this->decimalBtn->Name = L"decimalBtn";
			this->decimalBtn->Size = System::Drawing::Size(50, 50);
			this->decimalBtn->TabIndex = 28;
			this->decimalBtn->Text = L".";
			this->decimalBtn->UseVisualStyleBackColor = false;
			this->decimalBtn->Click += gcnew System::EventHandler(this, &Interface::decimalBtn_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num8->Location = System::Drawing::Point(68, 141);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(50, 50);
			this->num8->TabIndex = 29;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &Interface::num8_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num5->Location = System::Drawing::Point(68, 197);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(50, 50);
			this->num5->TabIndex = 30;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &Interface::num5_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num2->Location = System::Drawing::Point(68, 253);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(50, 50);
			this->num2->TabIndex = 31;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &Interface::num2_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num0->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num0->Location = System::Drawing::Point(12, 309);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(106, 50);
			this->num0->TabIndex = 35;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &Interface::num0_Click);
			// 
			// enterBtn
			// 
			this->enterBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->enterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enterBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->enterBtn->Location = System::Drawing::Point(180, 253);
			this->enterBtn->Name = L"enterBtn";
			this->enterBtn->Size = System::Drawing::Size(50, 106);
			this->enterBtn->TabIndex = 36;
			this->enterBtn->Text = L"=";
			this->enterBtn->UseVisualStyleBackColor = false;
			this->enterBtn->Click += gcnew System::EventHandler(this, &Interface::enterBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->clearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->clearBtn->Location = System::Drawing::Point(12, 365);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(218, 50);
			this->clearBtn->TabIndex = 38;
			this->clearBtn->Text = L"CLEAR";
			this->clearBtn->UseVisualStyleBackColor = false;
			this->clearBtn->Click += gcnew System::EventHandler(this, &Interface::clearBtn_Click);
			// 
			// operandDisplLbl
			// 
			this->operandDisplLbl->AutoSize = true;
			this->operandDisplLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operandDisplLbl->Location = System::Drawing::Point(686, 36);
			this->operandDisplLbl->Name = L"operandDisplLbl";
			this->operandDisplLbl->Size = System::Drawing::Size(161, 37);
			this->operandDisplLbl->TabIndex = 39;
			this->operandDisplLbl->Text = L"        ";
			// 
			// historyTb
			// 
			this->historyTb->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->historyTb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->historyTb->Location = System::Drawing::Point(12, 8);
			this->historyTb->Name = L"historyTb";
			this->historyTb->Size = System::Drawing::Size(667, 13);
			this->historyTb->TabIndex = 40;
			this->historyTb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 558);
			this->Controls->Add(this->historyTb);
			this->Controls->Add(this->operandDisplLbl);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->percentBtn);
			this->Controls->Add(this->enterBtn);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->decimalBtn);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->addBtn);
			this->Controls->Add(this->subtractBtn);
			this->Controls->Add(this->multiplyBtn);
			this->Controls->Add(this->divideBtn);
			this->Controls->Add(this->output);
			this->Name = L"Interface";
			this->Text = L"Interface";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void num0_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "0";
		this->historyTb->Text += "0";
		resetPressed();
	}

	private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "1";
		this->historyTb->Text += "1";
		resetPressed();
	}

	private: System::Void num2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "2";
		this->historyTb->Text += "2";
		resetPressed();
	}

	private: System::Void num3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "3";
		this->historyTb->Text += "3";
		resetPressed();
	}

	private: System::Void num4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "4";
		this->historyTb->Text += "4";
		resetPressed();
	}

	private: System::Void num5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "5";
		this->historyTb->Text += "5";
		resetPressed();
	}

	private: System::Void num6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "6";
		this->historyTb->Text += "6";
		resetPressed();
	}

	private: System::Void num7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "7";
		this->historyTb->Text += "7";
		resetPressed();
	}

	private: System::Void num8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "8";
		this->historyTb->Text += "8";
		resetPressed();
	}

	private: System::Void num9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += "9";
		this->historyTb->Text += "9";
		resetPressed();
	}

	private: System::Void decimalBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (operationPerformed) {
			this->output->Text = "";
			operationPerformed = false;
		}
		this->output->Text += ".";
		this->historyTb->Text += ".";
	}

	// OPERAND BUTTONS /////////////////////////////
	// OPERAND BUTTONS /////////////////////////////

	private: System::Void addBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->operandDisplLbl->Text = "+";
		if (!pressed) {
			this->historyTb->Text += "+";
			pressed = true;
		}
		fun->setOperand('+');
		fun->setNum(getNum());
		this->output->Text = toString(fun->getResult());
		operationPerformed = true;
	}

	private: System::Void subtractBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->operandDisplLbl->Text = "-";
		if (!pressed) {
			this->historyTb->Text += "-";
		}
		fun->setOperand('-');
		fun->setNum(getNum());
		this->output->Text = toString(fun->getResult());
		operationPerformed = true;
	}

	private: System::Void multiplyBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->operandDisplLbl->Text = "*";
		if (!pressed) {
			this->historyTb->Text += "*";
		}
		fun->setOperand('*');
		fun->setNum(getNum());
		this->output->Text = toString(fun->getResult());
		operationPerformed = true;
	}

	private: System::Void divideBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->operandDisplLbl->Text = "/";
		if (!pressed) {
			this->historyTb->Text += "/";
		}
		fun->setOperand('/');
		fun->setNum(getNum());
		this->output->Text = toString(fun->getResult());
		operationPerformed = true;
	}

	private: System::Void percentBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->operandDisplLbl->Text = "%";
		if (!pressed) {
			this->historyTb->Text += "%";
		}
		fun->setOperand('%');
		fun->setNum(getNum());
		operationPerformed = true;
	}

	// EXEC BUTTONS /////////////////////////////
	// EXEC BUTTONS /////////////////////////////
	private: System::Void enterBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->operandDisplLbl->Text = "=";
		this->historyTb->Text += "=";
		fun->setNum(getNum());
		this->output->Text = toString(fun->getResult());
		operationPerformed = true;
	}

	private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->output->Text = "";
		this->operandDisplLbl->Text = "";
		this->historyTb->Text = "";
	}

	private: double getNum() {
		return Convert::ToDouble(this->output->Text);
	}

	private: System::String^ toString(System::Double number) {
		return number.ToString();
	}
};
}
