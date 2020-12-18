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

	Repository repos(10);	// Хранилище объектов
	int R = 50;	// Размер фигуры
	Figure* fig = 0;	// Фигура для создания
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьФигуруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструментыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ размерToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ положениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ кругToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ квадратToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ треугольникToolStripMenuItem;

	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->создатьФигуруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->кругToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->квадратToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->треугольникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструментыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->размерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->положениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->создатьФигуруToolStripMenuItem,
					this->инструментыToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1264, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// создатьФигуруToolStripMenuItem
			// 
			this->создатьФигуруToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->кругToolStripMenuItem,
					this->квадратToolStripMenuItem, this->треугольникToolStripMenuItem
			});
			this->создатьФигуруToolStripMenuItem->Name = L"создатьФигуруToolStripMenuItem";
			this->создатьФигуруToolStripMenuItem->Size = System::Drawing::Size(105, 20);
			this->создатьФигуруToolStripMenuItem->Text = L"Создать фигуру";
			// 
			// кругToolStripMenuItem
			// 
			this->кругToolStripMenuItem->Name = L"кругToolStripMenuItem";
			this->кругToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->кругToolStripMenuItem->Text = L"Круг";
			this->кругToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::кругToolStripMenuItem_Click);
			// 
			// квадратToolStripMenuItem
			// 
			this->квадратToolStripMenuItem->Name = L"квадратToolStripMenuItem";
			this->квадратToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->квадратToolStripMenuItem->Text = L"Квадрат";
			this->квадратToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::квадратToolStripMenuItem_Click);
			// 
			// треугольникToolStripMenuItem
			// 
			this->треугольникToolStripMenuItem->Name = L"треугольникToolStripMenuItem";
			this->треугольникToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->треугольникToolStripMenuItem->Text = L"Треугольник";
			this->треугольникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::треугольникToolStripMenuItem_Click);
			// 
			// инструментыToolStripMenuItem
			// 
			this->инструментыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->размерToolStripMenuItem,
					this->цветToolStripMenuItem, this->положениеToolStripMenuItem
			});
			this->инструментыToolStripMenuItem->Name = L"инструментыToolStripMenuItem";
			this->инструментыToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->инструментыToolStripMenuItem->Text = L"Изменить";
			// 
			// размерToolStripMenuItem
			// 
			this->размерToolStripMenuItem->Name = L"размерToolStripMenuItem";
			this->размерToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->размерToolStripMenuItem->Text = L"Размер";
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->цветToolStripMenuItem->Text = L"Цвет";
			// 
			// положениеToolStripMenuItem
			// 
			this->положениеToolStripMenuItem->Name = L"положениеToolStripMenuItem";
			this->положениеToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->положениеToolStripMenuItem->Text = L"Положение";
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
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int GetDistance(int x0, int x, int y0, int y) {	// Вычисление дистанции между точками
		return (pow((x0 - x), 2) + pow((y0 - y), 2));
	}
	private: bool CheckIn(int x, int y, int R) {	// Проверка выхода за поле рисования
		return (x + R<(pictureBox1->Location.X + pictureBox1->Width) && x - R>pictureBox1->Location.X && y + R<(pictureBox1->Location.Y + pictureBox1->Height) && y - R>pictureBox1->Location.Y);
	}

	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {	// Отрисовка формы

		Pen^ pen = gcnew Pen(Color::Black);	// Кисть
		Brush^ brush = gcnew SolidBrush(Color::FromArgb(0, 0, 0));	// Заливка
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				//pen->Color = Color::FromArgb(repos.getObject(i).getColor());
				if (CCircle* c = dynamic_cast<CCircle*>(&repos.getObject(i))) {
					if (repos.getObject(i).getSelected() == false) {	// Рисуем элемент
						e->Graphics->DrawEllipse(pen, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
					else {	// Заливаем элемент

						e->Graphics->FillEllipse(brush, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
				}
				else if (CSquare* c = dynamic_cast<CSquare*>(&repos.getObject(i))) {
					if (repos.getObject(i).getSelected() == false) {	// Рисуем элемент
						e->Graphics->DrawRectangle(pen, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
					else {	// Заливаем элемент

						e->Graphics->FillRectangle(brush, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}

				}
				else if (CTriangle* c = dynamic_cast<CTriangle*>(&repos.getObject(i))) {
					Point p1(c->getX(), c->getY() - c->getR());
					Point p2(c->getX() - c->getR(), c->getY() + c->getR());
					Point p3(c->getX() + c->getR(), c->getY() + c->getR());
					array<Point>^ p = { p1,p2,p3 };
					if (repos.getObject(i).getSelected() == false) {	// Рисуем элемент
						e->Graphics->DrawPolygon(pen, p);
					}
					else {	// Заливаем элемент
						e->Graphics->FillPolygon(brush, p);
					}
				}
			}
		}
		delete pen;
		delete brush;
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {	// Обработчик нажатия клавиши
		if (e->KeyCode == Keys::Delete) {
			for (int i = 0; i < repos.getSize(); ++i) {
				if (!repos.isNull(i))
					if (repos.getObject(i).getSelected() == true)
						repos.delObject(i);
			}
			MyForm::Refresh();	// Обновление формы
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		int check = 0;
		int x, y;
		if ((Control::ModifierKeys == Keys::Control)) {	// Проверка нажатия Ctrl
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
			if (check == 0) {

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
		MyForm::Refresh();	// Обновление формы


	}
	private: System::Void кругToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fig = new CCircle();
	}
	private: System::Void квадратToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fig = new CSquare();
	}
	private: System::Void треугольникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fig = new CTriangle();
	}
	};
}
