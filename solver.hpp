#pragma once
#include <complex>


namespace solver {
    class RealVariable{
    public:
      double x;
      RealVariable(double x): x(0){};

    friend RealVariable operator +(const RealVariable& , const RealVariable& );
    friend RealVariable operator +(const RealVariable& , const double);
    friend RealVariable operator +(const double , const RealVariable& );
    friend RealVariable operator -(const RealVariable& , const RealVariable& );
    friend RealVariable operator -(const RealVariable& , const double );
    friend RealVariable operator -(const double , const RealVariable& );
    friend RealVariable operator *(const double , const RealVariable&);
    friend RealVariable operator *(const RealVariable& , const RealVariable&);
    friend RealVariable operator *(const RealVariable& ,const double);
    friend RealVariable operator /(const RealVariable&, const double);
    friend RealVariable operator /(const RealVariable&, const RealVariable&);
    friend RealVariable operator /(const double, const RealVariable&);
    friend RealVariable operator ^(const RealVariable&, const double);
    friend RealVariable operator ==(const RealVariable&, const RealVariable&);
    friend RealVariable operator ==(const RealVariable&, const double);
    friend RealVariable operator ==(const double , const RealVariable&);
    
 };

   
    class ComplexVariable{
        std::complex<double> c;

    public:
        ComplexVariable(): c(0,0){};

    friend ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator +(const ComplexVariable&, const double);
    friend ComplexVariable operator +(std::complex<double>, const ComplexVariable&);
    friend ComplexVariable operator +(const ComplexVariable&, std::complex<double>);
    friend ComplexVariable operator +(const double, const ComplexVariable&);
    friend ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator -(const ComplexVariable&, const double);
    friend ComplexVariable operator -(const double, const ComplexVariable&);
    friend ComplexVariable operator -(std::complex<double>, const ComplexVariable&);
    friend ComplexVariable operator -(const ComplexVariable&,std::complex<double>);
    friend ComplexVariable operator *(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator *(const ComplexVariable&, const double);
    friend ComplexVariable operator *(const double,const ComplexVariable&);
    friend ComplexVariable operator *(std::complex<double>, const ComplexVariable&);
    friend ComplexVariable operator *(const ComplexVariable&,std::complex<double>);
    friend ComplexVariable operator /(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator /(const ComplexVariable&, const double);
    friend ComplexVariable operator /(const double,const ComplexVariable&);
    friend ComplexVariable operator /(std::complex<double>, const ComplexVariable&);
    friend ComplexVariable operator /(const ComplexVariable&,std::complex<double>);
    friend ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator ==(const ComplexVariable&, const double);
    friend ComplexVariable operator ==(const double,const ComplexVariable&);
    friend ComplexVariable operator ==(std::complex<double>, const ComplexVariable&);
    friend ComplexVariable operator ==(const ComplexVariable&,std::complex<double>);
    friend ComplexVariable operator^(const ComplexVariable&, const double);
 };

    double solve(RealVariable& exe);
    std::complex<double> solve(ComplexVariable& exe);

};