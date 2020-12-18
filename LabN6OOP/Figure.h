#pragma once


class Figure {
protected:
	int x, y, R;
	bool selected;
	int color;
public:
	Figure() {
		x = 0;
		y = 0;
		R = 0;
		selected = true;
		color = 0;
	}
	Figure(int x, int y) {	// �����������
		this->x = x;
		this->y = y;
		selected = true;
		R = 0;
		color = 0;
	}
	Figure(const Figure& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		selected = true;
		color = obj.color;
	}
	virtual ~Figure() {	// ����������
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
	void setSelected(bool selected) {
		this->selected = selected;
	}
	bool getSelected() {
		return selected;
	}
	int getColor() {
		return color;
	}
	void setColor(int color) {
		this->color = color;
	}
	int getR() {
		return R;
	}
	void setR(int R) {
		this->R = R;
	}
};

class CCircle :public Figure {	// ������
public:
	CCircle() {	// �����������
		x = 0;
		y = 0;
		R = 0;
		selected = true;
	}
	CCircle(int x, int y, int R) {	// �����������
		this->x = x;
		this->y = y;
		this->R = R;
		selected = true;
	}
	CCircle(const CCircle& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		this->R = obj.R;
		selected = true;
	}
	virtual ~CCircle() {	// ����������

	}
};

class CSquare :public Figure {	// ������
public:
	CSquare() {	// �����������
		x = 0;
		y = 0;
		R = 0;
		selected = true;
	}
	CSquare(int x, int y, int R) {	// �����������
		this->x = x;
		this->y = y;
		this->R = R;
		selected = true;
	}
	CSquare(const CSquare& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		this->R = obj.R;
		selected = true;
	}
	virtual ~CSquare() {	// ����������

	}
};

class CTriangle :public Figure {	// ������
public:
	CTriangle() {	// �����������
		x = 0;
		y = 0;
		R = 0;
		selected = true;
	}
	CTriangle(int x, int y, int S) {	// �����������
		this->x = x;
		this->y = y;
		this->R = S;
		selected = true;
	}
	CTriangle(const CTriangle& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		this->R = obj.R;
		selected = true;
	}
	virtual ~CTriangle() {	// ����������

	}
};
