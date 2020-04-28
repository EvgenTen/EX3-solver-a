#pragma once
#include <complex>


namespace solver {
    class RealVariable{
    public:
      double x;
    public:
      RealVariable():x(0){}
      RealVariable(double x):x(x){}

    friend RealVariable& operator +( RealVariable& , const RealVariable& );
    friend RealVariable& operator +( RealVariable& , const double);
    friend RealVariable& operator +(const double ,  RealVariable& );
    friend RealVariable& operator -( RealVariable& , const RealVariable& );
    friend RealVariable& operator -( RealVariable& , const double );
    friend RealVariable& operator -(const double ,  RealVariable& );
    friend RealVariable& operator *(const double ,  RealVariable&);
    friend RealVariable& operator *( RealVariable& , const RealVariable&);
    friend RealVariable& operator *( RealVariable& ,const double);
    friend RealVariable& operator /( RealVariable&, const double);
    friend RealVariable& operator /( RealVariable&, const RealVariable&);
    friend RealVariable& operator /(const double, RealVariable&);
    friend RealVariable& operator ^( RealVariable&, const double);
    friend RealVariable& operator ==( RealVariable&, const RealVariable&);
    friend RealVariable& operator ==( RealVariable&, const double);
    friend RealVariable& operator ==(const double ,  RealVariable&);
    
 };

   
    class ComplexVariable{
        std::complex<double> c;

    public:
        ComplexVariable(): c(0,0){}
        ComplexVariable(std::complex<double> c): c(c){}

    friend ComplexVariable& operator +( ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable& operator +( ComplexVariable&, const double);
    friend ComplexVariable& operator +(std::complex<double>,  ComplexVariable&);
    friend ComplexVariable& operator +( ComplexVariable&, std::complex<double>);
    friend ComplexVariable& operator +(const double,  ComplexVariable&);
    friend ComplexVariable& operator -( ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable& operator -(ComplexVariable&, const double);
    friend ComplexVariable& operator -(const double,  ComplexVariable&);
    friend ComplexVariable& operator -(std::complex<double>,  ComplexVariable&);
    friend ComplexVariable& operator -( ComplexVariable&,std::complex<double>);
    friend ComplexVariable& operator *( ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable& operator *( ComplexVariable&, const double);
    friend ComplexVariable& operator *(const double, ComplexVariable&);
    friend ComplexVariable& operator *(std::complex<double>,  ComplexVariable&);
    friend ComplexVariable& operator *( ComplexVariable&,std::complex<double>);
    friend ComplexVariable& operator /( ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable& operator /( ComplexVariable&, const double);
    friend ComplexVariable& operator /(const double, ComplexVariable&);
    friend ComplexVariable& operator /(std::complex<double>,  ComplexVariable&);
    friend ComplexVariable& operator /( ComplexVariable&,std::complex<double>);
    friend ComplexVariable& operator ==( ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable& operator ==( ComplexVariable&, const double);
    friend ComplexVariable& operator ==(const double, ComplexVariable&);
    friend ComplexVariable& operator ==(std::complex<double>, ComplexVariable&);
    friend ComplexVariable& operator ==( ComplexVariable&,std::complex<double>);
    friend ComplexVariable& operator^( ComplexVariable&, const double);
 };

    double solve(RealVariable& exe);
    std::complex<double> solve(ComplexVariable& exe);

};