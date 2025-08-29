#pragma once
#include<msclr\marshal_cppstd.h>
#include"Header.h"
namespace waoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			obj = new Huffman();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel4;

	private:
		/// <summary>
		/// Required designer variable.
		Huffman* obj;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button4;
		   /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(21, 62);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(725, 461);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Snow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(200, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(295, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open File Explorer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 26);
			this->textBox1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(21, 62);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(725, 461);
			this->panel2->TabIndex = 2;
			this->panel2->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Snow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(244, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 42);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Encrypt File";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Snow;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(21, 62);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(725, 461);
			this->panel3->TabIndex = 3;
			this->panel3->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Snow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(248, 353);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 55);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Decrypt File";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Controls->Add(this->button4);
			this->panel4->Location = System::Drawing::Point(21, 62);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(725, 461);
			this->panel4->TabIndex = 4;
			this->panel4->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Snow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(325, 360);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 48);
			this->button4->TabIndex = 0;
			this->button4->Text = L"END";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(444, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 5;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(767, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ stra;
		openFileDialog1->ShowDialog();
		stra = openFileDialog1->FileName;
		textBox1->Text = stra;
		std::string name = msclr::interop::marshal_as<std::string>(stra);

		std::string base_filename = name.substr(name.find_last_of("/\\") + 1);
		String^ ms = msclr::interop::marshal_as<String^>(base_filename);
		textBox1->Text = ms;
		obj->readfromfile(name);

		if (obj->insertinqueue() == true)
		{
			panel1->Hide();
			panel2->Show();
		}
		else
		{
			textBox1->Text = "File is empty.";
			panel1->Hide();
			panel4->Show();
			//exit(0);
		}



	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	obj->assign();
	obj->makingtree();
	obj->printcode(obj->getnode(), "");
	obj->encryption();
	panel2->Hide();
	panel3->Show();
	label1->Show();
	label1->Text =" File Encrypted Successfully.";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	obj->decry(obj->getnode(), obj->getstring());
	panel3->Hide();
	panel4->Show();
	label1->Text = " File Decrypted Successfully.";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	obj->end();
}
};
}
