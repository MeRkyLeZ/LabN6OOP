#pragma once

class CCircle {	// ������
protected:
	int x, y, R;
	bool selected;
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
	CCircle(const CCircle& circle) {	// ����������� �����������
		this->x = circle.x;
		this->y = circle.y;
		this->R = circle.R;
		selected = true;
	}
	virtual ~CCircle() {	// ����������

	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	int getR() {
		return R;
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