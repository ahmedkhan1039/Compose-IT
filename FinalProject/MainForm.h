#pragma once
#include "Form_G.h"
#include "Testform.h"
namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		Form_G^ g;
		Testform^ T;
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete g;
				delete T;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_p;
	protected: 
	private: System::Windows::Forms::Button^  btn_g;
	private: System::Windows::Forms::Button^  btn_exit;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->btn_p = (gcnew System::Windows::Forms::Button());
			this->btn_g = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_p
			// 
			this->btn_p->Location = System::Drawing::Point(17, 113);
			this->btn_p->Name = L"btn_p";
			this->btn_p->Size = System::Drawing::Size(115, 33);
			this->btn_p->TabIndex = 0;
			this->btn_p->Text = L"Piano";
			this->btn_p->UseVisualStyleBackColor = true;
			this->btn_p->Click += gcnew System::EventHandler(this, &MainForm::btn_p_Click);
			// 
			// btn_g
			// 
			this->btn_g->Location = System::Drawing::Point(173, 113);
			this->btn_g->Name = L"btn_g";
			this->btn_g->Size = System::Drawing::Size(113, 33);
			this->btn_g->TabIndex = 1;
			this->btn_g->Text = L"Guitar";
			this->btn_g->UseVisualStyleBackColor = true;
			this->btn_g->Click += gcnew System::EventHandler(this, &MainForm::btn_g_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->Location = System::Drawing::Point(90, 189);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(123, 30);
			this->btn_exit->TabIndex = 2;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MainForm::btn_exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome to Compose IT 2.0";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Select your Instrument:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 273);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_g);
			this->Controls->Add(this->btn_p);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Compose IT V2.0";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_p_Click(System::Object^  sender, System::EventArgs^  e) {
				 T= gcnew Testform;
				 this->Hide();
				 T->ShowDialog();
				 this->Show();
			 }
private: System::Void btn_g_Click(System::Object^  sender, System::EventArgs^  e) {
			 g= gcnew Form_G;
			 this->Hide();
			 g->ShowDialog();
			 this->Show();
		 }
private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
