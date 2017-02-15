#include "Complex.hpp"
#include <cmath>

Complex::Complex(double R, double I)
{
    Im = I;
    Re = R;
}

Complex::Complex(double R)
{
    Im = 0.0f;
    Re = R;
}

Complex::Complex()
{
    Im = 0.0f;
    Re = 0.0f;
}

Complex::Complex(const Complex &c)
{
    this->Re=c.Re;
    this->Im=c.Im;
}

Complex::~Complex()
{

}

double Complex::GetIm()
{
    return Im;
}

double Complex::GetRe()
{
    return Re;
}

void Complex::SetIm(double I)
{
    Im = I;
}
void Complex::SetRe(double R)
{
    Re = R;
}

double Complex::Magnitude()
{
    return (sqrt((Im * Im) + (Re * Re)));
}

Complex Complex::operator +(Complex c)
{
    Complex Result;
    Result.Im = Im + c.Im;
    Result.Re = Re + c.Re;
    return Result;
}

Complex Complex::operator -(Complex c)
{
    Complex Result;
    Result.Im = Im - c.Im;
    Result.Re = Re - c.Re;
    return Result;
}

Complex Complex::operator * (Complex b)
{
    Complex Result;
    Result.Re = b.Re * Re - Im * b.Im;
    Result.Im = Im * b.Re + Re * b.Im;
    return Result;
}

Complex Complex::operator /(Complex b)
{
    double div = (b.Re*b.Re) + (b.Im*b.Im);
    Complex Result;
    Result.Re = ((Re*b.Re)+(Im*b.Im));
    Result.Re = (Result.Re / div);
    Result.Im = ((Im*b.Re)-(Re*b.Im));
    Result.Im = (Result.Im / div);
    return Result;
}

Complex Complex::operator = (Complex c)
{
    Re = c.Re;
    Im = c.Im;
    return *this;
}

Complex Add(Complex a, Complex b)
{
    Complex Result;
    Result.SetIm(a.GetIm() + b.GetIm());
    Result.SetRe(a.GetRe() + b.GetRe());
    return Result;
}

Complex Sub(Complex a, Complex b)
{
    Complex Result;
    Result.SetIm(a.GetIm() - b.GetIm());
    Result.SetRe(a.GetRe() - b.GetRe());
    return Result;
}

Complex Mul(Complex a, Complex b)
{
    Complex Result;
    Result.SetRe(b.GetRe() * a.GetRe() - a.GetIm() * b.GetIm());
    Result.SetIm(a.GetIm() * b.GetRe() + a.GetRe() * b.GetIm());
    return Result;
}

Complex Div(Complex a, Complex b)
{
    double div = (b.GetRe()*b.GetRe()) + (b.GetIm()*b.GetIm());
    Complex Result;
    Result.SetRe((a.GetRe()*b.GetRe())+(a.GetIm()*b.GetIm()));
    Result.SetRe(Result.GetRe() / div);
    Result.SetIm((a.GetIm()*b.GetRe())-(a.GetRe()*b.GetIm()));
    Result.SetIm(Result.GetIm() / div);
    return Result;
}
