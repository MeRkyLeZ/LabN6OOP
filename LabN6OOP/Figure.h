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
	Figure(int x, int y) {	// �����������
		this->x = x;
		this->y = y;
		selected = true;
	}
	Figure(const Figure& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		selected = true;
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
};

class CCircle :public Figure {	// ������
protected:
	int R;
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
	int getR() {
		return R;
	}
};

class CSquare :public Figure {	// ������
protected:
	int S;
public:
	CSquare() {	// �����������
		x = 0;
		y = 0;
		S = 0;
		selected = true;
	}
	CSquare(int x, int y, int S) {	// �����������
		this->x = x;
		this->y = y;
		this->S = S;
		selected = true;
	}
	CSquare(const CSquare& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		this->S = obj.S;
		selected = true;
	}
	virtual ~CSquare() {	// ����������

	}
	int getS() {
		return S;
	}
};

class CTriangle :public Figure {	// ������
protected:
	int S;
public:
	CTriangle() {	// �����������
		x = 0;
		y = 0;
		S = 0;
		selected = true;
	}
	CTriangle(int x, int y, int S) {	// �����������
		this->x = x;
		this->y = y;
		this->S = S;
		selected = true;
	}
	CTriangle(const CTriangle& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		this->S = obj.S;
		selected = true;
	}
	virtual ~CTriangle() {	// ����������

	}
	int getS() {
		return S;
	}
};

class CLine :public Figure {	// ������
protected:
	int xe, ye;
public:
	CLine() {	// �����������
		x = 0;
		y = 0;
		xe = 0;
		ye = 0;
		selected = true;
	}
	CLine(int x, int y, int xe, int ye) {	// �����������
		this->x = x;
		this->y = y;
		this->xe = xe;
		this->ye = ye;
		selected = true;
	}
	CLine(const CLine& obj) {	// ����������� �����������
		this->x = obj.x;
		this->y = obj.y;
		this->xe = obj.xe;
		this->ye = obj.ye;
		selected = true;
	}
	virtual ~CLine() {	// ����������

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
