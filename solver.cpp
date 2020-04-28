#include "solver.hpp"
#include <complex>
#include <iostream>

using namespace std;
using solver::RealVariable;
using solver::ComplexVariable;


 
     RealVariable& solver::operator+( RealVariable& x1, const RealVariable& x2 ){return x1;}
     RealVariable& solver::operator+( RealVariable& x1, const double num){return x1;}
     RealVariable& solver::operator+(const double num,  RealVariable& x1){return x1;}
     RealVariable& solver::operator-( RealVariable& x1, const RealVariable& x2){return x1;}
     RealVariable& solver::operator-( RealVariable& x1, const double num){return x1;}
     RealVariable& solver::operator-(const double num,  RealVariable& x1){return x1;}
     RealVariable& solver::operator*(const double num,  RealVariable& x1){return x1;}
     RealVariable& solver::operator*( RealVariable& x1, const RealVariable& x2){return x1;}
     RealVariable& solver::operator*( RealVariable& x1,const double num){return x1;}
     RealVariable& solver::operator/( RealVariable& x1, const double num){return x1;}
     RealVariable& solver::operator/( RealVariable& x1, const RealVariable& x2){return x1;}
     RealVariable& solver::operator/(const double num,  RealVariable& x1){return x1;}
     RealVariable& solver::operator^( RealVariable& x1, const double num){return x1;}
     RealVariable& solver::operator==( RealVariable& x1, const RealVariable& x2){return x1;}
     RealVariable& solver::operator==( RealVariable& x1, const double num){return x1;}
     RealVariable& solver::operator==(const double num ,  RealVariable& x1){return x1;}
     double solver::solve(RealVariable& exe) {return 0.0;}

 ComplexVariable& solver::operator+( ComplexVariable& x1, const ComplexVariable& x2){return x1;}
 ComplexVariable& solver::operator+( ComplexVariable& x1, const double num){return x1;}
 ComplexVariable& solver::operator+(std::complex<double> x,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator+( ComplexVariable& x1, std::complex<double> x2){return x1;}
 ComplexVariable& solver::operator+(const double num,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator-( ComplexVariable& x1, const ComplexVariable& x2){return x1;}
 ComplexVariable& solver::operator-( ComplexVariable& x1, const double num){return x1;}
 ComplexVariable& solver::operator-(const double num,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator-(std::complex<double> x,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator-( ComplexVariable& x1,std::complex<double> x){return x1;}
 ComplexVariable& solver::operator*( ComplexVariable& x1, const ComplexVariable& x2){return x1;}
 ComplexVariable& solver::operator*( ComplexVariable& x1, const double num){return x1;}
 ComplexVariable& solver::operator*(const double num, ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator*(std::complex<double> num,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator*( ComplexVariable& x1,std::complex<double> x){return x1;}
 ComplexVariable& solver::operator/( ComplexVariable& x1, const ComplexVariable& x2){return x1;}
 ComplexVariable& solver::operator/( ComplexVariable& x1, const double num){return x1;}
 ComplexVariable& solver::operator/(const double num, ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator/(std::complex<double> x,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator/( ComplexVariable& x1,std::complex<double> x){return x1;}
 ComplexVariable& solver::operator==( ComplexVariable& x1, const ComplexVariable& x2){return x1;}
 ComplexVariable& solver::operator==( ComplexVariable& x1, const double num){return x1;}
 ComplexVariable& solver::operator==(const double num, ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator==(std::complex<double> x,  ComplexVariable& x1){return x1;}
 ComplexVariable& solver::operator==( ComplexVariable& x1,std::complex<double> x){return x1;}
 ComplexVariable& solver::operator^( ComplexVariable& x1, const double num){return x1;}

  complex<double> solver::solve(ComplexVariable& exe) {return 0.0;}