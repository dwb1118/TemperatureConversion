#pragma once

namespace TemperatureConversion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TempConversionForm
	/// </summary>
	public ref class TempConversionForm : public System::Windows::Forms::Form
	{
	public:
		TempConversionForm(void)
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
		~TempConversionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ FtoC;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ InputBox;
	private: System::Windows::Forms::TextBox^ OutputBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->FtoC = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->InputBox = (gcnew System::Windows::Forms::TextBox());
			this->OutputBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// FtoC
			// 
			this->FtoC->Location = System::Drawing::Point(34, 85);
			this->FtoC->Name = L"FtoC";
			this->FtoC->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->FtoC->Size = System::Drawing::Size(75, 23);
			this->FtoC->TabIndex = 0;
			this->FtoC->Text = L"F --> C";
			this->FtoC->UseVisualStyleBackColor = true;
			this->FtoC->Click += gcnew System::EventHandler(this, &TempConversionForm::FtoC_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"F --> K";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(34, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"C --> F";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(175, 131);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"C --> K";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(34, 179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"K --> F";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(175, 179);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"K --> C";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// InputBox
			// 
			this->InputBox->BackColor = System::Drawing::SystemColors::Menu;
			this->InputBox->Location = System::Drawing::Point(21, 32);
			this->InputBox->Name = L"InputBox";
			this->InputBox->Size = System::Drawing::Size(100, 20);
			this->InputBox->TabIndex = 6;
			this->InputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->InputBox->TextChanged += gcnew System::EventHandler(this, &TempConversionForm::InputBox_TextChanged);
			// 
			// OutputBox
			// 
			this->OutputBox->Location = System::Drawing::Point(163, 32);
			this->OutputBox->Name = L"OutputBox";
			this->OutputBox->Size = System::Drawing::Size(100, 20);
			this->OutputBox->TabIndex = 7;
			this->OutputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(191, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Output";
			// 
			// TempConversionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(288, 391);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OutputBox);
			this->Controls->Add(this->InputBox);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->FtoC);
			this->Name = L"TempConversionForm";
			this->Text = L"TempConversionForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int num, result;

private: System::Void FtoC_Click(System::Object^ sender, System::EventArgs^ e) {  // F --> C


}









private: System::Void InputBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
