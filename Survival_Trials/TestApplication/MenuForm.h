#pragma once
#include "SettingsForm.h"
#include "GameForm.h"

namespace TestApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^ name_game;






	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->play = (gcnew System::Windows::Forms::Button());
			this->name_game = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->exit->AutoSize = true;
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
			this->exit->Text = L"ВЫХОД ИЗ ИГРЫ";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click);
			// 
			// settings
			// 
			this->settings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->settings->AutoSize = true;
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
			this->settings->Text = L"НАСТРОЙКИ";
			this->settings->UseVisualStyleBackColor = false;
			this->settings->Click += gcnew System::EventHandler(this, &MenuForm::settings_Click);
			// 
			// play
			// 
			this->play->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->play->AutoSize = true;
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
			this->play->Text = L"ИГРАТЬ";
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &MenuForm::play_Click);
			// 
			// name_game
			// 
			this->name_game->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->name_game->AutoSize = true;
			this->name_game->BackColor = System::Drawing::Color::Transparent;
			this->name_game->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_game->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->name_game->Location = System::Drawing::Point(122, 9);
			this->name_game->Name = L"name_game";
			this->name_game->Size = System::Drawing::Size(1024, 162);
			this->name_game->TabIndex = 3;
			this->name_game->Text = L"ЛЕГЕНДЫ ЗАБЫТЫХ МИРОВ:\r\nИСПЫТАНИЯ НА ВЫЖИВАНИЕ\r\n";
			this->name_game->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->name_game->Click += gcnew System::EventHandler(this, &MenuForm::label1_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 672);
			this->Controls->Add(this->name_game);
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
		SettingsForm^ myForm = gcnew SettingsForm(); 
		myForm->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void play_Click(System::Object^ sender, System::EventArgs^ e) {
		GameForm^ myForm = gcnew GameForm();
		myForm->Show();
	}
};
}
