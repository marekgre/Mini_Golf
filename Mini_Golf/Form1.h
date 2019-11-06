#pragma once

#include"Plansza.h"
#include"Pileczka.h"
#include"Element.h"
#include"Dolek.h"
#include"PrzeszkodaProsta.h"
#include"PrzeszkodaPodluzna.h"
#include"Wynik.h"

namespace Mini_Golf {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	



	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		

      public:
	Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
	private: System::ComponentModel::IContainer^  components;
    private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Timer^  timer2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape6;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape5;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	
			 // zmienne dodane recznie
	private: Plansza *plansza; 
	private: Pileczka* pilka; 
    private: Dolek *dolek;  
	private: int interwal; 
	private: int runda;
	private: int uderzenia;
	private: int punkty;
    private: PrzeszkodaProsta *prosta1; 
	private: PrzeszkodaProsta *prosta2;
	private: PrzeszkodaProsta *prosta3;
	private: PrzeszkodaPodluzna *podluzna1; 
	private: PrzeszkodaPodluzna *podluzna2; 
	private: PrzeszkodaPodluzna *podluzna3; 
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: Wynik <1, int> *wynik;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->ovalShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(340, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"USTAW BIE¯¥C¥ RUNDÊ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// ovalShape1
			// 
			this->ovalShape1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ovalShape1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ovalShape1.BackgroundImage")));
			this->ovalShape1->Location = System::Drawing::Point(24, 91);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(10, 10);
			this->ovalShape1->Click += gcnew System::EventHandler(this, &Form1::ovalShape1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(340, 197);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 48);
			this->button2->TabIndex = 2;
			this->button2->Text = L"START";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(340, 251);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"PAUZA";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->shapeContainer2);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 206);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(8) {this->rectangleShape6, 
				this->rectangleShape5, this->rectangleShape4, this->rectangleShape3, this->rectangleShape2, this->ovalShape2, this->rectangleShape1, 
				this->ovalShape1});
			this->shapeContainer2->Size = System::Drawing::Size(246, 202);
			this->shapeContainer2->TabIndex = 0;
			this->shapeContainer2->TabStop = false;
			// 
			// rectangleShape6
			// 
			this->rectangleShape6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rectangleShape6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape6.BackgroundImage")));
			this->rectangleShape6->Location = System::Drawing::Point(118, 139);
			this->rectangleShape6->Name = L"rectangleShape6";
			this->rectangleShape6->Size = System::Drawing::Size(49, 11);
			this->rectangleShape6->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// rectangleShape5
			// 
			this->rectangleShape5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rectangleShape5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape5.BackgroundImage")));
			this->rectangleShape5->Location = System::Drawing::Point(118, 117);
			this->rectangleShape5->Name = L"rectangleShape5";
			this->rectangleShape5->Size = System::Drawing::Size(49, 11);
			this->rectangleShape5->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rectangleShape4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape4.BackgroundImage")));
			this->rectangleShape4->Location = System::Drawing::Point(118, 96);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(49, 11);
			this->rectangleShape4->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rectangleShape3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape3.BackgroundImage")));
			this->rectangleShape3->Location = System::Drawing::Point(168, 69);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(10, 10);
			this->rectangleShape3->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rectangleShape2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape2.BackgroundImage")));
			this->rectangleShape2->Location = System::Drawing::Point(168, 46);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(10, 10);
			this->rectangleShape2->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// ovalShape2
			// 
			this->ovalShape2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ovalShape2.BackgroundImage")));
			this->ovalShape2->Location = System::Drawing::Point(198, 91);
			this->ovalShape2->Name = L"ovalShape2";
			this->ovalShape2->Size = System::Drawing::Size(20, 20);
			this->ovalShape2->Click += gcnew System::EventHandler(this, &Form1::ovalShape2_Click);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rectangleShape1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rectangleShape1.BackgroundImage")));
			this->rectangleShape1->Location = System::Drawing::Point(168, 22);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(10, 10);
			this->rectangleShape1->Click += gcnew System::EventHandler(this, &Form1::rectangleShape1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->trackBar1->Location = System::Drawing::Point(-2, 387);
			this->trackBar1->Maximum = 5;
			this->trackBar1->Minimum = -5;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->RightToLeftLayout = true;
			this->trackBar1->Size = System::Drawing::Size(275, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(279, 281);
			this->trackBar2->Maximum = 5;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->Size = System::Drawing::Size(45, 117);
			this->trackBar2->TabIndex = 6;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(269, 15);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 122);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(184, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(118, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"RUNDA:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(184, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(184, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(3, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DOSTÊPNE UDZERZENIA:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(68, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ILOŒÆ TRAFIEÑ:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wyniki";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(340, 305);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 48);
			this->button4->TabIndex = 8;
			this->button4->Text = L"WZNÓW";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(340, 359);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 48);
			this->button5->TabIndex = 9;
			this->button5->Text = L"ZAPISZ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 432);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Form1";
			this->Text = L"Mini Golf 0.4";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/// INICJOWANIE FORMATKI
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

             // inicjacja i ustawienie tablicy oraz panelu planszy
		    this->plansza = new Plansza(260,380); 
			this->plansza->UzupelnijSpac();   // wype³nia tablice spacjami
			plansza->UzupelnijKraw();   // uzupe³nia krawedzie literami p,l,g,d
			
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Size = System::Drawing::Size(plansza->ZwrocSzerokosc()+10, plansza->ZwrocDlugosc()+10); // zwiekszone panelu o szerokosc ksztaltu pilki


			// inicjacja i ustawienie pileczki oraz ksztaltu pilki
			this->pilka = new Pileczka(10,10,'o','G','P',2,0); // stworzenie obiektu pilka ze znakiem "o" -  po³ozeniu 1-1, kierunku - prawo, góra, prêdkoœciach pion i poziom ustawionych na 1
			this->pilka->UstalPolozenie(130,350);
			this->pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy w planszy char znak "o" w miejsce x i y w pilce. dlaczego przez wskaŸnik na plansze? - inaczej nie wchodzi......
			this->ovalShape1->Location = System::Drawing::Point(130, 350); // ustawienie pilki na srodku planszy (wczesniej bylo:(plansza->ZwrocSzerokosc()/2, plansza->ZwrocDlugosc()/2)

			// inicjacja i ustawienie dolka oraz ksztaltu dolka

			this->dolek = new Dolek();
			dolek->UstalPolozenie(125,20);
			dolek->UstalRozmiar(12); // wielkosc dolka
			this->ovalShape2->Location = System::Drawing::Point(125, 20); //rysowanie
			   

			// inicjacja obiektow uzywanych w programie
						 
			 this->prosta1 = new PrzeszkodaProsta(); 
			 this->prosta2 = new PrzeszkodaProsta(); 
			 this->prosta3 = new PrzeszkodaProsta(); 
			 this->podluzna1 = new PrzeszkodaPodluzna();  
			 this->podluzna2 = new PrzeszkodaPodluzna();
			 this->podluzna3 = new PrzeszkodaPodluzna();

			 this->wynik = new Wynik<1, int> ;
			 
			 // zmienne pomocnicze
			interwal =-50; // 50 pierwszych 100 ruchow bez zwalniania
			runda = 1; //na poczatku 1 runda
			uderzenia = 3; // 3 uderzenia na runde
			punkty = 0;
			this->wynik->punkty=0;

			// wszystkie przeszkody na pocz¹tku nie widoczne
			this->rectangleShape1->Visible = false;
			this->rectangleShape2->Visible = false;
			this->rectangleShape3->Visible = false;
			this->rectangleShape4->Visible = false;
			this->rectangleShape5->Visible = false;
			this->rectangleShape6->Visible = false;

			//na poczatku dostepny tylko 1 przycisk, reszta zablokowana

			this->button2->Enabled= false; //start
			this->button3->Enabled= false; //pauza
			this->button4->Enabled= false; //wznow
			this->button5->Enabled= false; //zapisz

			}

