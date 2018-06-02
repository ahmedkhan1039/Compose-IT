#pragma once

#include "Instruments.h"
#include "grand_Pia.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Gra
	/// </summary>
	public ref class Form_Gra : public System::Windows::Forms::Form
	{
	public:
		bool op;
		Instruments* G;
		Form_Gra(void)
		{
			G= new grand_Pia;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Gra()
		{
			if (components)
			{
				delete G;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  btn_back;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Gra::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 107);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Gra::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(47, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 107);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Gra::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(82, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 107);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Gra::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(117, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(29, 107);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Gra::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(152, 130);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(28, 107);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Gra::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(186, 130);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(28, 107);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Gra::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(220, 130);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 107);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Gra::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(257, 130);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(32, 107);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Gra::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(295, 130);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(29, 107);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form_Gra::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(330, 130);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(32, 107);
			this->button10->TabIndex = 9;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form_Gra::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(368, 130);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(32, 107);
			this->button11->TabIndex = 10;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form_Gra::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(406, 130);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(32, 107);
			this->button12->TabIndex = 11;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form_Gra::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(444, 130);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(32, 107);
			this->button13->TabIndex = 12;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form_Gra::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(482, 130);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(31, 107);
			this->button14->TabIndex = 13;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form_Gra::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(519, 130);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(32, 107);
			this->button15->TabIndex = 14;
			this->button15->Text = L"15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form_Gra::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(557, 130);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(37, 107);
			this->button16->TabIndex = 15;
			this->button16->Text = L"16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form_Gra::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(600, 130);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(32, 107);
			this->button17->TabIndex = 16;
			this->button17->Text = L"17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form_Gra::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(638, 130);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(32, 107);
			this->button18->TabIndex = 17;
			this->button18->Text = L"18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form_Gra::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(676, 130);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(32, 107);
			this->button19->TabIndex = 18;
			this->button19->Text = L"19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form_Gra::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(714, 130);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(32, 107);
			this->button20->TabIndex = 19;
			this->button20->Text = L"20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form_Gra::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(752, 130);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(30, 107);
			this->button21->TabIndex = 20;
			this->button21->Text = L"21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form_Gra::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(788, 130);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(31, 107);
			this->button22->TabIndex = 21;
			this->button22->Text = L"22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form_Gra::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(825, 130);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(32, 107);
			this->button23->TabIndex = 22;
			this->button23->Text = L"23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form_Gra::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(863, 130);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(31, 107);
			this->button24->TabIndex = 23;
			this->button24->Text = L"24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form_Gra::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(900, 130);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(31, 107);
			this->button25->TabIndex = 24;
			this->button25->Text = L"25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form_Gra::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(937, 130);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(30, 107);
			this->button26->TabIndex = 25;
			this->button26->Text = L"26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form_Gra::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(973, 130);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(30, 107);
			this->button27->TabIndex = 26;
			this->button27->Text = L"27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form_Gra::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(1009, 130);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(30, 107);
			this->button28->TabIndex = 27;
			this->button28->Text = L"28";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form_Gra::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(1045, 130);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(31, 107);
			this->button29->TabIndex = 28;
			this->button29->Text = L"29";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form_Gra::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(1082, 130);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(31, 107);
			this->button30->TabIndex = 29;
			this->button30->Text = L"30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form_Gra::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(1119, 130);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(30, 107);
			this->button31->TabIndex = 30;
			this->button31->Text = L"31";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form_Gra::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(1155, 130);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(32, 107);
			this->button32->TabIndex = 31;
			this->button32->Text = L"32";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form_Gra::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(1193, 130);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(30, 107);
			this->button33->TabIndex = 32;
			this->button33->Text = L"33";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Form_Gra::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(1229, 130);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(32, 107);
			this->button34->TabIndex = 33;
			this->button34->Text = L"34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Form_Gra::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(1267, 130);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(31, 107);
			this->button35->TabIndex = 34;
			this->button35->Text = L"35";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Form_Gra::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(1304, 130);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(31, 107);
			this->button36->TabIndex = 35;
			this->button36->Text = L"36";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Form_Gra::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(482, 243);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(31, 107);
			this->button37->TabIndex = 36;
			this->button37->Text = L"37";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Form_Gra::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(519, 243);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(32, 107);
			this->button38->TabIndex = 37;
			this->button38->Text = L"38";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Form_Gra::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(557, 243);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(37, 107);
			this->button39->TabIndex = 38;
			this->button39->Text = L"39";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Form_Gra::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(600, 243);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(32, 107);
			this->button40->TabIndex = 39;
			this->button40->Text = L"40";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Form_Gra::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(638, 243);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(32, 107);
			this->button41->TabIndex = 40;
			this->button41->Text = L"41";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Form_Gra::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(676, 243);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(32, 107);
			this->button42->TabIndex = 41;
			this->button42->Text = L"42";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Form_Gra::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(714, 243);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(32, 107);
			this->button43->TabIndex = 42;
			this->button43->Text = L"43";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Form_Gra::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(752, 243);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(30, 107);
			this->button44->TabIndex = 43;
			this->button44->Text = L"44";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Form_Gra::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(788, 243);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(31, 107);
			this->button45->TabIndex = 44;
			this->button45->Text = L"45";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Form_Gra::button45_Click);
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(600, 373);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 23);
			this->btn_back->TabIndex = 45;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Form_Gra::btn_back_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(514, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 25);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Welcome to Grand Piano";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(553, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 24);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Lets Compose IT !!!";
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(582, 101);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(60, 23);
			this->button46->TabIndex = 48;
			this->button46->Text = L"Keyboard";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form_Gra::button46_KeyDown);
			this->button46->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form_Gra::button46_KeyPress);
			this->button46->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form_Gra::button46_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(648, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Disabled";
			// 
			// Form_Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1362, 408);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form_Gra";
			this->Text = L"Grand Piano";
			this->Load += gcnew System::EventHandler(this, &Form_Gra::Form_Gra_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
				 G->playsequence('a');
				 button46->Focus();
	}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('s');
			 button46->Focus();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('5');
			 button46->Focus();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('/');
			 button46->Focus();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('`');
			 button46->Focus();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('1');
			 button46->Focus();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('2');
			 button46->Focus();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('3');
			 button46->Focus();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('4');
			 button46->Focus();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('6');
			 button46->Focus();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('7');
			 button46->Focus();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('8');
			 button46->Focus();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('9');
			 button46->Focus();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('0');
			 button46->Focus();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('-');
			 button46->Focus();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('=');
			 button46->Focus();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('q');
			 button46->Focus();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('w');
			 button46->Focus();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('e');
			 button46->Focus();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('r');
			 button46->Focus();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('t');
			 button46->Focus();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('y');
			 button46->Focus();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('u');
			 button46->Focus();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('i');
			 button46->Focus();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('o');
			 button46->Focus();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('p');
			 button46->Focus();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('[');
			 button46->Focus();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence(']');
			 button46->Focus();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('d');
			 button46->Focus();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('f');
			 button46->Focus();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('g');
			 button46->Focus();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('h');
			 button46->Focus();
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('j');
			 button46->Focus();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('k');
			 button46->Focus();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('l');
			 button46->Focus();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence(';');
			 button46->Focus();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('z');
			 button46->Focus();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('x');
			 button46->Focus();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('c');
			 button46->Focus();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('v');
			 button46->Focus();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('b');
			 button46->Focus();
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('n');
			 button46->Focus();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('m');
			 button46->Focus();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence(',');
			 button46->Focus();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
			 G->playsequence('.');
			 button46->Focus();
}
private: System::Void Form_Gra_Load(System::Object^  sender, System::EventArgs^  e) {
			  op=0;
			 label3->BackColor = Color::Red;
			 label3->Text="Disabled";
			 button46->Focus();

		 }
