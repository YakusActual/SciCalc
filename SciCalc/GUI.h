#pragma once

namespace SciCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: System::Windows::Forms::Button^  num7;

	private: System::Windows::Forms::Button^  num4;

	private: System::Windows::Forms::Button^  num1;
	private: System::Windows::Forms::Button^  num0;
	private: System::Windows::Forms::Button^  enterBtn;
	private: System::Windows::Forms::Button^  percentBtn;
	private: System::Windows::Forms::Button^  clearBtn;
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
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->enterBtn = (gcnew System::Windows::Forms::Button());
			this->percentBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->output->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->output->Font = (gcnew System::Drawing::Font(L"Consolas", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->output->Location = System::Drawing::Point(12, 13);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(957, 38);
			this->output->TabIndex = 0;
			this->output->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// divideBtn
			// 
			this->divideBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->divideBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divideBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->divideBtn->Location = System::Drawing::Point(807, 62);
			this->divideBtn->Name = L"divideBtn";
			this->divideBtn->Size = System::Drawing::Size(50, 50);
			this->divideBtn->TabIndex = 1;
			this->divideBtn->Text = L"/";
			this->divideBtn->UseVisualStyleBackColor = false;
			// 
			// multiplyBtn
			// 
			this->multiplyBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->multiplyBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiplyBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->multiplyBtn->Location = System::Drawing::Point(863, 62);
			this->multiplyBtn->Name = L"multiplyBtn";
			this->multiplyBtn->Size = System::Drawing::Size(50, 50);
			this->multiplyBtn->TabIndex = 2;
			this->multiplyBtn->Text = L"*";
			this->multiplyBtn->UseVisualStyleBackColor = false;
			// 
			// subtractBtn
			// 
			this->subtractBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->subtractBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->subtractBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->subtractBtn->Location = System::Drawing::Point(919, 62);
			this->subtractBtn->Name = L"subtractBtn";
			this->subtractBtn->Size = System::Drawing::Size(50, 50);
			this->subtractBtn->TabIndex = 3;
			this->subtractBtn->Text = L"-";
			this->subtractBtn->UseVisualStyleBackColor = false;
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->addBtn->Location = System::Drawing::Point(919, 118);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(50, 106);
			this->addBtn->TabIndex = 4;
			this->addBtn->Text = L"+";
			this->addBtn->UseVisualStyleBackColor = false;
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num9->Location = System::Drawing::Point(863, 118);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(50, 50);
			this->num9->TabIndex = 5;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &GUI::num9_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num6->Location = System::Drawing::Point(863, 174);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(50, 50);
			this->num6->TabIndex = 6;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &GUI::num6_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num3->Location = System::Drawing::Point(863, 230);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(50, 50);
			this->num3->TabIndex = 7;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &GUI::num3_Click);
			// 
			// decimalBtn
			// 
			this->decimalBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->decimalBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decimalBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->decimalBtn->Location = System::Drawing::Point(863, 286);
			this->decimalBtn->Name = L"decimalBtn";
			this->decimalBtn->Size = System::Drawing::Size(50, 50);
			this->decimalBtn->TabIndex = 8;
			this->decimalBtn->Text = L".";
			this->decimalBtn->UseVisualStyleBackColor = false;
			this->decimalBtn->Click += gcnew System::EventHandler(this, &GUI::decimalBtn_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num8->Location = System::Drawing::Point(807, 118);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(50, 50);
			this->num8->TabIndex = 9;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &GUI::num8_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num5->Location = System::Drawing::Point(807, 174);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(50, 50);
			this->num5->TabIndex = 10;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &GUI::num5_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num2->Location = System::Drawing::Point(807, 230);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(50, 50);
			this->num2->TabIndex = 11;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &GUI::num2_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num7->Location = System::Drawing::Point(751, 118);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(50, 50);
			this->num7->TabIndex = 13;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &GUI::num7_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num4->Location = System::Drawing::Point(751, 174);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(50, 50);
			this->num4->TabIndex = 14;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &GUI::num4_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num1->Location = System::Drawing::Point(751, 230);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(50, 50);
			this->num1->TabIndex = 15;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &GUI::num1_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->num0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num0->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->num0->Location = System::Drawing::Point(751, 286);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(106, 50);
			this->num0->TabIndex = 16;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &GUI::num0_Click);
			// 
			// enterBtn
			// 
			this->enterBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->enterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enterBtn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->enterBtn->Location = System::Drawing::Point(919, 230);
			this->enterBtn->Name = L"enterBtn";
			this->enterBtn->Size = System::Drawing::Size(50, 106);
			this->enterBtn->TabIndex = 17;
			this->enterBtn->Text = L"=";
			this->enterBtn->UseVisualStyleBackColor = false;
			// 
			// percentBtn
			// 
			this->percentBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->percentBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->percentBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->percentBtn->Location = System::Drawing::Point(751, 63);
			this->percentBtn->Name = L"percentBtn";
			this->percentBtn->Size = System::Drawing::Size(50, 50);
			this->percentBtn->TabIndex = 18;
			this->percentBtn->Text = L"%";
			this->percentBtn->UseVisualStyleBackColor = false;
			// 
			// clearBtn
			// 
			this->clearBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->clearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->clearBtn->Location = System::Drawing::Point(863, 342);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(106, 50);
			this->clearBtn->TabIndex = 19;
			this->clearBtn->Text = L"CLEAR";
			this->clearBtn->UseVisualStyleBackColor = false;
			this->clearBtn->Click += gcnew System::EventHandler(this, &GUI::clearBtn_Click);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 432);
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
			this->Name = L"GUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void num0_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("0");
	}
	private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("1");
	}
	private: System::Void num2_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("2");
	}
	private: System::Void num3_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("3");
	}
	private: System::Void num4_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("4");
	}
	private: System::Void num5_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("5");
	}
	private: System::Void num6_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("6");
	}
	private: System::Void num7_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("7");
	}
	private: System::Void num8_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("8");
	}
	private: System::Void num9_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar("9");
	}
	private: System::Void decimalBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		appendChar(".");
	}

	private: System::Void appendChar(String^ input){
		this->output->Text += input;
	}
	private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->output->Text = "";
	}
};
}
