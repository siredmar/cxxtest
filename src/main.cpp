#include <iostream>
#include "Complex/Complex.hpp"

using namespace std;

int main()
{
    Complex a(1, 2);
    Complex b(3, 4);
    Complex c, d, e;
    c = Add(a, b);
    d = Mul(a, b);
    e = Div(b, a);
    e = b / a;

    cout << "a.Re: " << a.GetRe() << ", a.Im: " << a.GetIm() << endl;
    cout << "b.Re: " << b.GetRe() << ", b.Im: " << b.GetIm() << endl;
    cout << "c.Re: " << c.GetRe() << ", c.Im: " << c.GetIm() << endl;
    cout << "d.Re: " << d.GetRe() << ", d.Im: " << d.GetIm() << endl;
    cout << "e.Re: " << e.GetRe() << ", e.Im: " << e.GetIm() << endl;
    cout << "e.Magnitude: " << e.Magnitude() << endl;
    return 0;
}
