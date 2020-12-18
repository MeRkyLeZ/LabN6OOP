#pragma once
#include <cmath>
#include "Repository.h"

namespace LabN6OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Repository repos(10);	// Õğàíèëèùå îáúåêòîâ
	int R = 50;	// Ğàçìåğ ôèãóğû
	Figure* fig = 0;	// Ôèãóğà äëÿ ñîçäàíèÿ
	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüÔèãóğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíñòğóìåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàçìåğToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ïîëîæåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êğóãToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êâàäğàòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òğåóãîëüíèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óâåëè÷èòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óìåíüøèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ââåğõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âíèçToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âëåâîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âïğàâîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blueToolStripMenuItem;






	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñîçäàòüÔèãóğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğóãToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êâàäğàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òğåóãîëüíèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíñòğóìåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàçìåğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óâåëè÷èòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óìåíüøèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîëîæåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââåğõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âíèçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âëåâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âïğàâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1240, 642);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîçäàòüÔèãóğóToolStripMenuItem,
					this->èíñòğóìåíòûToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1264, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñîçäàòüÔèãóğóToolStripMenuItem
			// 
			this->ñîçäàòüÔèãóğóToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->êğóãToolStripMenuItem,
					this->êâàäğàòToolStripMenuItem, this->òğåóãîëüíèêToolStripMenuItem
			});
			this->ñîçäàòüÔèãóğóToolStripMenuItem->Name = L"ñîçäàòüÔèãóğóToolStripMenuItem";
			this->ñîçäàòüÔèãóğóToolStripMenuItem->Size = System::Drawing::Size(105, 20);
			this->ñîçäàòüÔèãóğóToolStripMenuItem->Text = L"Ñîçäàòü ôèãóğó";
			// 
			// êğóãToolStripMenuItem
			// 
			this->êğóãToolStripMenuItem->Name = L"êğóãToolStripMenuItem";
			this->êğóãToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->êğóãToolStripMenuItem->Text = L"Êğóã";
			this->êğóãToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êğóãToolStripMenuItem_Click);
			// 
			// êâàäğàòToolStripMenuItem
			// 
			this->êâàäğàòToolStripMenuItem->Name = L"êâàäğàòToolStripMenuItem";
			this->êâàäğàòToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->êâàäğàòToolStripMenuItem->Text = L"Êâàäğàò";
			this->êâàäğàòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êâàäğàòToolStripMenuItem_Click);
			// 
			// òğåóãîëüíèêToolStripMenuItem
			// 
			this->òğåóãîëüíèêToolStripMenuItem->Name = L"òğåóãîëüíèêToolStripMenuItem";
			this->òğåóãîëüíèêToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->òğåóãîëüíèêToolStripMenuItem->Text = L"Òğåóãîëüíèê";
			this->òğåóãîëüíèêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òğåóãîëüíèêToolStripMenuItem_Click);
			// 
			// èíñòğóìåíòûToolStripMenuItem
			// 
			this->èíñòğóìåíòûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ğàçìåğToolStripMenuItem,
					this->öâåòToolStripMenuItem, this->ïîëîæåíèåToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->èíñòğóìåíòûToolStripMenuItem->Name = L"èíñòğóìåíòûToolStripMenuItem";
			this->èíñòğóìåíòûToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->èíñòğóìåíòûToolStripMenuItem->Text = L"Èçìåíèòü";
			// 
			// ğàçìåğToolStripMenuItem
			// 
			this->ğàçìåğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->óâåëè÷èòüToolStripMenuItem,
					this->óìåíüøèòüToolStripMenuItem
			});
			this->ğàçìåğToolStripMenuItem->Name = L"ğàçìåğToolStripMenuItem";
			this->ğàçìåğToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ğàçìåğToolStripMenuItem->Text = L"Ğàçìåğ";
			// 
			// óâåëè÷èòüToolStripMenuItem
			// 
			this->óâåëè÷èòüToolStripMenuItem->Name = L"óâåëè÷èòüToolStripMenuItem";
			this->óâåëè÷èòüToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->óâåëè÷èòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Up));
			this->óâåëè÷èòüToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->óâåëè÷èòüToolStripMenuItem->Text = L"Óâåëè÷èòü";
			this->óâåëè÷èòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óâåëè÷èòüToolStripMenuItem_Click);
			// 
			// óìåíüøèòüToolStripMenuItem
			// 
			this->óìåíüøèòüToolStripMenuItem->Name = L"óìåíüøèòüToolStripMenuItem";
			this->óìåíüøèòüToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->óìåíüøèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Down));
			this->óìåíüøèòüToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->óìåíüøèòüToolStripMenuItem->Text = L"Óìåíüøèòü";
			this->óìåíüøèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óìåíüøèòüToolStripMenuItem_Click);
			// 
			// öâåòToolStripMenuItem
			// 
			this->öâåòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->blackToolStripMenuItem,
					this->redToolStripMenuItem, this->greenToolStripMenuItem, this->blueToolStripMenuItem
			});
			this->öâåòToolStripMenuItem->Name = L"öâåòToolStripMenuItem";
			this->öâåòToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->öâåòToolStripMenuItem->Text = L"Öâåò";
			// 
			// blackToolStripMenuItem
			// 
			this->blackToolStripMenuItem->Name = L"blackToolStripMenuItem";
			this->blackToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->blackToolStripMenuItem->Text = L"Black";
			this->blackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::blackToolStripMenuItem_Click);
			// 
			// redToolStripMenuItem
			// 
			this->redToolStripMenuItem->Name = L"redToolStripMenuItem";
			this->redToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->redToolStripMenuItem->Text = L"Red";
			this->redToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redToolStripMenuItem_Click);
			// 
			// greenToolStripMenuItem
			// 
			this->greenToolStripMenuItem->Name = L"greenToolStripMenuItem";
			this->greenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->greenToolStripMenuItem->Text = L"Green";
			this->greenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::greenToolStripMenuItem_Click);
			// 
			// blueToolStripMenuItem
			// 
			this->blueToolStripMenuItem->Name = L"blueToolStripMenuItem";
			this->blueToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->blueToolStripMenuItem->Text = L"Blue";
			this->blueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::blueToolStripMenuItem_Click);
			// 
			// ïîëîæåíèåToolStripMenuItem
			// 
			this->ïîëîæåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ââåğõToolStripMenuItem,
					this->âíèçToolStripMenuItem, this->âëåâîToolStripMenuItem, this->âïğàâîToolStripMenuItem
			});
			this->ïîëîæåíèåToolStripMenuItem->Name = L"ïîëîæåíèåToolStripMenuItem";
			this->ïîëîæåíèåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîëîæåíèåToolStripMenuItem->Text = L"Ïîëîæåíèå";
			// 
			// ââåğõToolStripMenuItem
			// 
			this->ââåğõToolStripMenuItem->Name = L"ââåğõToolStripMenuItem";
			this->ââåğõToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad8));
			this->ââåğõToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->ââåğõToolStripMenuItem->Text = L"Ââåğõ";
			this->ââåğõToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ââåğõToolStripMenuItem_Click);
			// 
			// âíèçToolStripMenuItem
			// 
			this->âíèçToolStripMenuItem->Name = L"âíèçToolStripMenuItem";
			this->âíèçToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad2));
			this->âíèçToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->âíèçToolStripMenuItem->Text = L"Âíèç";
			this->âíèçToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âíèçToolStripMenuItem_Click);
			// 
			// âëåâîToolStripMenuItem
			// 
			this->âëåâîToolStripMenuItem->Name = L"âëåâîToolStripMenuItem";
			this->âëåâîToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad4));
			this->âëåâîToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->âëåâîToolStripMenuItem->Text = L"Âëåâî";
			this->âëåâîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âëåâîToolStripMenuItem_Click);
			// 
			// âïğàâîToolStripMenuItem
			// 
			this->âïğàâîToolStripMenuItem->Name = L"âïğàâîToolStripMenuItem";
			this->âïğàâîToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad6));
			this->âïğàâîToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->âïğàâîToolStripMenuItem->Text = L"Âïğàâî";
			this->âïğàâîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âïğàâîToolStripMenuItem_Click);
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			this->óäàëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óäàëèòüToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int GetDistance(int x0, int x, int y0, int y) {	// Âû÷èñëåíèå äèñòàíöèè ìåæäó òî÷êàìè
		return (pow((x0 - x), 2) + pow((y0 - y), 2));
	}
	private: bool CheckIn(int x, int y, int R) {	// Ïğîâåğêà âûõîäà çà ïîëå ğèñîâàíèÿ
		return (x + R<(pictureBox1->Location.X + pictureBox1->Width) && x - R>pictureBox1->Location.X && y + R<(pictureBox1->Location.Y + pictureBox1->Height) && y - R>pictureBox1->Location.Y);
	}

	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {	// Îòğèñîâêà ôîğìû

		Pen^ pen = gcnew Pen(Color::Black);	// Êèñòü
		Brush^ brush = gcnew SolidBrush(Color::FromArgb(0, 0, 0));	// Çàëèâêà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				col c = repos.getObject(i).getColor();
				pen->Color = Color::FromArgb(c.r, c.g, c.b);
				if (CCircle* c = dynamic_cast<CCircle*>(&repos.getObject(i))) {
					if (repos.getObject(i).getSelected() == false) {	// Ğèñóåì ıëåìåíò
						e->Graphics->DrawEllipse(pen, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
					else {	// Çàëèâàåì ıëåìåíò

						e->Graphics->FillEllipse(brush, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
				}
				else if (CSquare* c = dynamic_cast<CSquare*>(&repos.getObject(i))) {
					if (repos.getObject(i).getSelected() == false) {	// Ğèñóåì ıëåìåíò
						e->Graphics->DrawRectangle(pen, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
					else {	// Çàëèâàåì ıëåìåíò

						e->Graphics->FillRectangle(brush, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}

				}
				else if (CTriangle* c = dynamic_cast<CTriangle*>(&repos.getObject(i))) {
					Point p1(c->getX(), c->getY() - c->getR());
					Point p2(c->getX() - c->getR(), c->getY() + c->getR());
					Point p3(c->getX() + c->getR(), c->getY() + c->getR());
					array<Point>^ p = { p1,p2,p3 };	// Òğåóãîëüíèê
					if (repos.getObject(i).getSelected() == false) {	// Ğèñóåì ıëåìåíò
						e->Graphics->DrawPolygon(pen, p);
					}
					else {	// Çàëèâàåì ıëåìåíò
						e->Graphics->FillPolygon(brush, p);
					}
				}
			}
		}
		delete pen;
		delete brush;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {	// Îáğàáîò÷èê íàæàòèÿ ïîëÿ
		int check = 0;	// Ïğîâåğêà íàõîæäåíèÿ îáúåêòà ïğè íàæàòèè
		int x, y;
		if ((Control::ModifierKeys == Keys::Control)) {	// Ïğîâåğêà íàæàòèÿ Ctrl
			x = this->PointToClient(Cursor->Position).X - pictureBox1->Location.X;
			y = this->PointToClient(Cursor->Position).Y - pictureBox1->Location.Y;
			for (int i = 0; i < repos.getSize(); ++i) {
				if (!repos.isNull(i)) {
					if (GetDistance(repos.getObject(i).getX(), x, repos.getObject(i).getY(), y) <= pow(repos.getObject(i).getR(), 2)) {
						if (repos.getObject(i).getSelected() == false)
							check = 1;
					}
				}
				if (check > 0) break;
			}
			if (check != 0)
				for (int i = 0; i < repos.getSize(); ++i) {
					if (!repos.isNull(i)) {
						if (GetDistance(repos.getObject(i).getX(), x, repos.getObject(i).getY(), y) <= pow(repos.getObject(i).getR(), 2)) {
							repos.getObject(i).setSelected(true);
						}
					}
				}

		}
		else {
			for (int i = 0; i < repos.getSize(); ++i) {
				if (!repos.isNull(i))
					repos.getObject(i).setSelected(false);
			}
			x = this->PointToClient(Cursor->Position).X - pictureBox1->Location.X;
			y = this->PointToClient(Cursor->Position).Y - pictureBox1->Location.Y;
			for (int i = 0; i < repos.getSize(); ++i) {
				if (!repos.isNull(i)) {
					if (GetDistance(repos.getObject(i).getX(), x, repos.getObject(i).getY(), y) <= pow(repos.getObject(i).getR(), 2)) {
						check = 1;
						repos.getObject(i).setSelected(true);
					}
				}
			}
			if (check == 0) {	// Åñëè íå íàøëè îáúåêò
				if (fig != 0) {
					if (CCircle* c = dynamic_cast<CCircle*>(fig)) {
						if (CheckIn(x, y, R)) {
							repos.addObject(new CCircle(x, y, R));
							delete fig;
							fig = 0;

						}
					}
					else if (CSquare* c = dynamic_cast<CSquare*>(fig)) {
						if (CheckIn(x, y, R)) {
							repos.addObject(new CSquare(x, y, R));
							delete fig;
							fig = 0;
						}
					}
					else if (CTriangle* c = dynamic_cast<CTriangle*>(fig)) {
						if (CheckIn(x, y, R)) {
							repos.addObject(new CTriangle(x, y, R));
							delete fig;
							fig = 0;
						}
					}
				}

			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû


	}
	private: System::Void êğóãToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Çàïîìèíàåì îáúåêò äëÿ ñîçäàíèÿ
		delete fig;
		fig = 0;
		fig = new CCircle();
	}
	private: System::Void êâàäğàòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		delete fig;
		fig = 0;
		fig = new CSquare();
	}
	private: System::Void òğåóãîëüíèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		delete fig;
		fig = 0;
		fig = new CTriangle();
	}
	private: System::Void óâåëè÷èòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Óâåëè÷åíèå îáúåêòà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX(), repos.getObject(i).getY(), repos.getObject(i).getR() + 10))	// Ïğîâåğêà âûõîäà
						repos.getObject(i).setR(repos.getObject(i).getR() + 10);
				}
			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void óìåíüøèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Óìåíüøåíèå îáúåêòà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (repos.getObject(i).getR() - 10 > 0)
						repos.getObject(i).setR(repos.getObject(i).getR() - 10);
				}
			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void óäàëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Óäàëåíèå îáúåêòîâ
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.delObject(i);
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void ââåğõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåùåíèå îáúåêòà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX(), repos.getObject(i).getY() - 10, repos.getObject(i).getR()))	// Ïğîâåğêà âûõîäà
						repos.getObject(i).setY(repos.getObject(i).getY() - 10);
				}
			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void âíèçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåùåíèå îáúåêòà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX(), repos.getObject(i).getY() + 10, repos.getObject(i).getR()))	// Ïğîâåğêà âûõîäà
						repos.getObject(i).setY(repos.getObject(i).getY() + 10);
				}
			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void âëåâîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåùåíèå îáúåêòà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX() - 10, repos.getObject(i).getY(), repos.getObject(i).getR()))	// Ïğîâåğêà âûõîäà
						repos.getObject(i).setX(repos.getObject(i).getX() - 10);
				}
			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void âïğàâîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåùåíèå îáúåêòà
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX() + 10, repos.getObject(i).getY(), repos.getObject(i).getR()))	// Ïğîâåğêà âûõîäà
						repos.getObject(i).setX(repos.getObject(i).getX() + 10);
				}
			}
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void blackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåíà öâåòà îáúåêòà
		col c(0, 0, 0);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void redToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåíà öâåòà îáúåêòà
		col c(255, 0, 0);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåíà öâåòà îáúåêòà
		col c(0, 255, 0);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	private: System::Void blueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Ñìåíà öâåòà îáúåêòà
		col c(0, 0, 255);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Îáíîâëåíèå ôîğìû
	}
	};
}
