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

	Repository repos(10);	// ��������� ��������
	const int D = 100;	// ������� �����

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int GetDistance(int x0, int x, int y0, int y) {	// ���������� ��������� ����� �������
		return (pow((x0 - x), 2) + pow((y0 - y), 2));
	}
	private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {	// ���������� ������� �� �����
		int check = 0;
		int x, y;
		if ((Control::ModifierKeys == Keys::Control)) {	// �������� ������� Ctrl
			for (int i = 0; i < repos.getSize(); ++i) {
				x = this->PointToClient(Cursor->Position).X;
				y = this->PointToClient(Cursor->Position).Y;
				if (!repos.isNull(i)) {
					if (GetDistance(repos.getObject(i).getX(), x, repos.getObject(i).getY(), y) <= pow(D / 2, 2)) {
						if (repos.getObject(i).getSelected() == false)
							check = 1;
					}
				}
				if (check > 0) break;
			}
			if (check != 0)
				for (int i = 0; i < repos.getSize(); ++i) {
					if (!repos.isNull(i)) {
						if (GetDistance(repos.getObject(i).getX(), x, repos.getObject(i).getY(), y) <= pow(D / 2, 2)) {
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
			for (int i = 0; i < repos.getSize(); ++i) {
				x = this->PointToClient(Cursor->Position).X;
				y = this->PointToClient(Cursor->Position).Y;
				if (!repos.isNull(i)) {
					if (GetDistance(repos.getObject(i).getX(), x, repos.getObject(i).getY(), y) <= pow(D / 2, 2)) {
						check = 1;
						repos.getObject(i).setSelected(true);
					}
				}
			}
			if (check == 0) {
				repos.addObject(new CCircle(x, y, D / 2));
			}
		}
		MyForm::Refresh();	// ���������� �����
	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {	// ��������� �����
		Pen^ pen = gcnew Pen(Color::Black);	// �����
		Brush^ brush = gcnew SolidBrush(Color::FromArgb(0, 0, 0));	// �������
		for (int i = 0; i < repos.getSize(); ++i) {
			if (!repos.isNull(i)) {
				if (CCircle* c = dynamic_cast<CCircle*>(&repos.getObject(i))) {
					if (repos.getObject(i).getSelected() == false) {	// ������ �������
						e->Graphics->DrawEllipse(pen, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
					else {	// �������� �������

						e->Graphics->FillEllipse(brush, c->getX() - c->getR(), c->getY() - c->getR(), c->getR() * 2, c->getR() * 2);
					}
				}
				else if (CSquare* c = dynamic_cast<CSquare*>(&repos.getObject(i))) {

				}
				else if (CTriangle* c = dynamic_cast<CTriangle*>(&repos.getObject(i))) {

				}
				else if (CLine* c = dynamic_cast<CLine*>(&repos.getObject(i))) {

				}
			}
		}
		delete pen;
		delete brush;
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {	// ���������� ������� �������
		if (e->KeyCode == Keys::Delete) {
			for (int i = 0; i < repos.getSize(); ++i) {
				if (!repos.isNull(i))
					if (repos.getObject(i).getSelected() == true)
						repos.delObject(i);
			}
			MyForm::Refresh();	// ���������� �����
		}
	}
	};
}