///////////////////////przycisk USTAW BIEZACA RUNDE////////////////////////////////

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

this->button1->Enabled= false; //biezaca runda juz nie do nacisniecia teraz


 if(runda==1)
{

interwal =-50; // 50 pierwszych 100 ruchow bez zwalniania

// reset dolka 
this->dolek = new Dolek(); 
dolek->UstalPolozenie(125,20);
dolek->UstalRozmiar(12); // wielkosc dolka
this->ovalShape2->Location = System::Drawing::Point(125, 20); //rysowanie

// ustawienia na tablicy wynikow
this->label5->Text = System::Convert::ToString(uderzenia); // dostepne uderzenia - konwerska inta na string
this->label7->Text = System::Convert::ToString(runda); // runda - konwerska inta na string

// ustawienia poczatkowe trackabarow

this->trackBar1->Value=0;
this->trackBar2->Value=0;

// czyszczenie planszy
plansza->UzupelnijSpac();   // wype³nia tablice spacjami
plansza->UzupelnijKraw();   // uzupe³nia krawedzie literami p,l,g,d

// ustawienie pilki
this->pilka = new Pileczka(10,10,'o','G','P',2,0);
this->pilka->UstalPolozenie(130,350);
this->pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy w planszy char znak "o" w miejsce x i y w pilce
this->ovalShape1->Location = System::Drawing::Point(130, 350); // ustawienie pilki na srodku planszy 

// ustawienie dostepnosci guzikow start i zapisz 


this->button2->Enabled= true; //start
this->button5->Enabled= true; //zapisz


// ta runda jest bez przeszkod - nic nie wstawiamy


}






 if(runda==2)
{
interwal =-50; // 50 pierwszych 100 ruchow bez zwalniania

// reset dolka 
this->dolek = new Dolek(); 
dolek->UstalPolozenie(125,20);
dolek->UstalRozmiar(12); // wielkosc dolka
this->ovalShape2->Location = System::Drawing::Point(125, 20); //rysowanie


// ustawienia na tablicy wynikow
this->label5->Text = System::Convert::ToString(uderzenia); // dostepne uderzenia - konwerska inta na string
this->label7->Text = System::Convert::ToString(runda); // runda - konwerska inta na string

// ustawienia poczatkowe trackabarow

this->trackBar1->Value=0;
this->trackBar2->Value=0;

// czyszczenie planszy
plansza->UzupelnijSpac();   // wype³nia tablice spacjami
plansza->UzupelnijKraw();   // uzupe³nia krawedzie literami p,l,g,d

// ustawienie pilki
this->pilka = new Pileczka(10,10,'o','G','P',2,0);
this->pilka->UstalPolozenie(130,350);
this->pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy w planszy char znak "o" w miejsce x i y w pilce
this->ovalShape1->Location = System::Drawing::Point(130, 350); // ustawienie pilki na srodku planszy 

// ustawienie dostepnosci guzikow start i zapisz 

this->button2->Enabled= true; //start
this->button5->Enabled= true; //zapisz

// przeszkoda: 1 prosta:

prosta1->UstalPolozenie(100,160);
prosta1->UstalRozmiar(60);
prosta1->WstawNaPlansze(*plansza);
this->rectangleShape1->Visible=true;
this->rectangleShape1->Location = System::Drawing::Point(110, 170); //rysowanie o rozmiar pileczki dalej w prawo i w dol
this->rectangleShape1->Size = System::Drawing::Size(50,50); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke)


}
	

 if(runda==3)
{
interwal =-50; // 50 pierwszych 100 ruchow bez zwalniania

// reset dolka 
this->dolek = new Dolek(); 
dolek->UstalPolozenie(125,20);
dolek->UstalRozmiar(12); // wielkosc dolka
this->ovalShape2->Location = System::Drawing::Point(125, 20); //rysowanie


// ustawienia na tablicy wynikow
this->label5->Text = System::Convert::ToString(uderzenia); // dostepne uderzenia - konwersja inta na string
this->label7->Text = System::Convert::ToString(runda); // runda - konwerska inta na string

// ustawienia poczatkowe trackabarow

this->trackBar1->Value=0;
this->trackBar2->Value=0;

// czyszczenie planszy
plansza->UzupelnijSpac();   // wype³nia tablice spacjami
plansza->UzupelnijKraw();   // uzupe³nia krawedzie literami p,l,g,d

// ustawienie pilki
this->pilka = new Pileczka(10,10,'o','G','P',2,0);
this->pilka->UstalPolozenie(130,350);
this->pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy w planszy char znak "o" w miejsce x i y w pilce
this->ovalShape1->Location = System::Drawing::Point(130, 350); // ustawienie pilki na srodku planszy 

// ustawienie dostepnosci guzikow start i zapisz 

this->button2->Enabled= true; //start
this->button5->Enabled= true; //zapisz

// przeszkoda: 1 prosta:

//prosta1->UstalPolozenie(100,70);
//prosta1->UstalRozmiar(60);
//prosta1->WstawNaPlansze(*plansza);
this->rectangleShape1->Visible=false;
//this->rectangleShape1->Location = System::Drawing::Point(110, 80); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
//this->rectangleShape1->Size = System::Drawing::Size(50,50); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke)

// przeszkoda: 2 podluzne:

podluzna1->UstalPolozenie(0,250);
podluzna1->UstalRozmiar(20,50);
podluzna1->WstawNaPlansze(*plansza);
this->rectangleShape4->Visible=true;
this->rectangleShape4->Location = System::Drawing::Point(0, 260); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
this->rectangleShape4->Size = System::Drawing::Size(60,10); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke) i odwrotnie

