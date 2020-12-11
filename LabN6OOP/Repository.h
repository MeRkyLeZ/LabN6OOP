#pragma once
#include "CCircle.h"
#define nameObject CCircle	// ��� �������

class Repository {	// ���������
protected:
	nameObject** arr;	// ������ ���������
	unsigned int size;	// ������ �������
	int count;	// ���������� ���������
public:
	Repository() {	// �����������
		size = 0;
		count = 0;
		arr = new nameObject * [size];
		init(0);
	}
	Repository(unsigned int size) {	// �����������
		this->size = size;
		count = 0;
		arr = new nameObject * [size];
		init(0);
	}
	Repository(const Repository& rep) {	// ����������� �����������
		arr = new nameObject * [rep.size];
		this->size = rep.size;
		this->count = rep.count;
		for (int i = 0; i < size; ++i) {
			arr[i] = new nameObject(*rep.arr[i]);
		}
	}
	virtual ~Repository() {	// ����������
		for (int i = 0; i < size; ++i) {
			if (!isNull(i))
				delete arr[i];
			arr[i] = 0;
		}
		delete[] arr;
	}
	void addObject(nameObject* point) {	// ���������� ��������
		int pos = 0;
		while (!isNull(pos) && pos < size) {
			pos++;
		}
		if (pos == size) {
			size++;
			nameObject** tmp = new nameObject * [size];
			for (int i = 0; i < size - 1; ++i) {
				tmp[i] = arr[i];
			}
			delete[] arr;
			arr = tmp;
		}
		arr[pos] = point;
		count++;
	}
	void delObject(unsigned int pos) {	// �������� �������
		delete arr[pos];
		arr[pos] = 0;
		count--;
	}
	void setObject(unsigned int pos, CCircle* point) {	// ��������� ��������
		if (pos >= size) {
			int oldsize = size;
			size = pos + 1;
			nameObject** tmp = new nameObject * [size];
			for (int i = 0; i < size - 1; ++i) {
				tmp[i] = arr[i];
			}
			delete[] arr;
			arr = tmp;
			init(oldsize);
		}
		delete arr[pos];
		arr[pos] = point;
	}
	nameObject& getObject(unsigned int pos) {	// ��������� ��������
		return *arr[pos];
	}
	int getCount() {	// ��������� ���������� ��������
		return count;
	}
	int getSize() {	// ��������� ������� ���������
		return size;
	}
	bool isNull(unsigned int pos) {	// �������� �������
		if (arr[pos] == 0)
			return true;
		return false;
	}
private:
	void init(int start) {	// ������������� ���������
		for (int i = start; i < size; ++i) {
			arr[i] = 0;
		}
	}
};