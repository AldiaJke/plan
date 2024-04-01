#pragma once

namespace plan {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ pn;
	private: System::Windows::Forms::TextBox^ vs;

	private: System::Windows::Forms::TextBox^ sb;
	private: System::Windows::Forms::TextBox^ pt;
	private: System::Windows::Forms::TextBox^ cht;
	private: System::Windows::Forms::TextBox^ sr;
	private: System::Windows::Forms::TextBox^ vt;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::ComboBox^ comboBox12;
	private: System::Windows::Forms::ComboBox^ comboBox13;
	private: System::Windows::Forms::ComboBox^ comboBox14;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::Button^ button8;






	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pn = (gcnew System::Windows::Forms::TextBox());
			this->vs = (gcnew System::Windows::Forms::TextBox());
			this->sb = (gcnew System::Windows::Forms::TextBox());
			this->pt = (gcnew System::Windows::Forms::TextBox());
			this->cht = (gcnew System::Windows::Forms::TextBox());
			this->sr = (gcnew System::Windows::Forms::TextBox());
			this->vt = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПН";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 378);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"СБ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 303);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ПТ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ЧТ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"СР";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ВТ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 451);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 29);
			this->label7->TabIndex = 6;
			this->label7->Text = L"ВС";
			// 
			// pn
			// 
			this->pn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pn->Location = System::Drawing::Point(85, 35);
			this->pn->Name = L"pn";
			this->pn->Size = System::Drawing::Size(361, 34);
			this->pn->TabIndex = 7;
			// 
			// vs
			// 
			this->vs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vs->Location = System::Drawing::Point(85, 448);
			this->vs->Name = L"vs";
			this->vs->Size = System::Drawing::Size(361, 34);
			this->vs->TabIndex = 9;
			// 
			// sb
			// 
			this->sb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sb->Location = System::Drawing::Point(85, 378);
			this->sb->Name = L"sb";
			this->sb->Size = System::Drawing::Size(361, 34);
			this->sb->TabIndex = 10;
			// 
			// pt
			// 
			this->pt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pt->Location = System::Drawing::Point(85, 300);
			this->pt->Name = L"pt";
			this->pt->Size = System::Drawing::Size(361, 34);
			this->pt->TabIndex = 11;
			// 
			// cht
			// 
			this->cht->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cht->Location = System::Drawing::Point(85, 223);
			this->cht->Name = L"cht";
			this->cht->Size = System::Drawing::Size(361, 34);
			this->cht->TabIndex = 12;
			// 
			// sr
			// 
			this->sr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sr->Location = System::Drawing::Point(85, 155);
			this->sr->Name = L"sr";
			this->sr->Size = System::Drawing::Size(361, 34);
			this->sr->TabIndex = 13;
			// 
			// vt
			// 
			this->vt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vt->Location = System::Drawing::Point(85, 92);
			this->vt->Name = L"vt";
			this->vt->Size = System::Drawing::Size(361, 34);
			this->vt->TabIndex = 14;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox1->Location = System::Drawing::Point(528, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(79, 37);
			this->comboBox1->TabIndex = 15;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox2->Location = System::Drawing::Point(528, 92);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(79, 37);
			this->comboBox2->TabIndex = 16;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox3->Location = System::Drawing::Point(528, 155);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(79, 37);
			this->comboBox3->TabIndex = 17;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox4->Location = System::Drawing::Point(528, 223);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(79, 37);
			this->comboBox4->TabIndex = 18;
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox5->Location = System::Drawing::Point(528, 300);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(79, 37);
			this->comboBox5->TabIndex = 19;
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox6->Location = System::Drawing::Point(528, 378);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(79, 37);
			this->comboBox6->TabIndex = 20;
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox7->Location = System::Drawing::Point(528, 448);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(79, 37);
			this->comboBox7->TabIndex = 21;
			// 
			// comboBox8
			// 
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox8->Location = System::Drawing::Point(634, 35);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(79, 37);
			this->comboBox8->TabIndex = 22;
			// 
			// comboBox9
			// 
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox9->Location = System::Drawing::Point(634, 92);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(79, 37);
			this->comboBox9->TabIndex = 23;
			// 
			// comboBox10
			// 
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox10->Location = System::Drawing::Point(634, 155);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(79, 37);
			this->comboBox10->TabIndex = 24;
			// 
			// comboBox11
			// 
			this->comboBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox11->Location = System::Drawing::Point(634, 223);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(79, 37);
			this->comboBox11->TabIndex = 25;
			// 
			// comboBox12
			// 
			this->comboBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox12->Location = System::Drawing::Point(634, 300);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(79, 37);
			this->comboBox12->TabIndex = 26;
			// 
			// comboBox13
			// 
			this->comboBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox13->Location = System::Drawing::Point(634, 375);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(79, 37);
			this->comboBox13->TabIndex = 27;
			// 
			// comboBox14
			// 
			this->comboBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox14->Location = System::Drawing::Point(634, 448);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(79, 37);
			this->comboBox14->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(536, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 29);
			this->label8->TabIndex = 29;
			this->label8->Text = L"День";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(629, 3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 29);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Месяц";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(469, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 31;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(469, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 32;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(469, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 33;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(469, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 34;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(469, 301);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 35;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(469, 379);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 36;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(469, 449);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 37;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(719, 40);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(206, 29);
			this->checkBox1->TabIndex = 38;
			this->checkBox1->Text = L"Выполнить задачу";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(719, 95);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(206, 29);
			this->checkBox2->TabIndex = 39;
			this->checkBox2->Text = L"Выполнить задачу";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(719, 158);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(206, 29);
			this->checkBox3->TabIndex = 40;
			this->checkBox3->Text = L"Выполнить задачу";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(719, 226);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(206, 29);
			this->checkBox4->TabIndex = 41;
			this->checkBox4->Text = L"Выполнить задачу";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(719, 305);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(206, 29);
			this->checkBox5->TabIndex = 42;
			this->checkBox5->Text = L"Выполнить задачу";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(719, 378);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(206, 29);
			this->checkBox6->TabIndex = 43;
			this->checkBox6->Text = L"Выполнить задачу";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->Location = System::Drawing::Point(719, 451);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(206, 29);
			this->checkBox7->TabIndex = 44;
			this->checkBox7->Text = L"Выполнить задачу";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox7_CheckedChanged);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Coral;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(949, 365);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 134);
			this->button8->TabIndex = 45;
			this->button8->Text = L"Проверить дату";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1061, 511);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox14);
			this->Controls->Add(this->comboBox13);
			this->Controls->Add(this->comboBox12);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->vt);
			this->Controls->Add(this->sr);
			this->Controls->Add(this->cht);
			this->Controls->Add(this->pt);
			this->Controls->Add(this->sb);
			this->Controls->Add(this->vs);
			this->Controls->Add(this->pn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pn->Text = "";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vt->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->sr->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->cht->Text = "";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pt->Text = "";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->sb->Text = "";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vs->Text = "";
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked == true)
	{
		this->pn->ForeColor = Color::Green;
	}
	if (this->checkBox1->Checked == false)
	{
		this->pn->ForeColor = Color::Black;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true)
	{
		this->vt->ForeColor = Color::Green;
	}
	if (this->checkBox2->Checked == false)
	{
		this->vt->ForeColor = Color::Black;
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox3->Checked == true)
	{
		this->sr->ForeColor = Color::Green;
	}
	if (this->checkBox3->Checked == false)
	{
		this->sr->ForeColor = Color::Black;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox4->Checked == true)
	{
		this->cht->ForeColor = Color::Green;
	}
	if (this->checkBox4->Checked == false)
	{
		this->cht->ForeColor = Color::Black;
	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox5->Checked == true)
	{
		this->pt->ForeColor = Color::Green;
	}
	if (this->checkBox5->Checked == false)
	{
		this->pt->ForeColor = Color::Black;
	}
}
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox6->Checked == true)
	{
		this->sb->ForeColor = Color::Green;
	}
	if (this->checkBox6->Checked == false)
	{
		this->sb->ForeColor = Color::Black;
	}
}
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox7->Checked == true)
	{
		this->vs->ForeColor = Color::Green;
	}
	if (this->checkBox7->Checked == false)
	{
		this->vs->ForeColor = Color::Black;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {;
	   if (this->pn->Text != "")
	   {
		   if (System::Convert::ToInt16(this->comboBox8->Text) < DateTime::Today.Month)
			   this->pn->ForeColor = Color::Red;
		   if (System::Convert::ToInt16(this->comboBox8->Text) == DateTime::Today.Month)
			   if (System::Convert::ToInt16(this->comboBox1->Text) < DateTime::Today.Day)
				   this->pn->ForeColor = Color::Red;
	   }

	if (this->vt->Text != "")
	{
		if (System::Convert::ToInt16(this->comboBox9->Text) < DateTime::Today.Month)
			this->vt->ForeColor = Color::Red;
		if (System::Convert::ToInt16(this->comboBox9->Text) == DateTime::Today.Month)
			if (System::Convert::ToInt16(this->comboBox2->Text) < DateTime::Today.Day)
				this->vt->ForeColor = Color::Red;
	}

	if (this->sr->Text != "")
	{
		if (System::Convert::ToInt16(this->comboBox10->Text) < DateTime::Today.Month)
			this->sr->ForeColor = Color::Red;
		if (System::Convert::ToInt16(this->comboBox10->Text) == DateTime::Today.Month)
			if (System::Convert::ToInt16(this->comboBox3->Text) < DateTime::Today.Day)
				this->sr->ForeColor = Color::Red;
	}

	if (this->cht->Text != "")
	{
		if (System::Convert::ToInt16(this->comboBox11->Text) < DateTime::Today.Month)
			this->cht->ForeColor = Color::Red;
		if (System::Convert::ToInt16(this->comboBox11->Text) == DateTime::Today.Month)
			if (System::Convert::ToInt16(this->comboBox4->Text) < DateTime::Today.Day)
				this->cht->ForeColor = Color::Red;
	}

	if (this->pt->Text != "")
	{
		if (System::Convert::ToInt16(this->comboBox12->Text) < DateTime::Today.Month)
			this->pt->ForeColor = Color::Red;
		if (System::Convert::ToInt16(this->comboBox12->Text) == DateTime::Today.Month)
			if (System::Convert::ToInt16(this->comboBox5->Text) < DateTime::Today.Day)
				this->pt->ForeColor = Color::Red;
	}

	if (this->sb->Text != "")
	{
		if (System::Convert::ToInt16(this->comboBox13->Text) < DateTime::Today.Month)
			this->sb->ForeColor = Color::Red;
		if (System::Convert::ToInt16(this->comboBox13->Text) == DateTime::Today.Month)
			if (System::Convert::ToInt16(this->comboBox6->Text) < DateTime::Today.Day)
				this->sb->ForeColor = Color::Red;
	}

	if (this->vs->Text != "")
	{
		if (System::Convert::ToInt16(this->comboBox14->Text) < DateTime::Today.Month)
			this->vs->ForeColor = Color::Red;
		if (System::Convert::ToInt16(this->comboBox14->Text) == DateTime::Today.Month)
			if (System::Convert::ToInt16(this->comboBox7->Text) < DateTime::Today.Day)
				this->vs->ForeColor = Color::Red;
	}






}
};
}
