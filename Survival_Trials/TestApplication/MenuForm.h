#pragma once

namespace TestApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ settings;
	private: System::Windows::Forms::Button^ play;
	private: System::Windows::Forms::Label^ label1;




	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->play = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.BackgroundImage")));
			this->exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exit->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->exit->Location = System::Drawing::Point(873, 576);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(295, 64);
			this->exit->TabIndex = 0;
			this->exit->Text = L"����� �� ����";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click);
			// 
			// settings
			// 
			this->settings->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->settings->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settings.BackgroundImage")));
			this->settings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->settings->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->settings->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->settings->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->settings->Location = System::Drawing::Point(873, 506);
			this->settings->Name = L"settings";
			this->settings->Size = System::Drawing::Size(295, 64);
			this->settings->TabIndex = 1;
			this->settings->Text = L"���������";
			this->settings->UseVisualStyleBackColor = false;
			this->settings->Click += gcnew System::EventHandler(this, &MenuForm::settings_Click);
			// 
			// play
			// 
			this->play->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play.BackgroundImage")));
			this->play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->play->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->play->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->play->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->play->Location = System::Drawing::Point(873, 436);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(295, 64);
			this->play->TabIndex = 2;
			this->play->Text = L"������";
			this->play->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Subheading", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(258, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(741, 136);
			this->label1->TabIndex = 3;
			this->label1->Text = L"������� ������� �����:\r\n��������� �� ���������\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MenuForm::label1_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 672);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->play);
			this->Controls->Add(this->settings);
			this->Controls->Add(this->exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Survival Trials";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void settings_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
