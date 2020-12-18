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
	Figure(int x, int y) {	// Конструктор
		this->x = x;
		this->y = y;
		selected = true;
		R = 0;
		color = 0;
	}
	Figure(const Figure& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		selected = true;
		color = obj.color;
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

class CCircle :public Figure {	// Объект
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
};

class CSquare :public Figure {	// Объект
public:
	CSquare() {	// Конструктор
		x = 0;
		y = 0;
		R = 0;
		selected = true;
	}
	CSquare(int x, int y, int R) {	// Конструктор
		this->x = x;
		this->y = y;
		this->R = R;
		selected = true;
	}
	CSquare(const CSquare& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		this->R = obj.R;
		selected = true;
	}
	virtual ~CSquare() {	// Деструктор

	}
};

class CTriangle :public Figure {	// Объект
public:
	CTriangle() {	// Конструктор
		x = 0;
		y = 0;
		R = 0;
		selected = true;
	}
	CTriangle(int x, int y, int S) {	// Конструктор
		this->x = x;
		this->y = y;
		this->R = S;
		selected = true;
	}
	CTriangle(const CTriangle& obj) {	// Конструктор копирования
		this->x = obj.x;
		this->y = obj.y;
		this->R = obj.R;
		selected = true;
	}
	virtual ~CTriangle() {	// Деструктор

	}
};
