#pragma once
#include "Form_Ele.h"
#include "Form_Gra.h"
#include "Form_Rho.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Testform
	/// </summary>
	public ref class Testform : public System::Windows::Forms::Form
	{
	public:
		Form_Ele^ ele;
		Form_Gra^ gra;
		Form_Rho^ rho;
		Testform(void)
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
		~Testform()
		{
			if (components)
			{
				delete rho;
				delete gra;
				delete ele;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btn_back;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Testform::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Grand Piano";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Testform::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(53, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Electric Piano";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Testform::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(53, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Rhodes Piano";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Testform::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome to Piano";
			this->label1->Click += gcnew System::EventHandler(this, &Testform::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Select your Catagory:";
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(12, 226);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 23);
			this->btn_back->TabIndex = 5;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &Testform::btn_back_Click);
			// 
			// Testform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Testform";
			this->Text = L"Piano";
			this->Load += gcnew System::EventHandler(this, &Testform::Testform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 gra=gcnew Form_Gra;
				 this->Hide();
				 gra->ShowDialog();
				 this->Show();
			 }
	private: System::Void Testform_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 ele=gcnew Form_Ele;
			 this->Hide();
			 ele->ShowDialog();
			 this->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 rho= gcnew Form_Rho;
			 this->Hide();
			 rho->ShowDialog();
			 this->Show();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
