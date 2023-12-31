#pragma once
#include <iostream>
using namespace std;
template <class T>
class MyArray
{
public:
	MyArray(int capacity) {
		this->Capacity = capacity;
		this->Size = 0;
		this->Address = new T[this->Capacity];
	}
	~MyArray() {
		this->Capacity = 0;
		this->Size = 0;
		if (this->Address != NULL) {
			delete[] this->Address;
			this->Address = NULL;
		}
	}
	MyArray (const MyArray& arr) {
		this->Capacity = arr.Capacity;
		this->Size = arr.Size;
		this->Address = new T[arr.Capacity];
		for (int i = 0; i < arr.Size; i++) {
			this->Addressd[i] = arr.Addressd[i];
		}
	}
	MyArray& operator=(const MyArray& arr) {
		if (this->Address != NULL) {
			delete[] this->Address;
			this->Address = NULL;
		}
		this->Capacity = arr.Capacity;
		this->Size = arr.Size;
		this->Address = new T[arr.Capacity];
		for (int i = 0; i < arr.Size; i++) {
			this->Addressd[i] = arr.Addressd[i];
		}
		return *this;
	}
	T& operator[](int index) {
		return this->Address[index];
	}
	void Push_Back(const T& val) {
		if (this->Size == this->Capacity) {
			return;
		}
		this->Address[this->Size] = val;
		this->Size++;
	}
	void Del_Back() {
		if (this->Size == 0) {
			return;
		}
		this->Size--;
	}
	
	int getCapacity() {
		return this->Capacity;
	}
	int getSize() {
		return this->Size;
	}
private:
	T* Address;
	int Capacity;
	int Size;
};
