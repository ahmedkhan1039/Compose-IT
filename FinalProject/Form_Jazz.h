#pragma once

#include "Instruments.h"
#include "jazz_Gui.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Jazz
	/// </summary>
	public ref class Form_Jazz : public System::Windows::Forms::Form
	{
	public:
		bool op;
		Instruments* J;
		Form_Jazz(void)
		{
			J=new jazz_Gui;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Jazz()
		{
			if (components)
			{
				delete J;
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
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
	private: System::Windows::Forms::Button^  btn_back;
	private: System::Windows::Forms::Button^  button13;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Jazz::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Welcome to Jazz Guitar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lets Compose IT !!!";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 114);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Jazz::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 114);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Jazz::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(88, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(27, 114);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Jazz::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(121, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 114);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Jazz::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(157, 134);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(27, 114);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Jazz::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(190, 134);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 114);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Jazz::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(227, 134);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 114);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Jazz::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(264, 134);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 114);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Jazz::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(301, 134);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(32, 114);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form_Jazz::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(339, 134);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(36, 114);
			this->button10->TabIndex = 11;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form_Jazz::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(381, 134);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 114);
			this->button11->TabIndex = 12;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form_Jazz::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(417, 134);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(31, 114);
			this->button12->TabIndex = 13;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form_Jazz::button12_Click);
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(190, 254);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 23);
			this->btn_back->TabIndex = 14;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Form_Jazz::btn_back_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(161, 105);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 23);
			this->button13->TabIndex = 0;
			this->button13->Text = L"Keyboard";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form_Jazz::button13_KeyDown);
			this->button13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form_Jazz::button13_KeyPress);
			this->button13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form_Jazz::button13_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(227, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Disabled";
			// 
			// Form_Jazz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 287);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_back);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form_Jazz";
			this->Text = L"Jazz Guitar";
			this->Load += gcnew System::EventHandler(this, &Form_Jazz::Form_Jazz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('q');
			 button13->Focus();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('w');
			 button13->Focus();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('e');
			 button13->Focus();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('r');
			 button13->Focus();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('t');
			 button13->Focus();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('y');
			 button13->Focus();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('u');
			 button13->Focus();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('i');
			 button13->Focus();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('o');
			 button13->Focus();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('p');
			 button13->Focus();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence('[');
			 button13->Focus();
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 J->playsequence(']');
			 button13->Focus();
		 }
private: System::Void Form_Jazz_Load(System::Object^  sender, System::EventArgs^  e) {
			  op=0;
			 label3->BackColor = Color::Red;
			 label3->Text="Disabled";
			 button13->Focus();
		 }
private: System::Void button13_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
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
				 button11->Text="[";
				 button12->Text="]";
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
			 }
		 }
private: System::Void button13_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(op==1)
			 {
				 if(e->KeyChar=='q'||e->KeyChar=='Q')
				 {
					 J->playsequence('q');
				 }
				 else if(e->KeyChar=='w'||e->KeyChar=='W')
				 {
					 J->playsequence('w');
				 }
				 else if(e->KeyChar=='e'||e->KeyChar=='E')
				 {
					 J->playsequence('e');
				 }
				 else if(e->KeyChar=='r'||e->KeyChar=='R')
				 {
					 J->playsequence('r');
				 }
				 else if(e->KeyChar=='t'||e->KeyChar=='T')
				 {
					 J->playsequence('t');
				 }
				 else if(e->KeyChar=='y'||e->KeyChar=='Y')
				 {
					 J->playsequence('y');
				 }
				 else if(e->KeyChar=='u'||e->KeyChar=='U')
				 {
					 J->playsequence('u');
				 }
				 else if(e->KeyChar=='i'||e->KeyChar=='I')
				 {
					 J->playsequence('i');
				 }
				 else if(e->KeyChar=='o'||e->KeyChar=='O')
				 {
					 J->playsequence('o');
				 }
				 else if(e->KeyChar=='p'||e->KeyChar=='P')
				 {
					 J->playsequence('p');
				 }
				 else if(e->KeyChar=='[')
				 {
					 J->playsequence('[');
				 }
				 else if(e->KeyChar==']')
				 {
					 J->playsequence(']');
				 }
		 }
		 }
private: System::Void button13_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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