podluzna2->UstalPolozenie(90,250);
podluzna2->UstalRozmiar(20,290);
podluzna2->WstawNaPlansze(*plansza);
this->rectangleShape5->Visible=true;
this->rectangleShape5->Location = System::Drawing::Point(100, 260); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
this->rectangleShape5->Size = System::Drawing::Size(210,10); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke) i odwrotnie



}

 if(runda==4)
{
interwal =-50; // 50 pierwszych 100 ruchow bez zwalniania

// reset dolka 
this->dolek = new Dolek(); 
dolek->UstalPolozenie(125,20);
dolek->UstalRozmiar(12); // wielkosc dolka
this->ovalShape2->Location = System::Drawing::Point(125, 20); //rysowanie


// ustawienia na tablicy wynikow
this->label5->Text = System::Convert::ToString(uderzenia); // dostepne uderzenia - konwersja inta na string
this->label7->Text = System::Convert::ToString(runda); // runda - konwerska inta na string

// ustawienia poczatkowe trackabarow

this->trackBar1->Value=0;
this->trackBar2->Value=0;

// czyszczenie planszy
plansza->UzupelnijSpac();   // wype³nia tablice spacjami
plansza->UzupelnijKraw();   // uzupe³nia krawedzie literami p,l,g,d

// ustawienie pilki
this->pilka = new Pileczka(10,10,'o','G','P',2,0);
this->pilka->UstalPolozenie(130,350);
this->pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy w planszy char znak "o" w miejsce x i y w pilce
this->ovalShape1->Location = System::Drawing::Point(130, 350); // ustawienie pilki na srodku planszy 

// ustawienie dostepnosci guzikow start i zapisz 

this->button2->Enabled= true; //start
this->button5->Enabled= true; //zapisz

// przeszkoda: 1 prosta:

prosta1->UstalPolozenie(100,70);
prosta1->UstalRozmiar(60);
prosta1->WstawNaPlansze(*plansza);
this->rectangleShape1->Visible=true;
this->rectangleShape1->Location = System::Drawing::Point(110, 80); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
this->rectangleShape1->Size = System::Drawing::Size(50,50); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke)

