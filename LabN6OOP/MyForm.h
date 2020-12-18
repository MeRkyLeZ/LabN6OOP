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

	private: System::Windows::Forms::ToolStripMenuItem^ положениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ кругToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ квадратToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ треугольникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ увеличитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ уменьшитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вверхToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ внизToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ влевоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вправоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blueToolStripMenuItem;






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
			this->увеличитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->уменьшитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->положениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вверхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->внизToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->влевоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вправоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->кругToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->кругToolStripMenuItem->Text = L"Круг";
			this->кругToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::кругToolStripMenuItem_Click);
			// 
			// квадратToolStripMenuItem
			// 
			this->квадратToolStripMenuItem->Name = L"квадратToolStripMenuItem";
			this->квадратToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->квадратToolStripMenuItem->Text = L"Квадрат";
			this->квадратToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::квадратToolStripMenuItem_Click);
			// 
			// треугольникToolStripMenuItem
			// 
			this->треугольникToolStripMenuItem->Name = L"треугольникToolStripMenuItem";
			this->треугольникToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->треугольникToolStripMenuItem->Text = L"Треугольник";
			this->треугольникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::треугольникToolStripMenuItem_Click);
			// 
			// инструментыToolStripMenuItem
			// 
			this->инструментыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->размерToolStripMenuItem,
					this->цветToolStripMenuItem, this->положениеToolStripMenuItem, this->удалитьToolStripMenuItem
			});
			this->инструментыToolStripMenuItem->Name = L"инструментыToolStripMenuItem";
			this->инструментыToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->инструментыToolStripMenuItem->Text = L"Изменить";
			// 
			// размерToolStripMenuItem
			// 
			this->размерToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->увеличитьToolStripMenuItem,
					this->уменьшитьToolStripMenuItem
			});
			this->размерToolStripMenuItem->Name = L"размерToolStripMenuItem";
			this->размерToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->размерToolStripMenuItem->Text = L"Размер";
			// 
			// увеличитьToolStripMenuItem
			// 
			this->увеличитьToolStripMenuItem->Name = L"увеличитьToolStripMenuItem";
			this->увеличитьToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->увеличитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Up));
			this->увеличитьToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->увеличитьToolStripMenuItem->Text = L"Увеличить";
			this->увеличитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::увеличитьToolStripMenuItem_Click);
			// 
			// уменьшитьToolStripMenuItem
			// 
			this->уменьшитьToolStripMenuItem->Name = L"уменьшитьToolStripMenuItem";
			this->уменьшитьToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->уменьшитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Down));
			this->уменьшитьToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->уменьшитьToolStripMenuItem->Text = L"Уменьшить";
			this->уменьшитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::уменьшитьToolStripMenuItem_Click);
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->blackToolStripMenuItem,
					this->redToolStripMenuItem, this->greenToolStripMenuItem, this->blueToolStripMenuItem
			});
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->цветToolStripMenuItem->Text = L"Цвет";
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
			// положениеToolStripMenuItem
			// 
			this->положениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->вверхToolStripMenuItem,
					this->внизToolStripMenuItem, this->влевоToolStripMenuItem, this->вправоToolStripMenuItem
			});
			this->положениеToolStripMenuItem->Name = L"положениеToolStripMenuItem";
			this->положениеToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->положениеToolStripMenuItem->Text = L"Положение";
			// 
			// вверхToolStripMenuItem
			// 
			this->вверхToolStripMenuItem->Name = L"вверхToolStripMenuItem";
			this->вверхToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad8));
			this->вверхToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->вверхToolStripMenuItem->Text = L"Вверх";
			this->вверхToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вверхToolStripMenuItem_Click);
			// 
			// внизToolStripMenuItem
			// 
			this->внизToolStripMenuItem->Name = L"внизToolStripMenuItem";
			this->внизToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad2));
			this->внизToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->внизToolStripMenuItem->Text = L"Вниз";
			this->внизToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::внизToolStripMenuItem_Click);
			// 
			// влевоToolStripMenuItem
			// 
			this->влевоToolStripMenuItem->Name = L"влевоToolStripMenuItem";
			this->влевоToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad4));
			this->влевоToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->влевоToolStripMenuItem->Text = L"Влево";
			this->влевоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::влевоToolStripMenuItem_Click);
			// 
			// вправоToolStripMenuItem
			// 
			this->вправоToolStripMenuItem->Name = L"вправоToolStripMenuItem";
			this->вправоToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::NumPad6));
			this->вправоToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->вправоToolStripMenuItem->Text = L"Вправо";
			this->вправоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вправоToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
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
				col c = repos.getObject(i).getColor();
				pen->Color = Color::FromArgb(c.r, c.g, c.b);
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
					array<Point>^ p = { p1,p2,p3 };	// Треугольник
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
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {	// Обработчик нажатия поля
		int check = 0;	// Проверка нахождения объекта при нажатии
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
			if (check == 0) {	// Если не нашли объект
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
	private: System::Void кругToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Запоминаем объект для создания
		fig = new CCircle();
	}
	private: System::Void квадратToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fig = new CSquare();
	}
	private: System::Void треугольникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fig = new CTriangle();
	}
	private: System::Void увеличитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Увеличение объекта
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX(), repos.getObject(i).getY(), repos.getObject(i).getR() + 10))	// Проверка выхода
						repos.getObject(i).setR(repos.getObject(i).getR() + 10);
				}
			}
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void уменьшитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Уменьшение объекта
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (repos.getObject(i).getR() - 10 > 0)
						repos.getObject(i).setR(repos.getObject(i).getR() - 10);
				}
			}
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Удаление объектов
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.delObject(i);
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void вверхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смещение объекта
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX(), repos.getObject(i).getY() - 10, repos.getObject(i).getR()))	// Проверка выхода
						repos.getObject(i).setY(repos.getObject(i).getY() - 10);
				}
			}
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void внизToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смещение объекта
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX(), repos.getObject(i).getY() + 10, repos.getObject(i).getR()))	// Проверка выхода
						repos.getObject(i).setY(repos.getObject(i).getY() + 10);
				}
			}
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void влевоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смещение объекта
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX() - 10, repos.getObject(i).getY(), repos.getObject(i).getR()))	// Проверка выхода
						repos.getObject(i).setX(repos.getObject(i).getX() - 10);
				}
			}
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void вправоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смещение объекта
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (repos.getObject(i).getSelected()) {
					if (CheckIn(repos.getObject(i).getX() + 10, repos.getObject(i).getY(), repos.getObject(i).getR()))	// Проверка выхода
						repos.getObject(i).setX(repos.getObject(i).getX() + 10);
				}
			}
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void blackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смена цвета объекта
		col c(0, 0, 0);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void redToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смена цвета объекта
		col c(255, 0, 0);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смена цвета объекта
		col c(0, 255, 0);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Обновление формы
	}
	private: System::Void blueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	// Смена цвета объекта
		col c(0, 0, 255);
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i))
				if (repos.getObject(i).getSelected() == true)
					repos.getObject(i).setColor(c);
		}
		MyForm::Refresh();	// Обновление формы
	}
	};
}
