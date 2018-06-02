#pragma once
#include "Form_Acous.h"
#include "Form_Jazz.h"
#include "Form_Peizo.h"
namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_G
	/// </summary>
	public ref class Form_G : public System::Windows::Forms::Form
	{
	public:
		Form_Acous^ acous;
		Form_Jazz^ jazz;
		Form_Peizo^ peizo;
		Form_G(void)
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
		~Form_G()
		{
			if (components)
			{
				delete peizo;
				delete jazz;
				delete acous;
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  btn_back;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_G::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Guitar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Select Your Catagory:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Acoustic Guitar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_G::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(72, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Jazz Guitar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_G::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(72, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Peizo Guitar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_G::button3_Click);
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(16, 243);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 23);
			this->btn_back->TabIndex = 5;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Form_G::btn_back_Click);
			// 
			// Form_G
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 273);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form_G";
			this->Text = L"Guitar";
			this->Load += gcnew System::EventHandler(this, &Form_G::Form_G_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 acous= gcnew Form_Acous;
			 this->Hide();
			 acous->ShowDialog();
			 this->Show();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 jazz= gcnew Form_Jazz;
			 this->Hide();
			 jazz->ShowDialog();
			 this->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 peizo=gcnew Form_Peizo;
			 this->Hide();
			 peizo->ShowDialog();
			 this->Show();
		 }
private: System::Void Form_G_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
