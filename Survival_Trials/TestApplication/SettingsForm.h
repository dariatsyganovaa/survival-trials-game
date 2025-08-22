#pragma once

namespace TestApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit_settings;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->exit_settings = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit_settings
			// 
			this->exit_settings->BackColor = System::Drawing::Color::Transparent;
			this->exit_settings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exit_settings->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exit_settings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_settings->ForeColor = System::Drawing::Color::Black;
			this->exit_settings->Location = System::Drawing::Point(822, 12);
			this->exit_settings->Name = L"exit_settings";
			this->exit_settings->Size = System::Drawing::Size(41, 36);
			this->exit_settings->TabIndex = 0;
			this->exit_settings->Text = L"’";
			this->exit_settings->UseVisualStyleBackColor = true;
			this->exit_settings->Click += gcnew System::EventHandler(this, &SettingsForm::exit_settings_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(875, 595);
			this->ControlBox = false;
			this->Controls->Add(this->exit_settings);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SettingsForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SettingsForm";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SettingsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exit_settings_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