private: System::Void button46_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(op==0)
			 {
				 op=1;
				 label3->BackColor = Color::Green;
				 label3->Text="Enabled";
				 button1->Text="`";
			 button2->Text="1";
			 button3->Text="2";
			 button4->Text="3";
			 button5->Text="4";
			 button6->Text="5";
			 button7->Text="6";
			 button8->Text="7";
			 button9->Text="8";
			 button10->Text="9";
			 button11->Text="0";
			 button12->Text="-";
			 button13->Text="=";
			 button14->Text="Q";
			 button15->Text="W";
			 button16->Text="E";
			 button17->Text="R";
			 button18->Text="T";
			 button19->Text="Y";
			 button20->Text="U";
			 button21->Text="I";
			 button22->Text="O";
			 button23->Text="P";
			 button24->Text="[";
			 button25->Text="]";
			 button26->Text="A";
			 button27->Text="S";
			 button28->Text="D";
			 button29->Text="F";
			 button30->Text="G";
			 button31->Text="H";
			 button32->Text="J";
			 button33->Text="K";
			 button34->Text="L";
			 button35->Text=";";
			 button36->Text="Z";
			 button37->Text="X";
			 button38->Text="C";
			 button39->Text="V";
			 button40->Text="B";
			 button41->Text="N";
			 button42->Text="M";
			 button43->Text=",";
			 button44->Text=".";
			 button45->Text="/";
			 }
			 else if(op==1)
			 {
				 op=0;
				 label3->BackColor = Color::Red;
				 label3->Text="Disabled";
				 button1->Text="1";
			 button2->Text="2";
			 button3->Text="3";
			 button4->Text="4";
			 button5->Text="5";
			 button6->Text="6";
			 button7->Text="7";
			 button8->Text="8";
			 button9->Text="9";
			 button10->Text="10";
			 button11->Text="11";
			 button12->Text="12";
			 button13->Text="13";
			 button14->Text="14";
			 button15->Text="15";
			 button16->Text="16";
			 button17->Text="17";
			 button18->Text="18";
			 button19->Text="19";
			 button20->Text="20";
			 button21->Text="21";
			 button22->Text="22";
			 button23->Text="23";
			 button24->Text="24";
			 button25->Text="25";
			 button26->Text="26";
			 button27->Text="27";
			 button28->Text="28";
			 button29->Text="29";
			 button30->Text="30";
			 button31->Text="31";
			 button32->Text="32";
			 button33->Text="33";
			 button34->Text="34";
			 button35->Text="35";
			 button36->Text="36";
			 button37->Text="37";
			 button38->Text="38";
			 button39->Text="39";
			 button40->Text="40";
			 button41->Text="41";
			 button42->Text="42";
			 button43->Text="43";
			 button44->Text="44";
			 button45->Text="45";
			 }
		 }
