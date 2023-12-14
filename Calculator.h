#pragma once


namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	///A user-friendly graphical user interface (GUI) calculator designed to perform basic arithmetic operations, including addition, subtraction, multiplication, division, and calculation of square roots.
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ numBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lnum;
	private: System::Windows::Forms::Button^ resultBtn;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::Button^ divBtn;

	private: System::Windows::Forms::Button^ multBtn;

	private: System::Windows::Forms::Button^ subBtn;
	private: System::Windows::Forms::Button^ sqrtBtn;

	private: System::Windows::Forms::Button^ backSpaceBtn;
	private: System::Windows::Forms::Button^ clearBtn;
	private: System::Windows::Forms::Button^ fourBtn;
	private: System::Windows::Forms::Button^ nineBtn;






	private: System::Windows::Forms::Button^ eightBtn;

	private: System::Windows::Forms::Button^ sevenBtn;

	private: System::Windows::Forms::Button^ dotBtn;
	private: System::Windows::Forms::Button^ zeroBtn;


	private: System::Windows::Forms::Button^ signBtn;
	private: System::Windows::Forms::Button^ threeBtn;


	private: System::Windows::Forms::Button^ twoBtn;

	private: System::Windows::Forms::Button^ oneBtn;
	private: System::Windows::Forms::Button^ sixBtn;


	private: System::Windows::Forms::Button^ fiveBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lnum = (gcnew System::Windows::Forms::Label());
			this->numBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dotBtn = (gcnew System::Windows::Forms::Button());
			this->zeroBtn = (gcnew System::Windows::Forms::Button());
			this->signBtn = (gcnew System::Windows::Forms::Button());
			this->threeBtn = (gcnew System::Windows::Forms::Button());
			this->twoBtn = (gcnew System::Windows::Forms::Button());
			this->oneBtn = (gcnew System::Windows::Forms::Button());
			this->sixBtn = (gcnew System::Windows::Forms::Button());
			this->fiveBtn = (gcnew System::Windows::Forms::Button());
			this->fourBtn = (gcnew System::Windows::Forms::Button());
			this->nineBtn = (gcnew System::Windows::Forms::Button());
			this->eightBtn = (gcnew System::Windows::Forms::Button());
			this->sevenBtn = (gcnew System::Windows::Forms::Button());
			this->sqrtBtn = (gcnew System::Windows::Forms::Button());
			this->backSpaceBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->divBtn = (gcnew System::Windows::Forms::Button());
			this->multBtn = (gcnew System::Windows::Forms::Button());
			this->subBtn = (gcnew System::Windows::Forms::Button());
			this->resultBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::Lavender;
			this->panel1->Controls->Add(this->lnum);
			this->panel1->Controls->Add(this->numBox);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(475, 128);
			this->panel1->TabIndex = 0;
			// 
			// lnum //left operand and operator to be shown
			// 
			this->lnum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lnum->AutoSize = true;
			this->lnum->BackColor = System::Drawing::Color::Transparent;
			this->lnum->Enabled = false;
			this->lnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnum->ForeColor = System::Drawing::Color::Gray;
			this->lnum->Location = System::Drawing::Point(234, -3);
			this->lnum->MaximumSize = System::Drawing::Size(468, 0);
			this->lnum->Name = L"lnum";
			this->lnum->Size = System::Drawing::Size(0, 29);
			this->lnum->TabIndex = 1;
			this->lnum->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// numBox
			// 
			this->numBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->numBox->BackColor = System::Drawing::Color::Lavender;
			this->numBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBox->Location = System::Drawing::Point(3, 61);
			this->numBox->Name = L"numBox";
			this->numBox->Size = System::Drawing::Size(469, 57);
			this->numBox->TabIndex = 0;
			this->numBox->Text = L"0";
			this->numBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numBox->WordWrap = false;
			this->numBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::numBox_MouseClick);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->dotBtn);
			this->panel2->Controls->Add(this->zeroBtn);
			this->panel2->Controls->Add(this->signBtn);
			this->panel2->Controls->Add(this->threeBtn);
			this->panel2->Controls->Add(this->twoBtn);
			this->panel2->Controls->Add(this->oneBtn);
			this->panel2->Controls->Add(this->sixBtn);
			this->panel2->Controls->Add(this->fiveBtn);
			this->panel2->Controls->Add(this->fourBtn);
			this->panel2->Controls->Add(this->nineBtn);
			this->panel2->Controls->Add(this->eightBtn);
			this->panel2->Controls->Add(this->sevenBtn);
			this->panel2->Controls->Add(this->sqrtBtn);
			this->panel2->Controls->Add(this->backSpaceBtn);
			this->panel2->Controls->Add(this->clearBtn);
			this->panel2->Controls->Add(this->divBtn);
			this->panel2->Controls->Add(this->multBtn);
			this->panel2->Controls->Add(this->subBtn);
			this->panel2->Controls->Add(this->resultBtn);
			this->panel2->Controls->Add(this->addBtn);
			this->panel2->Location = System::Drawing::Point(12, 163);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(475, 434);
			this->panel2->TabIndex = 1;
			// 
			// dotBtn
			// 
			this->dotBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->dotBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dotBtn->Location = System::Drawing::Point(241, 349);
			this->dotBtn->Name = L"dotBtn";
			this->dotBtn->Size = System::Drawing::Size(114, 82);
			this->dotBtn->TabIndex = 19;
			this->dotBtn->Text = L".";
			this->dotBtn->UseVisualStyleBackColor = false;
			this->dotBtn->Click += gcnew System::EventHandler(this, &Calculator::dotBtn_Click);
			// 
			// zeroBtn
			// 
			this->zeroBtn->BackColor = System::Drawing::Color::White;
			this->zeroBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zeroBtn->Location = System::Drawing::Point(120, 352);
			this->zeroBtn->Name = L"zeroBtn";
			this->zeroBtn->Size = System::Drawing::Size(114, 82);
			this->zeroBtn->TabIndex = 18;
			this->zeroBtn->Text = L"0";
			this->zeroBtn->UseVisualStyleBackColor = false;
			this->zeroBtn->Click += gcnew System::EventHandler(this, &Calculator::zeroBtn_Click);
			// 
			// signBtn
			// 
			this->signBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->signBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signBtn->Location = System::Drawing::Point(0, 352);
			this->signBtn->Name = L"signBtn";
			this->signBtn->Size = System::Drawing::Size(114, 82);
			this->signBtn->TabIndex = 17;
			this->signBtn->Text = L"+/-";
			this->signBtn->UseVisualStyleBackColor = false;
			this->signBtn->Click += gcnew System::EventHandler(this, &Calculator::signBtn_Click);
			// 
			// threeBtn
			// 
			this->threeBtn->BackColor = System::Drawing::Color::White;
			this->threeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threeBtn->Location = System::Drawing::Point(240, 264);
			this->threeBtn->Name = L"threeBtn";
			this->threeBtn->Size = System::Drawing::Size(114, 82);
			this->threeBtn->TabIndex = 16;
			this->threeBtn->Text = L"3";
			this->threeBtn->UseVisualStyleBackColor = false;
			this->threeBtn->Click += gcnew System::EventHandler(this, &Calculator::threeBtn_Click);
			// 
			// twoBtn
			// 
			this->twoBtn->BackColor = System::Drawing::Color::White;
			this->twoBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoBtn->Location = System::Drawing::Point(120, 264);
			this->twoBtn->Name = L"twoBtn";
			this->twoBtn->Size = System::Drawing::Size(114, 82);
			this->twoBtn->TabIndex = 15;
			this->twoBtn->Text = L"2";
			this->twoBtn->UseVisualStyleBackColor = false;
			this->twoBtn->Click += gcnew System::EventHandler(this, &Calculator::twoBtn_Click);
			// 
			// oneBtn
			// 
			this->oneBtn->BackColor = System::Drawing::Color::White;
			this->oneBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneBtn->Location = System::Drawing::Point(0, 264);
			this->oneBtn->Name = L"oneBtn";
			this->oneBtn->Size = System::Drawing::Size(114, 82);
			this->oneBtn->TabIndex = 14;
			this->oneBtn->Text = L"1";
			this->oneBtn->UseVisualStyleBackColor = false;
			this->oneBtn->Click += gcnew System::EventHandler(this, &Calculator::oneBtn_Click);
			// 
			// sixBtn
			// 
			this->sixBtn->BackColor = System::Drawing::Color::White;
			this->sixBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixBtn->Location = System::Drawing::Point(240, 176);
			this->sixBtn->Name = L"sixBtn";
			this->sixBtn->Size = System::Drawing::Size(114, 82);
			this->sixBtn->TabIndex = 13;
			this->sixBtn->Text = L"6";
			this->sixBtn->UseVisualStyleBackColor = false;
			this->sixBtn->Click += gcnew System::EventHandler(this, &Calculator::sixBtn_Click);
			// 
			// fiveBtn
			// 
			this->fiveBtn->BackColor = System::Drawing::Color::White;
			this->fiveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fiveBtn->Location = System::Drawing::Point(120, 176);
			this->fiveBtn->Name = L"fiveBtn";
			this->fiveBtn->Size = System::Drawing::Size(114, 82);
			this->fiveBtn->TabIndex = 12;
			this->fiveBtn->Text = L"5";
			this->fiveBtn->UseVisualStyleBackColor = false;
			this->fiveBtn->Click += gcnew System::EventHandler(this, &Calculator::fiveBtn_Click);
			// 
			// fourBtn
			// 
			this->fourBtn->BackColor = System::Drawing::Color::White;
			this->fourBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourBtn->Location = System::Drawing::Point(0, 176);
			this->fourBtn->Name = L"fourBtn";
			this->fourBtn->Size = System::Drawing::Size(114, 82);
			this->fourBtn->TabIndex = 11;
			this->fourBtn->Text = L"4";
			this->fourBtn->UseVisualStyleBackColor = false;
			this->fourBtn->Click += gcnew System::EventHandler(this, &Calculator::fourBtn_Click);
			// 
			// nineBtn
			// 
			this->nineBtn->BackColor = System::Drawing::Color::White;
			this->nineBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nineBtn->Location = System::Drawing::Point(240, 88);
			this->nineBtn->Name = L"nineBtn";
			this->nineBtn->Size = System::Drawing::Size(114, 82);
			this->nineBtn->TabIndex = 10;
			this->nineBtn->Text = L"9";
			this->nineBtn->UseVisualStyleBackColor = false;
			this->nineBtn->Click += gcnew System::EventHandler(this, &Calculator::nineBtn_Click);
			// 
			// eightBtn
			// 
			this->eightBtn->BackColor = System::Drawing::Color::White;
			this->eightBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightBtn->Location = System::Drawing::Point(120, 88);
			this->eightBtn->Name = L"eightBtn";
			this->eightBtn->Size = System::Drawing::Size(114, 82);
			this->eightBtn->TabIndex = 9;
			this->eightBtn->Text = L"8";
			this->eightBtn->UseVisualStyleBackColor = false;
			this->eightBtn->Click += gcnew System::EventHandler(this, &Calculator::eightBtn_Click);
			// 
			// sevenBtn
			// 
			this->sevenBtn->BackColor = System::Drawing::Color::White;
			this->sevenBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenBtn->Location = System::Drawing::Point(0, 88);
			this->sevenBtn->Name = L"sevenBtn";
			this->sevenBtn->Size = System::Drawing::Size(114, 82);
			this->sevenBtn->TabIndex = 8;
			this->sevenBtn->Text = L"7";
			this->sevenBtn->UseVisualStyleBackColor = false;
			this->sevenBtn->Click += gcnew System::EventHandler(this, &Calculator::sevenBtn_Click);
			// 
			// sqrtBtn
			// 
			this->sqrtBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->sqrtBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrtBtn->Location = System::Drawing::Point(240, 0);
			this->sqrtBtn->Name = L"sqrtBtn";
			this->sqrtBtn->Size = System::Drawing::Size(114, 82);
			this->sqrtBtn->TabIndex = 7;
			this->sqrtBtn->Text = L"√";
			this->sqrtBtn->UseVisualStyleBackColor = false;
			this->sqrtBtn->Click += gcnew System::EventHandler(this, &Calculator::sqrtBtn_Click);
			// 
			// backSpaceBtn
			// 
			this->backSpaceBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->backSpaceBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backSpaceBtn->Location = System::Drawing::Point(120, 0);
			this->backSpaceBtn->Name = L"backSpaceBtn";
			this->backSpaceBtn->Size = System::Drawing::Size(114, 82);
			this->backSpaceBtn->TabIndex = 6;
			this->backSpaceBtn->Text = L"⌫";
			this->backSpaceBtn->UseVisualStyleBackColor = false;
			this->backSpaceBtn->Click += gcnew System::EventHandler(this, &Calculator::backSpaceBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBtn->Location = System::Drawing::Point(0, 0);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(114, 82);
			this->clearBtn->TabIndex = 5;
			this->clearBtn->Text = L"AC";
			this->clearBtn->UseVisualStyleBackColor = false;
			this->clearBtn->Click += gcnew System::EventHandler(this, &Calculator::clearBtn_Click);
			// 
			// divBtn
			// 
			this->divBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->divBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divBtn->Location = System::Drawing::Point(360, 0);
			this->divBtn->Name = L"divBtn";
			this->divBtn->Size = System::Drawing::Size(114, 82);
			this->divBtn->TabIndex = 4;
			this->divBtn->Text = L"÷";
			this->divBtn->UseVisualStyleBackColor = false;
			this->divBtn->Click += gcnew System::EventHandler(this, &Calculator::divBtn_Click);
			// 
			// multBtn
			// 
			this->multBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->multBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multBtn->Location = System::Drawing::Point(361, 88);
			this->multBtn->Name = L"multBtn";
			this->multBtn->Size = System::Drawing::Size(114, 82);
			this->multBtn->TabIndex = 3;
			this->multBtn->Text = L"×";
			this->multBtn->UseVisualStyleBackColor = false;
			this->multBtn->Click += gcnew System::EventHandler(this, &Calculator::multBtn_Click);
			// 
			// subBtn
			// 
			this->subBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->subBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subBtn->Location = System::Drawing::Point(361, 176);
			this->subBtn->Name = L"subBtn";
			this->subBtn->Size = System::Drawing::Size(114, 82);
			this->subBtn->TabIndex = 2;
			this->subBtn->Text = L"-";
			this->subBtn->UseVisualStyleBackColor = false;
			this->subBtn->Click += gcnew System::EventHandler(this, &Calculator::subBtn_Click);
			// 
			// resultBtn
			// 
			this->resultBtn->BackColor = System::Drawing::Color::OrangeRed;
			this->resultBtn->FlatAppearance->BorderColor = System::Drawing::Color::OrangeRed;
			this->resultBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Coral;
			this->resultBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultBtn->ForeColor = System::Drawing::Color::White;
			this->resultBtn->Location = System::Drawing::Point(361, 352);
			this->resultBtn->Name = L"resultBtn";
			this->resultBtn->Size = System::Drawing::Size(114, 82);
			this->resultBtn->TabIndex = 1;
			this->resultBtn->Text = L"=";
			this->resultBtn->UseVisualStyleBackColor = false;
			this->resultBtn->Click += gcnew System::EventHandler(this, &Calculator::resultBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addBtn->Location = System::Drawing::Point(361, 264);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(114, 82);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"+";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &Calculator::addBtn_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(499, 609);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
		double l_num, r_num; //l_num = left operand and r_num = right operand
		int opBtn{0}; // Case value for operations
		const int precision{ 3 }; 
		
		double doDouble(String^ value);
		bool isNegative(String^ value);
		bool isDotEnabled(String^ value);
		bool isNumValid(String^ value);
		String^ formatResult(double num, int precision);

private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void subBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void multBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void divBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void sqrtBtn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void resultBtn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void numBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void zeroBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void oneBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void twoBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void threeBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void fourBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void fiveBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void sixBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void sevenBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void eightBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void nineBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void clearBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void backSpaceBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void signBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dotBtn_Click(System::Object^ sender, System::EventArgs^ e);


};
}
