#pragma once
#include "electric_Pia.h"
#include "Instruments.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Ele
	/// </summary>
	public ref class Form_Ele : public System::Windows::Forms::Form
	{
	public:
		bool op;
		Instruments* El;
		Form_Ele(void)
		{
			El=new electric_Pia;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Ele()
		{
			if (components)
			{
				delete El;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  btn_back;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Ele::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 123);
			this->button1->TabIndex = 10;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Ele::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 123);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Ele::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(78, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(27, 123);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Ele::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(111, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 123);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Ele::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(144, 100);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(29, 123);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Ele::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(179, 100);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 123);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Ele::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(214, 100);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 123);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Ele::button7_Click);
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(89, 238);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 23);
			this->btn_back->TabIndex = 7;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Form_Ele::btn_back_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Welcome to Electric Piano";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Lets Compose-IT !!!";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(54, 71);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 23);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Keyboard";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Ele::button8_Click);
			this->button8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form_Ele::button8_KeyDown);
			this->button8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form_Ele::button8_KeyPress);
			this->button8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form_Ele::button8_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(120, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Disabled";
			// 
			// Form_Ele
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(253, 273);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form_Ele";
			this->Text = L"Electric Piano";
			this->Load += gcnew System::EventHandler(this, &Form_Ele::Form_Ele_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Ele_Load(System::Object^  sender, System::EventArgs^  e) {
				 op=0;
			     label3->BackColor = Color::Red;
			     label3->Text="Disabled";
				 button8->Focus();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 El->playsequence('q');
				 button8->Focus();
			 }
	private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 El->playsequence('w');
			 button8->Focus();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 El->playsequence('e');
			 button8->Focus();

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 El->playsequence('r');
			 button8->Focus();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 El->playsequence('t');
			 button8->Focus();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 El->playsequence('y');
			 button8->Focus();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 El->playsequence('u');
			 button8->Focus();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
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
			 }
		 }
private: System::Void button8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(op==1)
			 {
				 if(e->KeyChar=='q'||e->KeyChar=='Q')
				 {
					 El->playsequence('q');
				 }
				 else if(e->KeyChar=='w'||e->KeyChar=='W')
				 {
					 El->playsequence('w');
				 }
				 else if(e->KeyChar=='e'||e->KeyChar=='E')
				 {
					 El->playsequence('e');
				 }
				 else if(e->KeyChar=='r'||e->KeyChar=='R')
				 {
					 El->playsequence('r');
				 }
				 else if(e->KeyChar=='t'||e->KeyChar=='T')
				 {
					 El->playsequence('t');
				 }
				 else if(e->KeyChar=='y'||e->KeyChar=='Y')
				 {
					 El->playsequence('y');
				 }
				 else if(e->KeyChar=='u'||e->KeyChar=='U')
				 {
					 El->playsequence('u');
				 }
			 }
		 }
private: System::Void button8_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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
