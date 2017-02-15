/*
 * Imaginary.hpp
 *
 *  Created on: 15.02.2017
 *      Author: ASchl
 */

#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

class Complex
{
    private:
        double Im;
        double Re;
    public:
        Complex(double R, double I);
        Complex(double R);
        Complex();
        Complex(const Complex &c);
        ~Complex();
        double GetIm();
        double GetRe();
        double Magnitude();
        void SetIm(double I);
        void SetRe(double R);
        Complex operator +(Complex c);
        Complex operator -(Complex c);
        Complex operator *(Complex b);
        Complex operator /(Complex b);
        Complex operator =(Complex c);
};

Complex Add(Complex a, Complex b);
Complex Sub(Complex a, Complex b);
Complex Mul(Complex a, Complex b);
Complex Div(Complex a, Complex b);
#endif /* COMPLEX_HPP_ */
