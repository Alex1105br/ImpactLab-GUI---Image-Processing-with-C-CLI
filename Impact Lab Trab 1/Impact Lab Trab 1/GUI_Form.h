#pragma once

#include <chrono>

namespace ImpactLabTrab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Sumário para GUI_Form
	/// </summary>
	public ref class GUI_Form : public System::Windows::Forms::Form
	{
	public:
		GUI_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~GUI_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ botao_Open;
	protected:


	private: System::Windows::Forms::PictureBox^ pb_image_entrada;
	private: System::Windows::Forms::PictureBox^ pb_image_saida;
	private: System::Windows::Forms::Button^ filtro_PB;
	private: System::Windows::Forms::PictureBox^ pb_CopiaImg;
	private: System::Windows::Forms::Button^ botao_Copy;
	private: System::Windows::Forms::Button^ botao_Exit;
	private: System::Windows::Forms::Button^ botao_Close;
	private: System::Windows::Forms::Button^ botao_Negativo;
	private: System::Windows::Forms::Button^ botao_filtroVermelho;
	private: System::Windows::Forms::Label^ lbl_TimeElapsed;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;












	protected:

	protected:




	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI_Form::typeid));
			this->botao_Open = (gcnew System::Windows::Forms::Button());
			this->pb_image_entrada = (gcnew System::Windows::Forms::PictureBox());
			this->pb_image_saida = (gcnew System::Windows::Forms::PictureBox());
			this->filtro_PB = (gcnew System::Windows::Forms::Button());
			this->pb_CopiaImg = (gcnew System::Windows::Forms::PictureBox());
			this->botao_Copy = (gcnew System::Windows::Forms::Button());
			this->botao_Exit = (gcnew System::Windows::Forms::Button());
			this->botao_Close = (gcnew System::Windows::Forms::Button());
			this->botao_Negativo = (gcnew System::Windows::Forms::Button());
			this->botao_filtroVermelho = (gcnew System::Windows::Forms::Button());
			this->lbl_TimeElapsed = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_image_entrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_image_saida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_CopiaImg))->BeginInit();
			this->SuspendLayout();
			// 
			// botao_Open
			// 
			this->botao_Open->BackColor = System::Drawing::Color::Lime;
			this->botao_Open->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botao_Open->Location = System::Drawing::Point(35, 12);
			this->botao_Open->Name = L"botao_Open";
			this->botao_Open->Size = System::Drawing::Size(111, 45);
			this->botao_Open->TabIndex = 0;
			this->botao_Open->Text = L"Open";
			this->botao_Open->UseVisualStyleBackColor = false;
			this->botao_Open->Click += gcnew System::EventHandler(this, &GUI_Form::botao_Open_Click);
			// 
			// pb_image_entrada
			// 
			this->pb_image_entrada->BackColor = System::Drawing::SystemColors::Control;
			this->pb_image_entrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pb_image_entrada->Location = System::Drawing::Point(35, 263);
			this->pb_image_entrada->Name = L"pb_image_entrada";
			this->pb_image_entrada->Size = System::Drawing::Size(399, 246);
			this->pb_image_entrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb_image_entrada->TabIndex = 2;
			this->pb_image_entrada->TabStop = false;
			this->pb_image_entrada->Click += gcnew System::EventHandler(this, &GUI_Form::pb_image_entrada_Click);
			// 
			// pb_image_saida
			// 
			this->pb_image_saida->BackColor = System::Drawing::SystemColors::Control;
			this->pb_image_saida->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pb_image_saida->Location = System::Drawing::Point(845, 263);
			this->pb_image_saida->Name = L"pb_image_saida";
			this->pb_image_saida->Size = System::Drawing::Size(399, 246);
			this->pb_image_saida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb_image_saida->TabIndex = 3;
			this->pb_image_saida->TabStop = false;
			// 
			// filtro_PB
			// 
			this->filtro_PB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filtro_PB->Location = System::Drawing::Point(258, 12);
			this->filtro_PB->Name = L"filtro_PB";
			this->filtro_PB->Size = System::Drawing::Size(176, 63);
			this->filtro_PB->TabIndex = 4;
			this->filtro_PB->Text = L"FIltro Preto em Branco";
			this->filtro_PB->UseVisualStyleBackColor = true;
			this->filtro_PB->Click += gcnew System::EventHandler(this, &GUI_Form::filtro_PB_Click);
			// 
			// pb_CopiaImg
			// 
			this->pb_CopiaImg->BackColor = System::Drawing::SystemColors::Control;
			this->pb_CopiaImg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pb_CopiaImg->Location = System::Drawing::Point(440, 263);
			this->pb_CopiaImg->Name = L"pb_CopiaImg";
			this->pb_CopiaImg->Size = System::Drawing::Size(399, 246);
			this->pb_CopiaImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb_CopiaImg->TabIndex = 5;
			this->pb_CopiaImg->TabStop = false;
			// 
			// botao_Copy
			// 
			this->botao_Copy->BackColor = System::Drawing::Color::Gold;
			this->botao_Copy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botao_Copy->Location = System::Drawing::Point(35, 113);
			this->botao_Copy->Name = L"botao_Copy";
			this->botao_Copy->Size = System::Drawing::Size(111, 43);
			this->botao_Copy->TabIndex = 6;
			this->botao_Copy->Text = L"Copy";
			this->botao_Copy->UseVisualStyleBackColor = false;
			this->botao_Copy->Click += gcnew System::EventHandler(this, &GUI_Form::botao_Copy_Click);
			// 
			// botao_Exit
			// 
			this->botao_Exit->BackColor = System::Drawing::Color::LightCoral;
			this->botao_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->botao_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botao_Exit->Location = System::Drawing::Point(36, 162);
			this->botao_Exit->Name = L"botao_Exit";
			this->botao_Exit->Size = System::Drawing::Size(110, 41);
			this->botao_Exit->TabIndex = 7;
			this->botao_Exit->Text = L"Exit";
			this->botao_Exit->UseVisualStyleBackColor = false;
			this->botao_Exit->Click += gcnew System::EventHandler(this, &GUI_Form::botao_Exit_Click);
			// 
			// botao_Close
			// 
			this->botao_Close->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->botao_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botao_Close->ForeColor = System::Drawing::SystemColors::Control;
			this->botao_Close->Location = System::Drawing::Point(35, 63);
			this->botao_Close->Name = L"botao_Close";
			this->botao_Close->Size = System::Drawing::Size(111, 44);
			this->botao_Close->TabIndex = 8;
			this->botao_Close->Text = L"Clean";
			this->botao_Close->UseVisualStyleBackColor = false;
			this->botao_Close->Click += gcnew System::EventHandler(this, &GUI_Form::botao_Close_Click);
			// 
			// botao_Negativo
			// 
			this->botao_Negativo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botao_Negativo->Location = System::Drawing::Point(440, 12);
			this->botao_Negativo->Name = L"botao_Negativo";
			this->botao_Negativo->Size = System::Drawing::Size(176, 63);
			this->botao_Negativo->TabIndex = 9;
			this->botao_Negativo->Text = L"Filtro Negativo";
			this->botao_Negativo->UseVisualStyleBackColor = true;
			this->botao_Negativo->Click += gcnew System::EventHandler(this, &GUI_Form::botao_Negativo_Click);
			// 
			// botao_filtroVermelho
			// 
			this->botao_filtroVermelho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botao_filtroVermelho->Location = System::Drawing::Point(622, 12);
			this->botao_filtroVermelho->Name = L"botao_filtroVermelho";
			this->botao_filtroVermelho->Size = System::Drawing::Size(176, 63);
			this->botao_filtroVermelho->TabIndex = 10;
			this->botao_filtroVermelho->Text = L"Realça Vermelho";
			this->botao_filtroVermelho->UseVisualStyleBackColor = true;
			this->botao_filtroVermelho->Click += gcnew System::EventHandler(this, &GUI_Form::botao_filtroVermelho_Click);
			// 
			// lbl_TimeElapsed
			// 
			this->lbl_TimeElapsed->AutoSize = true;
			this->lbl_TimeElapsed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_TimeElapsed->ForeColor = System::Drawing::Color::Firebrick;
			this->lbl_TimeElapsed->Location = System::Drawing::Point(253, 98);
			this->lbl_TimeElapsed->Name = L"lbl_TimeElapsed";
			this->lbl_TimeElapsed->Size = System::Drawing::Size(242, 58);
			this->lbl_TimeElapsed->TabIndex = 6;
			this->lbl_TimeElapsed->Text = L"Tempo de Execução:\n0 segundos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(589, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 31);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Cópia";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(138, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 31);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Img. Original";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1009, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 31);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Filtro";
			// 
			// GUI_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1278, 535);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbl_TimeElapsed);
			this->Controls->Add(this->botao_filtroVermelho);
			this->Controls->Add(this->botao_Negativo);
			this->Controls->Add(this->botao_Close);
			this->Controls->Add(this->botao_Exit);
			this->Controls->Add(this->botao_Copy);
			this->Controls->Add(this->pb_CopiaImg);
			this->Controls->Add(this->filtro_PB);
			this->Controls->Add(this->pb_image_saida);
			this->Controls->Add(this->pb_image_entrada);
			this->Controls->Add(this->botao_Open);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GUI_Form";
			this->Text = L"GUI_ImpactLab";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_image_entrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_image_saida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_CopiaImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botao_Open_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pb_image_entrada->ImageLocation = ofd->FileName;
		}
	}
	

	private: System::Void botao_Copy_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pb_image_entrada->Image != nullptr) {
			pb_CopiaImg->Image = pb_image_entrada->Image;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void pb_image_entrada_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void botao_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void botao_Close_Click(System::Object^ sender, System::EventArgs^ e) {
		pb_image_entrada->ImageLocation = "";
		pb_image_saida->Image = nullptr;
		pb_CopiaImg->Image = nullptr;
	}

	// Filtros

	private: System::Void filtro_PB_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pb_image_entrada->Image != nullptr) {

			Process^ currentProcess = Process::GetCurrentProcess();
			//TimeSpan startCpuTime = currentProcess->UserProcessorTime;
			auto start_time = std::chrono::high_resolution_clock::now();

			Bitmap^ bmp = dynamic_cast<Bitmap^>(pb_image_entrada->Image->Clone());

			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {

					Color pixelColor = bmp->GetPixel(x, y);

					double grayValue = 0.2126 * pixelColor.R + 0.7152 * pixelColor.G + 0.0722 * pixelColor.B;

					Color newColor = Color::FromArgb(pixelColor.A, (int)grayValue, (int)grayValue, (int)grayValue);

					bmp->SetPixel(x, y, newColor);
				}
			}
			

			auto stop_time = std::chrono::high_resolution_clock::now();

			auto duration_time = std::chrono::duration_cast<std::chrono::milliseconds>(stop_time - start_time);

			lbl_TimeElapsed->Text = String::Format("Tempo de execução da CPU:\n{0} milisegundos", duration_time.count());

			pb_image_saida->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void botao_Negativo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pb_image_entrada->Image != nullptr) {

			Process^ currentProcess = Process::GetCurrentProcess();
			TimeSpan startCpuTime = currentProcess->UserProcessorTime;
			auto start_time = std::chrono::high_resolution_clock::now();
		
			Bitmap^ bmp = dynamic_cast<Bitmap^>(pb_image_entrada->Image->Clone());

			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {
					Color pixelColor = bmp->GetPixel(x, y);
					Color newColor = Color::FromArgb(pixelColor.A, 255 - pixelColor.R, 255 - pixelColor.G, 255 - pixelColor.B);
					bmp->SetPixel(x, y, newColor);
				}
			}
			auto stop_time = std::chrono::high_resolution_clock::now();

			auto duration_time = std::chrono::duration_cast<std::chrono::milliseconds>(stop_time - start_time);

			lbl_TimeElapsed->Text = String::Format("Tempo de execução da CPU:\n{0} milisegundos", duration_time.count());

			pb_image_saida->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	

	}

	private: System::Void botao_filtroVermelho_Click(System::Object^ sender, System::EventArgs^ e) {

		if (pb_image_entrada->Image != nullptr) {
			Process^ currentProcess = Process::GetCurrentProcess();
			auto start_time = std::chrono::high_resolution_clock::now();

			Bitmap^ bmp = dynamic_cast<Bitmap^>(pb_image_entrada->Image->Clone());
			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {
					Color pixelColor = bmp->GetPixel(x, y);
					if (!(pixelColor.R >= 128 && pixelColor.G <= 127 && pixelColor.B <= 127)) {
						// Converte para escala de cinza
						unsigned char grey = pixelColor.R * 0.2126 + pixelColor.G * 0.7152 + pixelColor.B * 0.0722;
						Color newColor = Color::FromArgb(pixelColor.A, grey, grey, grey);
						bmp->SetPixel(x, y, newColor);
					}
				}
			}
			auto stop_time = std::chrono::high_resolution_clock::now();

			auto duration_time = std::chrono::duration_cast<std::chrono::milliseconds>(stop_time - start_time);

			lbl_TimeElapsed->Text = String::Format("Tempo de execução da CPU:\n{0} milisegundos", duration_time.count());

			pb_image_saida->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}


};
}
