#include <iostream>
using namespace std;
template<typename Precision>
class Complex{
private:
	Precision r,i;
public:
	Complex(Precision r,Precision i){}
	friend Complex operator + (const Complex& a,const Complex& b){
		return Complex(a.r+b.r, a.i+b.i);
	}
	friend ostream& operator << (ostream& s,const Complex& b)//(ostream& s,const Complex<T>& b)  old way
	{
		return s<<b.r<<','<<b.i;
	}

};
int main(){
	Complex<double> c1(1.5,2.5);
	Complex<double> c2(2.2,1.8);
	Complex<double> c3 = c1 + c2;
	cout << c3 << '\n';
	Complex<float> c4(1.5f,2.5f);
	Complex<float> c5(2.2f,1.8f);
	Complex<float> c6 = c4 + c5;
	cout << c6 << '\n';
	Complex<long double> c7(1.5,2.5);
	Complex<long double> c8(2.2,1.8);
	Complex<long double> c9 = c7 + c8;
	cout << c9 << '\n';
}