// przeszkoda: 1 podluzna:

this->rectangleShape5->Visible=false;

podluzna1->UstalPolozenie(0,200);
podluzna1->UstalRozmiar(20,200);
podluzna1->WstawNaPlansze(*plansza);
this->rectangleShape4->Visible=true;
this->rectangleShape4->Location = System::Drawing::Point(0, 210); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
this->rectangleShape4->Size = System::Drawing::Size(210,10); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke) i odwrotnie



}
			
 if(runda==5)
{
interwal =-50; // 50 pierwszych 100 ruchow bez zwalniania

// reset dolka 
this->dolek = new Dolek(); 
dolek->UstalPolozenie(125,20);
dolek->UstalRozmiar(12); // wielkosc dolka
this->ovalShape2->Location = System::Drawing::Point(125, 20); //rysowanie


// ustawienia na tablicy wynikow
this->label5->Text = System::Convert::ToString(uderzenia); // dostepne uderzenia - konwersja inta na string
this->label7->Text = System::Convert::ToString(runda); // runda - konwerska inta na string

// ustawienia poczatkowe trackabarow

this->trackBar1->Value=0;
this->trackBar2->Value=0;

// czyszczenie planszy
plansza->UzupelnijSpac();   // wype³nia tablice spacjami
plansza->UzupelnijKraw();   // uzupe³nia krawedzie literami p,l,g,d

// ustawienie pilki
this->pilka = new Pileczka(10,10,'o','G','P',2,0);
this->pilka->UstalPolozenie(130,350);
this->pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy w planszy char znak "o" w miejsce x i y w pilce
this->ovalShape1->Location = System::Drawing::Point(130, 350); // ustawienie pilki na srodku planszy 

// ustawienie dostepnosci guzikow start i zapisz 

this->button2->Enabled= true; //start
this->button5->Enabled= true; //zapisz

// przeszkoda: 1 prosta:


this->rectangleShape1->Visible=false;

// przeszkoda: 2 podluzne:

podluzna1->UstalPolozenie(0,200);
podluzna1->UstalRozmiar(20,180);
podluzna1->WstawNaPlansze(*plansza);
this->rectangleShape4->Visible=true;
this->rectangleShape4->Location = System::Drawing::Point(0, 210); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
this->rectangleShape4->Size = System::Drawing::Size(190,10); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke) i odwrotnie

