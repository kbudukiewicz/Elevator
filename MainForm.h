#pragma once
#include "Elevator.h"
using namespace System::Threading;

namespace ElevatorSimulation {

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
		static Elevator elevator;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Timer^  timer2;

			 int lastLevel = 0;
	public:MainForm(void)
	{
		InitializeComponent();
		this->pictureBox1->Location = System::Drawing::Point(this->pictureBox1->Location.X, 600);
		Elevator ^ objclass = gcnew Elevator;
		ThreadStart^ mThread = gcnew ThreadStart(&Elevator::Execute);
		Thread^ newThread = gcnew Thread(mThread);
		newThread->Start();

	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::TextBox^  orderTextBox_0;

	private: System::Windows::Forms::Button^  order_button_0;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  orderTextBox_1;

	private: System::Windows::Forms::Button^  order_button_1;
	private: System::Windows::Forms::Button^  order_button_2;
	private: System::Windows::Forms::Button^  order_button_3;
	private: System::Windows::Forms::Button^  order_button_4;
	private: System::Windows::Forms::Button^  order_button_5;
	private: System::Windows::Forms::Button^  order_button_6;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  orderTextBox_2;

	private: System::Windows::Forms::TextBox^  orderTextBox_3;

	private: System::Windows::Forms::TextBox^  orderTextBox_4;

	private: System::Windows::Forms::TextBox^  orderTextBox_5;

	private: System::Windows::Forms::TextBox^  orderTextBox_6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->orderTextBox_0 = (gcnew System::Windows::Forms::TextBox());
			this->order_button_0 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->orderTextBox_1 = (gcnew System::Windows::Forms::TextBox());
			this->order_button_1 = (gcnew System::Windows::Forms::Button());
			this->order_button_2 = (gcnew System::Windows::Forms::Button());
			this->order_button_3 = (gcnew System::Windows::Forms::Button());
			this->order_button_4 = (gcnew System::Windows::Forms::Button());
			this->order_button_5 = (gcnew System::Windows::Forms::Button());
			this->order_button_6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->orderTextBox_2 = (gcnew System::Windows::Forms::TextBox());
			this->orderTextBox_3 = (gcnew System::Windows::Forms::TextBox());
			this->orderTextBox_4 = (gcnew System::Windows::Forms::TextBox());
			this->orderTextBox_5 = (gcnew System::Windows::Forms::TextBox());
			this->orderTextBox_6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(333, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 900);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// orderTextBox_0
			// 
			this->orderTextBox_0->Location = System::Drawing::Point(389, 771);
			this->orderTextBox_0->Name = L"orderTextBox_0";
			this->orderTextBox_0->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_0->TabIndex = 7;
			// 
			// order_button_0
			// 
			this->order_button_0->Location = System::Drawing::Point(426, 771);
			this->order_button_0->Name = L"order_button_0";
			this->order_button_0->Size = System::Drawing::Size(75, 23);
			this->order_button_0->TabIndex = 8;
			this->order_button_0->Text = L"Order";
			this->order_button_0->UseVisualStyleBackColor = true;
			this->order_button_0->Click += gcnew System::EventHandler(this, &MainForm::order_button_0_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(390, 746);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Destination level";
			// 
			// orderTextBox_1
			// 
			this->orderTextBox_1->Location = System::Drawing::Point(389, 646);
			this->orderTextBox_1->Name = L"orderTextBox_1";
			this->orderTextBox_1->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_1->TabIndex = 11;
			// 
			// order_button_1
			// 
			this->order_button_1->Location = System::Drawing::Point(426, 646);
			this->order_button_1->Name = L"order_button_1";
			this->order_button_1->Size = System::Drawing::Size(75, 23);
			this->order_button_1->TabIndex = 12;
			this->order_button_1->Text = L"Order";
			this->order_button_1->UseVisualStyleBackColor = true;
			this->order_button_1->Click += gcnew System::EventHandler(this, &MainForm::order_button_1_Click);
			// 
			// order_button_2
			// 
			this->order_button_2->Location = System::Drawing::Point(427, 520);
			this->order_button_2->Name = L"order_button_2";
			this->order_button_2->Size = System::Drawing::Size(75, 23);
			this->order_button_2->TabIndex = 13;
			this->order_button_2->Text = L"Order";
			this->order_button_2->UseVisualStyleBackColor = true;
			this->order_button_2->Click += gcnew System::EventHandler(this, &MainForm::order_button_2_Click);
			// 
			// order_button_3
			// 
			this->order_button_3->Location = System::Drawing::Point(422, 396);
			this->order_button_3->Name = L"order_button_3";
			this->order_button_3->Size = System::Drawing::Size(75, 23);
			this->order_button_3->TabIndex = 14;
			this->order_button_3->Text = L"Order";
			this->order_button_3->UseVisualStyleBackColor = true;
			this->order_button_3->Click += gcnew System::EventHandler(this, &MainForm::order_button_3_Click);
			// 
			// order_button_4
			// 
			this->order_button_4->Location = System::Drawing::Point(426, 271);
			this->order_button_4->Name = L"order_button_4";
			this->order_button_4->Size = System::Drawing::Size(75, 23);
			this->order_button_4->TabIndex = 15;
			this->order_button_4->Text = L"Order";
			this->order_button_4->UseVisualStyleBackColor = true;
			this->order_button_4->Click += gcnew System::EventHandler(this, &MainForm::order_button_4_Click);
			// 
			// order_button_5
			// 
			this->order_button_5->Location = System::Drawing::Point(426, 146);
			this->order_button_5->Name = L"order_button_5";
			this->order_button_5->Size = System::Drawing::Size(75, 23);
			this->order_button_5->TabIndex = 16;
			this->order_button_5->Text = L"Order";
			this->order_button_5->UseVisualStyleBackColor = true;
			this->order_button_5->Click += gcnew System::EventHandler(this, &MainForm::order_button_5_Click);
			// 
			// order_button_6
			// 
			this->order_button_6->Location = System::Drawing::Point(426, 21);
			this->order_button_6->Name = L"order_button_6";
			this->order_button_6->Size = System::Drawing::Size(75, 23);
			this->order_button_6->TabIndex = 17;
			this->order_button_6->Text = L"Order";
			this->order_button_6->UseVisualStyleBackColor = true;
			this->order_button_6->Click += gcnew System::EventHandler(this, &MainForm::order_button_6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(390, 621);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Destination level";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(390, 500);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Destination level";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(390, 376);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Destination level";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(385, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Destination level";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(386, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Destination level";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(385, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Destination level";
			// 
			// orderTextBox_2
			// 
			this->orderTextBox_2->Location = System::Drawing::Point(393, 521);
			this->orderTextBox_2->Name = L"orderTextBox_2";
			this->orderTextBox_2->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_2->TabIndex = 24;
			// 
			// orderTextBox_3
			// 
			this->orderTextBox_3->Location = System::Drawing::Point(389, 396);
			this->orderTextBox_3->Name = L"orderTextBox_3";
			this->orderTextBox_3->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_3->TabIndex = 25;
			// 
			// orderTextBox_4
			// 
			this->orderTextBox_4->Location = System::Drawing::Point(389, 271);
			this->orderTextBox_4->Name = L"orderTextBox_4";
			this->orderTextBox_4->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_4->TabIndex = 26;
			// 
			// orderTextBox_5
			// 
			this->orderTextBox_5->Location = System::Drawing::Point(389, 147);
			this->orderTextBox_5->Name = L"orderTextBox_5";
			this->orderTextBox_5->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_5->TabIndex = 27;
			// 
			// orderTextBox_6
			// 
			this->orderTextBox_6->Location = System::Drawing::Point(389, 21);
			this->orderTextBox_6->Name = L"orderTextBox_6";
			this->orderTextBox_6->Size = System::Drawing::Size(27, 22);
			this->orderTextBox_6->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(81, 249);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 17);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Destination level";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(199, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 30;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(94, 276);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 17);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Current level";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(199, 274);
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 32;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(71, 302);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 17);
			this->label10->TabIndex = 33;
			this->label10->Text = L"People in elevator";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(199, 302);
			this->textBox4->Name = L"textBox4";
			this->textBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 34;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(83, 333);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 17);
			this->label11->TabIndex = 35;
			this->label11->Text = L"People waiting";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox5->Location = System::Drawing::Point(199, 330);
			this->textBox5->Name = L"textBox5";
			this->textBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 36;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 358);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(173, 17);
			this->label12->TabIndex = 37;
			this->label12->Text = L"Peoples in elevator weight";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox6->Location = System::Drawing::Point(199, 358);
			this->textBox6->Name = L"textBox6";
			this->textBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 38;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(526, 953);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->orderTextBox_6);
			this->Controls->Add(this->orderTextBox_5);
			this->Controls->Add(this->orderTextBox_4);
			this->Controls->Add(this->orderTextBox_3);
			this->Controls->Add(this->orderTextBox_2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->order_button_6);
			this->Controls->Add(this->order_button_5);
			this->Controls->Add(this->order_button_4);
			this->Controls->Add(this->order_button_3);
			this->Controls->Add(this->order_button_2);
			this->Controls->Add(this->order_button_1);
			this->Controls->Add(this->orderTextBox_1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->order_button_0);
			this->Controls->Add(this->orderTextBox_0);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (elevator.currentDirection == -1)
		{
			pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y + 10);
		}
		else if (elevator.currentDirection == 1)
		{
			pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y - 10);
		}
		if ((600 - pictureBox1->Location.Y) % 100 == 0)
		{
			elevator.currentLevel = (600 - pictureBox1->Location.Y) / 100;
			if (elevator.currentLevel == elevator.destinationLevel)
				elevator.currentDirection = 0;
		}

		if (lastLevel != elevator.currentLevel)
		{
			elevator.HandleLevel();
		}

		lastLevel = elevator.currentLevel;

		textBox2->Text = gcnew String(elevator.destinationLevel.ToString());
		textBox3->Text = gcnew String(elevator.currentLevel.ToString());
		textBox4->Text = gcnew String(elevator.peopleInElevator->size().ToString());
		textBox5->Text = gcnew String(elevator.queueOrders->size().ToString());
		textBox6->Text = gcnew String(elevator.currentLift.ToString());
	}

	private:void MarshalString(String ^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void order_button_0_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_0->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 0, std::atoi(temp.c_str()));
	}

	private: System::Void order_button_1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_1->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 1, std::atoi(temp.c_str()));
	}
	private: System::Void order_button_2_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_2->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 2, std::atoi(temp.c_str()));
	}

	private: System::Void order_button_3_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_3->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 3, std::atoi(temp.c_str()));
	}
	private: System::Void order_button_4_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_4->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 4, std::atoi(temp.c_str()));
	}
	private: System::Void order_button_5_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_5->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 5, std::atoi(temp.c_str()));
	}
	private: System::Void order_button_6_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string temp;
		MarshalString(orderTextBox_6->Text, temp);
		elevator.OrderElevator(elevator.TotalNumberOfOrders++, 6, std::atoi(temp.c_str()));
	}
	};
}
