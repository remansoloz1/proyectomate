#pragma once
#include"Resultados.h"
namespace proyectomate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ fondo;
	public:
		MyForm(void)
		{
			fondo = gcnew Bitmap("fondo.jpg");
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbPais;
	protected:
	private: System::Windows::Forms::ComboBox^ cmbCiudad;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->cmbPais = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCiudad = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// cmbPais
			// 
			this->cmbPais->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbPais->FormattingEnabled = true;
			this->cmbPais->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ARGENTINA", L"CANADA", L"JAPON", L"PERU" });
			this->cmbPais->Location = System::Drawing::Point(290, 141);
			this->cmbPais->Name = L"cmbPais";
			this->cmbPais->Size = System::Drawing::Size(161, 29);
			this->cmbPais->TabIndex = 0;
			this->cmbPais->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbPais_SelectedIndexChanged);
			// 
			// cmbCiudad
			// 
			this->cmbCiudad->Enabled = false;
			this->cmbCiudad->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbCiudad->FormattingEnabled = true;
			this->cmbCiudad->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"AREQUIPA", L"LIMA", L"TRUJILLO", L"MONTREAL",
					L"QUEBEC", L"TORONTO", L"MENDOZA", L"ROSARIO", L"SALTA", L"KIOTO", L"NARA", L"OSAKA"
			});
			this->cmbCiudad->Location = System::Drawing::Point(293, 190);
			this->cmbCiudad->Name = L"cmbCiudad";
			this->cmbCiudad->Size = System::Drawing::Size(158, 29);
			this->cmbCiudad->TabIndex = 1;
			this->cmbCiudad->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbCiudad_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(290, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 33);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"NUMERO DE DIAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(144, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PAIS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(131, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"CIUDAD";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(227, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculanding";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(200, 257);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(178, 24);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"DATOS ALEATORIOS";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(200, 301);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(216, 24);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"DATOS EN TIEMPO REAL";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 611);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->cmbCiudad);
			this->Controls->Add(this->cmbPais);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void cmbPais_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		cmbCiudad->Enabled = true;
		if (cmbPais->SelectedItem->ToString() == "PERU") {
			fondo = gcnew Bitmap("imagenesPaises/peru.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("AREQUIPA");
			cmbCiudad->Items->Add("LIMA");
			cmbCiudad->Items->Add("TRUJILLO");
		}
		else if (cmbPais->SelectedItem->ToString() == "CANADA") {
			fondo = gcnew Bitmap("imagenesPaises/canada.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("MONTREAL");
			cmbCiudad->Items->Add("QUEBEC");
			cmbCiudad->Items->Add("TORONTO");
		}
		else if (cmbPais->SelectedItem->ToString() == "ARGENTINA") {
			fondo = gcnew Bitmap("imagenesPaises/argentina.jpeg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("MENDOZA");
			cmbCiudad->Items->Add("ROSARIO");
			cmbCiudad->Items->Add("SALTA");
		}
		else if (cmbPais->SelectedItem->ToString() == "JAPON") {
			fondo = gcnew Bitmap("imagenesPaises/japon.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("KIOTO");
			cmbCiudad->Items->Add("NARA");
			cmbCiudad->Items->Add("OSAKA");
		}
		
	}
	private: System::Void cmbCiudad_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 13) {
		e->Handled = true;
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int value;
	if (Int32::TryParse(textBox1->Text, value)) {
		textBox1->ForeColor = Color::Blue;
		
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = this->CreateGraphics();
	BufferedGraphicsContext^ space = BufferedGraphicsManager::Current;
	BufferedGraphics^ buffer = space->Allocate(g, this->ClientRectangle);
	int ancho = buffer->Graphics->VisibleClipBounds.Width;
	int alto = buffer->Graphics->VisibleClipBounds.Height;
	buffer->Graphics->DrawImage(fondo, 0, 0, ancho, alto);
	buffer->Render(g);
	delete buffer, space, g;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		checkBox2->Checked = false;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		checkBox1->Checked = false;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == false && checkBox2->Checked == false) {
		MessageBox::Show("SELECCIONA UN TIPO DE DATO");
	}
	else {

	Resultados^ resultado = gcnew Resultados();
	resultado->ShowDialog();
	}
}
};
}
