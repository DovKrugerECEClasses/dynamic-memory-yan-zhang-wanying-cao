#pragma once
#include <iostream>
using namespace std;
/*
 *Author: Wanying Cao (10440141)
 */
template<typename T>
class GrowArray {
private:
	int capacity;
	int used;
	T* data;
	void checkGrow() {
		if (used < capacity){
			used++;
			return; }// don't grow unless you have to
		T* old = data;
		//TODO: every time the list grows, double it!!!
		data = new T[used*2]; // calls T::T()
		for (int i = 0; i < used; i++)
			data[i] = old[i];
		delete [] old;
		used++;
	}
public:
	GrowArray() : used(0), capacity(0), data(nullptr) {}
	GrowArray(int  initialCapacity)
		: used(0), capacity(initialCapacity), data(new T[initialCapacity]){}
	//TODO: add destructor, copy constructor, operator =
	~GrowArray(){
	delete [] data;
	}
	GrowArray(const GrowArray& g):used(g.used), capacity(g.capacity), data(new T[capacity]){
		for(int i=0;i<used;i++){
		data[i]=g.data[i];
		}
	}
	friend GrowArray operator =(const GrowArray& g){
		this->capacity=g.capacity;
		this->used=g.used;
		for(int i=0;i < g.used;i++){
			this->data[i]=g.data[i];
		}
	}
	void addEnd(const T& v) {
		checkGrow();
		data[used-1] = v;
	}

	T removeEnd() {
		used--;
		return data[used];
	}
	T operator [](int i) const {
		return data[i];
	}

	T& operator [](int i) {
		return data[i];
	}

	friend ostream& operator <<(ostream& s, const GrowArray<T>& list) {
    for (int i = 0; i < list.used; i++)
			s << list.data[i] << ' ';
		return s;
	}
};
