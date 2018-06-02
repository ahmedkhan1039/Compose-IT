#pragma once
#include "Instruments.h"
#include "peizo_Gui.h"
namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Peizo
	/// </summary>
	public ref class Form_Peizo : public System::Windows::Forms::Form
	{
	public:
		bool op;
		Instruments* P;
		Form_Peizo(void)
		{
			P=new peizo_Gui;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Peizo()
		{
			if (components)
			{
				delete P;
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
	private: System::Windows::Forms::Button^  btn_back;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button11;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Peizo::typeid));
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
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 103);
			this->button1->TabIndex = 13;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Peizo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 103);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Peizo::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(84, 143);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 103);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Peizo::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(119, 143);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(31, 103);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Peizo::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(156, 143);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 103);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Peizo::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(194, 143);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 103);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Peizo::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(231, 143);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 103);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Peizo::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(267, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 103);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Peizo::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(304, 143);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 103);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form_Peizo::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(341, 143);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(32, 103);
			this->button10->TabIndex = 9;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form_Peizo::button10_Click);
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(133, 252);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 23);
			this->btn_back->TabIndex = 10;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Form_Peizo::btn_back_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Welcome to Peizo Guitar";
			this->label1->Click += gcnew System::EventHandler(this, &Form_Peizo::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Lets Compose IT";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(100, 114);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 23);
			this->button11->TabIndex = 0;
			this->button11->Text = L"Keyboard";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form_Peizo::button11_KeyDown);
			this->button11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form_Peizo::button11_KeyPress);
			this->button11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form_Peizo::button11_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(171, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Disabled";
			// 
			// Form_Peizo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(387, 287);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_back);
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
			this->Name = L"Form_Peizo";
			this->Text = L"Peizo Guitar";
			this->Load += gcnew System::EventHandler(this, &Form_Peizo::Form_Peizo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('q');
			 button11->Focus();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('w');
			 button11->Focus();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('e');
			 button11->Focus();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('r');
			 button11->Focus();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('t');
			 button11->Focus();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('y');
			 button11->Focus();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('u');
			 button11->Focus();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('i');
			 button11->Focus();

		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('o');
			 button11->Focus();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 P->playsequence('p');
			 button11->Focus();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button11_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(op==0)
			 {
				 op=1;
				 label3->BackColor = Color::Green;
				 label3->Text="Enabled";
				 button1->Text="Q";
			     button2->Text="W";
			     button3->Text="E";
			     button4->Text="R";
			     button5->Text="T";
			     button6->Text="Y";
			     button7->Text="U";
				 button8->Text="I";
				 button9->Text="O";
				 button10->Text="P";
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
			 }
		 }
private: System::Void button11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(op==1)
			 {
				 if(e->KeyChar=='q'||e->KeyChar=='Q')
				 {
					 P->playsequence('q');
				 }
				 else if(e->KeyChar=='w'||e->KeyChar=='W')
				 {
					 P->playsequence('w');
				 }
				 else if(e->KeyChar=='e'||e->KeyChar=='E')
				 {
					 P->playsequence('e');
				 }
				 else if(e->KeyChar=='r'||e->KeyChar=='R')
				 {
					 P->playsequence('r');
				 }
				 else if(e->KeyChar=='t'||e->KeyChar=='T')
				 {
					 P->playsequence('t');
				 }
				 else if(e->KeyChar=='y'||e->KeyChar=='Y')
				 {
					 P->playsequence('y');
				 }
				 else if(e->KeyChar=='u'||e->KeyChar=='U')
				 {
					 P->playsequence('u');
				 }
				 else if(e->KeyChar=='i'||e->KeyChar=='I')
				 {
					 P->playsequence('i');
				 }
				 else if(e->KeyChar=='o'||e->KeyChar=='O')
				 {
					 P->playsequence('o');
				 }
				 else if(e->KeyChar=='p'||e->KeyChar=='P')
				 {
					 P->playsequence('p');
				 }
			 }

		 }
private: System::Void button11_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(op==1)
			 {
				 if(e->KeyCode==Keys::Escape)
			     {
					 this->Close();
			     }
			 }
		 }
private: System::Void Form_Peizo_Load(System::Object^  sender, System::EventArgs^  e) {
			  op=0;
			 label3->BackColor = Color::Red;
			 label3->Text="Disabled";
			 button11->Focus();
		 }
};
}
