#pragma once

class Figure {
protected:
	int x, y;
	bool selected;
public:
	Figure() {
		x = 0;
		y = 0;
		selected = true;
	}
	Figure(int x, int y) {	// Конструктор
		this->x = x;
		this->y = y;
		selected = true;
	}
	Figure(const Figure& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		selected = true;
	}
	virtual ~Figure() {	// Деструктор
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
};

class CCircle :public Figure {	// Объект
protected:
	int R;
public:
	CCircle() {	// Конструктор
		x = 0;
		y = 0;
		R = 0;
		selected = true;
	}
	CCircle(int x, int y, int R) {	// Конструктор
		this->x = x;
		this->y = y;
		this->R = R;
		selected = true;
	}
	CCircle(const CCircle& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		this->R = obj.R;
		selected = true;
	}
	virtual ~CCircle() {	// Деструктор

	}
	int getR() {
		return R;
	}
};

class CSquare :public Figure {	// Объект
protected:
	int S;
public:
	CSquare() {	// Конструктор
		x = 0;
		y = 0;
		S = 0;
		selected = true;
	}
	CSquare(int x, int y, int S) {	// Конструктор
		this->x = x;
		this->y = y;
		this->S = S;
		selected = true;
	}
	CSquare(const CSquare& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		this->S = obj.S;
		selected = true;
	}
	virtual ~CSquare() {	// Деструктор

	}
	int getS() {
		return S;
	}
};

class CTriangle :public Figure {	// Объект
protected:
	int S;
public:
	CTriangle() {	// Конструктор
		x = 0;
		y = 0;
		S = 0;
		selected = true;
	}
	CTriangle(int x, int y, int S) {	// Конструктор
		this->x = x;
		this->y = y;
		this->S = S;
		selected = true;
	}
	CTriangle(const CTriangle& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		this->S = obj.S;
		selected = true;
	}
	virtual ~CTriangle() {	// Деструктор

	}
	int getS() {
		return S;
	}
};

class CLine :public Figure {	// Объект
protected:
	int xe, ye;
public:
	CLine() {	// Конструктор
		x = 0;
		y = 0;
		xe = 0;
		ye = 0;
		selected = true;
	}
	CLine(int x, int y, int xe, int ye) {	// Конструктор
		this->x = x;
		this->y = y;
		this->xe = xe;
		this->ye = ye;
		selected = true;
	}
	CLine(const CLine& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		this->xe = obj.xe;
		this->ye = obj.ye;
		selected = true;
	}
	virtual ~CLine() {	// Деструктор

	}
	int getXE() {
		return xe;
	}
	int getYE() {
		return ye;
	}
	void setXE(int xe) {
		this->xe = xe;
	}
	void setYE(int ye) {
		this->ye = ye;
	}
};