private: System::Void button46_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(op==1)
			 {
				 if(e->KeyChar=='q'||e->KeyChar=='Q')
				 {
					 G->playsequence('q');
				 }
				 else if(e->KeyChar=='w'||e->KeyChar=='W')
				 {
					 G->playsequence('w');
				 }
				 else if(e->KeyChar=='e'||e->KeyChar=='E')
				 {
					 G->playsequence('e');
				 }
				 else if(e->KeyChar=='r'||e->KeyChar=='R')
				 {
					 G->playsequence('r');
				 }
				 else if(e->KeyChar=='t'||e->KeyChar=='T')
				 {
					 G->playsequence('t');
				 }
				 else if(e->KeyChar=='y'||e->KeyChar=='Y')
				 {
					 G->playsequence('y');
				 }
				 else if(e->KeyChar=='u'||e->KeyChar=='U')
				 {
					 G->playsequence('u');
				 }
				 else if(e->KeyChar=='i'||e->KeyChar=='I')
				 {
					 G->playsequence('i');
				 }
				 else if(e->KeyChar=='o'||e->KeyChar=='O')
				 {
					 G->playsequence('o');
				 }
				 else if(e->KeyChar=='p'||e->KeyChar=='P')
				 {
					 G->playsequence('p');
				 }
				 else if(e->KeyChar=='[')
				 {
					 G->playsequence('[');
				 }
				 else if(e->KeyChar==']')
				 {
					 G->playsequence(']');
				 }
				 else if(e->KeyChar=='`')
				 {
					 G->playsequence('`');
				 }
				 else if(e->KeyChar=='1')
				 {
					 G->playsequence('1');
				 }
				 else if(e->KeyChar=='2')
				 {
					 G->playsequence('2');
				 }
				 else if(e->KeyChar=='3')
				 {
					 G->playsequence('3');
				 }
				 else if(e->KeyChar=='4')
				 {
					 G->playsequence('4');
				 }
				 else if(e->KeyChar=='5')
				 {
					 G->playsequence('5');
				 }
				 else if(e->KeyChar=='6')
				 {
					 G->playsequence('6');
				 }
				 else if(e->KeyChar=='7')
				 {
					 G->playsequence('7');
				 }
				 else if(e->KeyChar=='8')
				 {
					 G->playsequence('8');
				 }
				 else if(e->KeyChar=='9')
				 {
					 G->playsequence('9');
				 }
				 else if(e->KeyChar=='0')
				 {
					 G->playsequence('0');
				 }
				 else if(e->KeyChar=='-')
				 {
					 G->playsequence('-');
				 }
				 else if(e->KeyChar=='=')
				 {
					 G->playsequence('=');
				 }
				 else if(e->KeyChar=='a'||e->KeyChar=='A')
				 {
					 G->playsequence('a');
				 }
				 else if(e->KeyChar=='s'||e->KeyChar=='S')
				 {
					 G->playsequence('s');
				 }
				 else if(e->KeyChar=='d'||e->KeyChar=='D')
				 {
					 G->playsequence('d');
				 }
				 else if(e->KeyChar=='f'||e->KeyChar=='F')
				 {
					 G->playsequence('f');
				 }
				 else if(e->KeyChar=='g'||e->KeyChar=='G')
				 {
					 G->playsequence('g');
				 }
				 else if(e->KeyChar=='h'||e->KeyChar=='H')
				 {
					 G->playsequence('h');
				 }
				 else if(e->KeyChar=='j'||e->KeyChar=='J')
				 {
					 G->playsequence('j');
				 }
				 else if(e->KeyChar=='k'||e->KeyChar=='K')
				 {
					 G->playsequence('k');
				 }
				 else if(e->KeyChar=='l'||e->KeyChar=='L')
				 {
					 G->playsequence('l');
				 }
				 else if(e->KeyChar==';')
				 {
					 G->playsequence(';');
				 }
				 else if(e->KeyChar=='z'||e->KeyChar=='Z')
				 {
					 G->playsequence('z');
				 }
				 else if(e->KeyChar=='x'||e->KeyChar=='X')
				 {
					 G->playsequence('x');
				 }
				 else if(e->KeyChar=='c'||e->KeyChar=='C')
				 {
					 G->playsequence('c');
				 }
				 else if(e->KeyChar=='v'||e->KeyChar=='V')
				 {
					 G->playsequence('v');
				 }
				 else if(e->KeyChar=='b'||e->KeyChar=='B')
				 {
					 G->playsequence('b');
				 }
				 else if(e->KeyChar=='n'||e->KeyChar=='N')
				 {
					 G->playsequence('n');
				 }
				 else if(e->KeyChar=='m'||e->KeyChar=='M')
				 {
					 G->playsequence('m');
				 }
				 else if(e->KeyChar==',')
				 {
					 G->playsequence(',');
				 }
				 else if(e->KeyChar=='.')
				 {
					 G->playsequence('.');
				 }
				 else if(e->KeyChar=='/')
				 {
					 G->playsequence('/');
				 }
				 }
		 }
private: System::Void button46_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(op==1)
			 {
				 if(e->KeyCode==Keys::Escape)
			     {
					 this->Close();
			     }
			 }

		 }
};
}