podluzna2->UstalPolozenie(80,100);
podluzna2->UstalRozmiar(20,180);
podluzna2->WstawNaPlansze(*plansza);
this->rectangleShape6->Visible=true;
this->rectangleShape6->Location = System::Drawing::Point(90, 110); //rysowanie o rozmiar 10 pileczki dalej w prawo i w dol
this->rectangleShape6->Size = System::Drawing::Size(190,10); // rozmiar na planszy o 10 mniejszy ( tez ze wzgledu na pileczke) i odwrotnie



}			



}

///////////////////////przycisk START
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->timer1->Interval=1;
			 this->button1->Enabled= false; //biezaca runda
			 this->timer1->Start(); // w³¹czenie timera1 - poruszanie i odbijanie pilki
			 this->timer2->Start(); // w³¹czenie timera2 - obslugadolka
			 this->button3->Enabled= true; //pauza
			 
			 
			 
		 }


///////////////////////przycisk PAUZA
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->timer1->Stop(); // WSTRZYMANIE TIMERÓW
			 this->timer2->Stop();

			 this->button2->Enabled= false; //start
			 this->button3->Enabled= false; //pauza
			 this->button4->Enabled= true; //wznow

		 }
///////////////////////przycisk wznow
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->timer1->Start(); // w³¹czenie timera1 - poruszanie i odbijanie pilki
			 this->timer2->Start(); // w³¹czenie timera2 - obslugadolka
			 this->button3->Enabled= true; //pauza
			 
		 }

///////////////////////przycisk ZAPISZ
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
             this->timer1->Stop(); // zatrzymanie timera
			 plansza->ZapiszTablice(); // zapis tablicy do pliku
			 wynik->ZapiszPunkty();

		 }




