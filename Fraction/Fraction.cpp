#include "Fraction.hh"

using namespace std;
Fraction::Fraction(int n, int d):num(n),den(d) {
}

//friend
Fraction operator +(Fraction a, Fraction b) {
	Fraction s = Fraction (a.num*b.den+a.den*b.num,a.den*b.den);
	return s;
}

// member operator
Fraction Fraction::operator -(Fraction f) {
    Fraction s= Fraction (this->num*f.den-this->den*f.num, this->den*f.den);
    return s;
}

ostream& operator <<(ostream& s, Fraction b) {
    s << '('<< b.num<<','<<b.den<<')';
    return s;
}
#if 0
//just here for illustration, you do not have to do anything
void Fraction::simplify(Fraction s) {
    if (s.num>s.den)
    {
        for(int i=s.den; i>0; i--){
            if (s.num%i==0 && s.den%i==0){
                s.num/=i;
                s.den/=i;
                cout << '('<< s.num<<','<<s.den<<')';
            }
        }
    }
    else
    {
        for(int i=s.num; i>0; i--){
            if (s.num%i==0 && s.den%i==0){
                s.num/=i;
                s.den/=i;
                cout << '('<< s.num<<','<<s.den<<')';
            }
        }
    }
}
#endif