/////// trackbar poziomy///////////////////////////////////////////////////////////////////////////////////////
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

			
			int sila = trackBar2->Value; // parametr pobieraj¹cy ustawienie pionowego suwaka
			 
			 if(trackBar1->Value == 0) // trackbar dolny ustawiony na œrodek
			 {
				 pilka->ZmienSzybkoszcPoziom(0); // pilka prosto w gore

			 }			 
		    
			 if(trackBar1->Value == 1)  // o 1 w prawo
			 {

				 pilka->ZmienKierunekPoziom('P'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(1+sila); //predkosc 1 + sila

			 }		
		 
			  if(trackBar1->Value == 2)  // o 2 w prawo
			 {

				 pilka->ZmienKierunekPoziom('P'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(2+sila); //predkosc 2 + sila

			 }		

			  if(trackBar1->Value == 3)  // o 3 w prawo
			 {

				 pilka->ZmienKierunekPoziom('P'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(3+sila); //predkosc 3 + sila

			 }		

			  if(trackBar1->Value == 4)  // o 4 w prawo
			 {

				 pilka->ZmienKierunekPoziom('P'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(4+sila); //predkosc 4 + sila

			 }		

			  if(trackBar1->Value == 5)  // o 5 w prawo
			 {

				 pilka->ZmienKierunekPoziom('P'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(5+sila); //predkosc 5 + sila

			 }		

			   if(trackBar1->Value == -1)  // o 1 w lewo
			 {

				 pilka->ZmienKierunekPoziom('L'); //kierunek w lewo
				 pilka->ZmienSzybkoszcPoziom(1+sila); //predkosc 1 + sila

			 }		
		 
			  if(trackBar1->Value == -2)  // o 2 w lewo
			 {

				 pilka->ZmienKierunekPoziom('L'); //kierunek w lewo
				 pilka->ZmienSzybkoszcPoziom(2+sila); //predkosc 2 + sila

			 }		

			  if(trackBar1->Value == -3)  // o 3 w lewo
			 {

				 pilka->ZmienKierunekPoziom('P'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(3+sila); //predkosc 3 + sila

			 }		

			  if(trackBar1->Value == -4)  // o 4 w lewo
			 {

				 pilka->ZmienKierunekPoziom('L'); //kierunek w prawo
				 pilka->ZmienSzybkoszcPoziom(4+sila); //predkosc 4 + sila

			 }		

			  if(trackBar1->Value == -5)  // o 5 w lewo
			 {

				 pilka->ZmienKierunekPoziom('L'); //kierunek w lewo
				 pilka->ZmienSzybkoszcPoziom(5+sila); //predkosc 5 + sila

			 }		

	
}

/////// trackbar pionowy///////////////////////////////////////////////////////////////////////////////////////
		 
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
		
		 int sila = trackBar2->Value; //// parametr pobieraj¹cy ustawienie poziomego suwaka

		  if(trackBar1->Value == 0) // trackbar dolny ustawiony na œrodek
			 {
				 pilka->ZmienSzybkoszcPoziom(0); // pilka prosto w gore
				 pilka->ZmienSzybkoscPion(pilka->PredkoscPion()+sila);
			 }			 
		  
		  
		  else
		  {
		  pilka->ZmienSzybkoszcPoziom(pilka->PredkoscPoziom()+sila);
		  pilka->ZmienSzybkoscPion(pilka->PredkoscPion()+sila);

		  }
		 
		 
		 
}



//////////////////////////// to co siê dzieje w timer-rze - tj w odstêpach czasu siê powtarza non-stop - do chwili gdy timer nie zostanie wy³¹czony
			 ///// powtarza siê "co liczbê milisekund" okreœlonych w parametrze Intervals Timera

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		

				
/////////////////sprawdzenie czy nie ma przeszkod czyli x w tablicy///////////////////////////////

//jesli pilka chce w lewo

if(pilka->wPrawoCzywLewo()=='L')
{
	if(pilka->ZwrocPolozenieX()>10) // uwaga - taki warunek  dotyczy tylko lewej krawedzi i gornej sprawdzenie tylko o wiecej ni¿ 10 od lewej krawêdzi - zeby warunek sprawdzajacy miejsce o predkosc poziom=5 nie sprawdza³ tab[-3] - wyskakuje blad
	{	
	// sprawdzenie czy nie ma przeszkody z lewej strony

		int xx = pilka->ZwrocPolozenieX();  
		int yy = pilka->ZwrocPolozenieY(); 

	if (plansza->CzyKrawedz(xx-(pilka->PredkoscPoziom()),yy) == 'x')  // przeszoda tam gdzie znak =='x'

	{
		//jest przeszkoda z lewej
		
		pilka->ZmienKierunekPoziom('P'); // kierunek zmieniony na P

	
    }

	}

}

//jesli pilka chce w prawo

if(pilka->wPrawoCzywLewo()=='P')
{
		
	// sprawdzenie czy nie ma przeszkody z lewej strony

		int xx = pilka->ZwrocPolozenieX();  
		int yy = pilka->ZwrocPolozenieY(); 

	if (plansza->CzyKrawedz(xx+(pilka->PredkoscPoziom()),yy) == 'x')  // przeszoda tam gdzie znak =='x'

	{
		//jest przeszkoda z prawej
		
		pilka->ZmienKierunekPoziom('L'); // kierunek zmieniony na P

	
    }
		

}

//jesli pilka chce w gore

if(pilka->wGoreCzywDol()=='G')
{
	if(pilka->ZwrocPolozenieY()>10) // uwaga - taki warunek  dotyczy tylko lewej krawedzi i gornej sprawdzenie tylko o wiecej ni¿ 10 od lewej krawêdzi - zeby warunek sprawdzajacy miejsce o predkosc poziom=5 nie sprawdza³ tab[-3] - wyskakuje blad
	{	
	// sprawdzenie czy nie ma przeszkody z lewej strony

		int xx = pilka->ZwrocPolozenieX();  
		int yy = pilka->ZwrocPolozenieY(); 

	if (plansza->CzyKrawedz(xx,yy-(pilka->PredkoscPion())) == 'x')  // przeszoda tam gdzie znak =='x'

	{
		//jest przeszkoda zod gory
		
		pilka->ZmienKierunekPion('D'); // kierunek zmieniony na P

	
    }

	}

}

//jesli pilka chce w dol

if(pilka->wGoreCzywDol()=='D')
{
	if(pilka->ZwrocPolozenieY()<(plansza->ZwrocSzerokosc()-10)) // uwaga - taki warunek  dotyczy tylko lewej krawedzi i gornej sprawdzenie tylko o wiecej ni¿ 10 od lewej krawêdzi - zeby warunek sprawdzajacy miejsce o predkosc poziom=5 nie sprawdza³ tab[-3] - wyskakuje blad
	{	
	// sprawdzenie czy nie ma przeszkody z lewej strony

		int xx = pilka->ZwrocPolozenieX();  
		int yy = pilka->ZwrocPolozenieY(); 

	if (plansza->CzyKrawedz(xx,yy+(pilka->PredkoscPion())) == 'x')  // przeszoda tam gdzie znak =='x'

	{
		//jest przeszkoda zod gory
		
		pilka->ZmienKierunekPion('G'); // kierunek zmieniony na P

	    }

	}

}



//////////poruszenie na planszy i odbijanie od scian////////////////////////////////////////

////// Jeœli pilka chce w lewo///////////////////////////////////////////////////////////////////////////////////
	if(pilka->wPrawoCzywLewo()=='L')
{
		
	
	//	// sprawdzenie czy nie ma krawedzi z lewej strony

		int xx = pilka->ZwrocPolozenieX();  
		int yy = pilka->ZwrocPolozenieY(); 


	//if( (plansza-> CzyKrawedz(xx-(pilka->PredkoscPoziom()),yy)) == 'l')// o jedn¹ predkosc w poziomie w lewo- czy tam jest lewa krawedz
//*****************************************************************************
	if ((xx-pilka->PredkoscPoziom())<1)  // krawedz lewa tam gdzie xx = 1

	{
		//jest krawedz z lewej
		
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx+(pilka->PredkoscPoziom()),yy); //odbij w prawo o tyle co predkosc poziom
		pilka->ZmienKierunekPoziom('P'); // kierunek zmieniony na P
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

		
	}

	else //znaczy ze z lewej nie ma jeszcze krawedzi i pila moze isc w lewo

	{
		
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx-(pilka->PredkoscPoziom()),yy); //odbij w lewo o tyle co predkosc poziom
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

	}


	}				
////// Jeœli pilka chce w prawo/////////////////////////////////////////////////////////////////////////////

	if(pilka->wPrawoCzywLewo()=='P')
	{
		

	//	// sprawdzenie czy nie ma krawedzi z prawej strony

		int xx = pilka->ZwrocPolozenieX();  // zeby bylo bardziej przejrzyste
		int yy = pilka->ZwrocPolozenieY();  // zeby bylo bardziej przejrzyste


	//if( (plansza-> CzyKrawedz(xx+(pilka->PredkoscPoziom()),yy)) == 'p')// o jedn¹ predkosc w poziomie w prawo - czy tam jest prawa krawedz
//*****************************************************************************
	if ((xx+pilka->PredkoscPoziom())>plansza->ZwrocSzerokosc()-2)  // krawedz prawa tam gdzie xx > od szerokosci planszy

	{
		//jest krawedz z prawej

	    
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx-(pilka->PredkoscPoziom()),yy); //odbij w lewo o tyle co predkosc poziom
		pilka->ZmienKierunekPoziom('L'); // kierunek zmieniony na L
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

		
	}

	else //znaczy ze z prawej nie ma jeszcze krawedzi i pila moze isc w prawo

	{
		
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx+(pilka->PredkoscPoziom()),yy); //odbij w prawo o tyle co predkosc poziom
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

	}

	}



////// Jeœli pilka chce w gore//////////////////////////////////////////////////////////////////////////////////////////
	if(pilka->wGoreCzywDol()=='G')
	{
	

		// sprawdzenie czy nie ma krawedzi powyzej

		int xx = pilka->ZwrocPolozenieX();  // zeby bylo bardziej przejrzyste
		int yy = pilka->ZwrocPolozenieY();  // zeby bylo bardziej przejrzyste


	//	if (plansza-> CzyKrawedz(xx,yy-(pilka->PredkoscPion())) == 'g')// o jedn¹ predkosc w pionie w gore - czy tam jest gorna krawedz
//*****************************************************************************
	if ((yy-pilka->PredkoscPion())<1)  // krawedz gorna tam gdzie yy=1

	{
		//jest gorna krawedz

	    
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx,yy+(pilka->PredkoscPion())); //odbij w dol o tyle co predkosc pion
		pilka->ZmienKierunekPion('D'); // kierunek zmieniony na D
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

	//	
	}

	else //znaczy ze powyzej nie ma jeszcze krawedzi i pila moze isc w gore

	{
		
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx,yy-(pilka->PredkoscPion())); //odbij w gore o tyle co predkosc pion
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

	}

	}


////// Jeœli pilka chce w dol//////////////////////////////////////////////////////////////////////////////////////////
	if(pilka->wGoreCzywDol()=='D')
	{
	

	//	// sprawdzenie czy nie ma krawedzi ponizej

		int xx = pilka->ZwrocPolozenieX();  // zeby bylo bardziej przejrzyste
		int yy = pilka->ZwrocPolozenieY();  // zeby bylo bardziej przejrzyste


	//if(plansza-> CzyKrawedz(xx,yy+(pilka->PredkoscPion())) == 'd')// o jedn¹ predkosc w pionie w dol - czy tam jest dolna krawedz
//*****************************************************************************
	if ((yy+pilka->PredkoscPion())>plansza->ZwrocDlugosc()-2)  // krawedz dolna tam gdzie yy > od szerokosci planszy

	{
		//jest dolna krawedz

	    
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx,yy-(pilka->PredkoscPion())); //odbij w gore o tyle co predkosc pion
		pilka->ZmienKierunekPion('G'); // kierunek zmieniony na G
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

		
	}

	else //znaczy ze ponizej nie ma jeszcze krawedzi i pila moze isc w dol

	{
		
		plansza->WyczyscMiejsce(xx,yy); // czysci dotychczasowe miejsce w tablicy na planszy gdzie by³ znak pilki
		pilka->UstalPolozenie(xx,yy+(pilka->PredkoscPion())); //odbij w dol o tyle co predkosc pion
		pilka->WstawNaPlansze(*plansza);  // wstawia do tablicy znak pilki w nowym miejscu

	}

	}

	
 this->ovalShape1->Location = System::Drawing::Point(pilka->ZwrocPolozenieX(), pilka->ZwrocPolozenieY()); // ustaw zolte kolko na formatce - w miejscu o wspolrzednych pilki po ostatnim przemieszczeniu

				
 ///////////////////// cykliczne zwalnianie pilki poprzez zwalnianie predkosci timera

				   interwal++;

				 // stopien 1 zwalniania
				 
				 if (interwal>0)
				 {
				 this->timer1->Interval = interwal;  // w ka¿dej petli interval zwiêksza siê o 1
				
				 }

				 // stopien 2 zwalniania

				  if (interwal>100)
				 {
				 this->timer1->Interval = interwal;  // w ka¿dej petli interval zwiêksza siê o 1 + 2
				 interwal=interwal+2;
				 }

				   // stopien 3 zwalniania

				  if (interwal>200)
				 {
				 this->timer1->Interval = interwal; // w ka¿dej petli interval zwiêksza siê o 1 + 2 + 8
				 interwal=interwal+8;
				 }

				  // stopien 4 zwalniania
				 if (interwal>300)
				 {
				 this->timer1->Interval = interwal; // w ka¿dej petli interval zwiêksza siê o 1 + 2 + 8 + 20
				 interwal=interwal+20;
				 }

				   // stopien 5 zwalniania
				 if (interwal>400)
				 {
				 this->timer1->Interval = interwal; // w ka¿dej petli interval zwiêksza siê o 1 + 2 + 8 + 20 + 50
				 interwal=interwal+50;
				 }

				 /////////////// // zatrzymanie pilki - czyli pilka nie wpadla do dolka

				 if (interwal>500)

				 {

					 this->timer1->Stop();
					 this->timer2->Stop();
					 MessageBox::Show("Nieudane uderzenie");
					 uderzenia--; //o jedno uderzenie mniej
					 this->label5->Text = System::Convert::ToString(uderzenia); // wyswietlenie na planszy
					  
					 //reset dostepnosci guzikow
					    this->button1->Enabled= true; //runda
						this->button2->Enabled= false; //start
						this->button3->Enabled= false; //pauza
						this->button4->Enabled= false; //wznow
						this->button5->Enabled= false; //zapisz

					if(uderzenia == 0) // w tej rundzie skonczyly sie uderzenia
					{
						runda++; //kolejna runda
						uderzenia = 3; // odnownienie uderzen w kolejnej rundzie
						
						
					}






				 }



			 }





// drugi timer - uzywany do sprawdzania czy w obszarze dolka nie pojawila sie pilka
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

			 	dolek->WstawNaPlansze(*plansza);  //sprawdzanie czy w obszarze dolka nie pojawilo sie "o" jesli tak to znak dolka zmienia sie na "!"

				if (dolek->ZwrocZnak()=='!') // wpadlo do dolka!!!!
				{
					this->timer1->Stop();
					this->timer2->Stop();
					MessageBox::Show("Pi³ka wpad³a do do³ka!!");
					uderzenia= uderzenia +3; //o trzy wiecej bo nastepna runda
					runda++;
					punkty++;
					this->label4->Text = System::Convert::ToString(punkty); // wyswietlenie na planszy
					this->button1->Enabled= true; //runda
					this->button2->Enabled= false; //start
					this->button3->Enabled= false; //pauza
					this->button4->Enabled= false; //wznow
					this->button5->Enabled= false; //zapisz

				}




		 }

//............................smieci
private: System::Void ovalShape1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void rectangleShape1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ovalShape2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
//............................

private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
