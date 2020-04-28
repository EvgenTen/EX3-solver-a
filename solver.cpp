#include "solver.hpp"
#include <complex>
#include <iostream>

using namespace std;
using namespace solver;

 
     RealVariable operator +(const RealVariable& , const RealVariable& ){return RealVariable();}
     RealVariable operator +(const RealVariable& , const double){return RealVariable();}
     RealVariable operator +(const double , const RealVariable& ){return RealVariable();}
     RealVariable operator -(const RealVariable& , const RealVariable& ){return RealVariable();}
     RealVariable operator -(const RealVariable& , const double ){return RealVariable();}
     RealVariable operator -(const double , const RealVariable& ){return RealVariable();}
     RealVariable operator *(const double , const RealVariable&){return RealVariable();}
     RealVariable operator *(const RealVariable& , const RealVariable&){return RealVariable();}
     RealVariable operator *(const RealVariable& ,const double){return RealVariable();}
     RealVariable operator /(const RealVariable&, const double){return RealVariable();}
     RealVariable operator /(const RealVariable&, const RealVariable&){return RealVariable();}
     RealVariable operator /(const double, const RealVariable&){return RealVariable();}
     RealVariable operator ^(const RealVariable&, const double){return RealVariable();}
     RealVariable operator ==(const RealVariable&, const RealVariable&){return RealVariable();}
     RealVariable operator ==(const RealVariable&, const double){return RealVariable();}
     RealVariable operator ==(const double , const RealVariable&){return RealVariable();}
double solver::solve(RealVariable& exe) {return 0.0;}

 ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator +(const ComplexVariable&, const double){return ComplexVariable();}
 ComplexVariable operator +(std::complex<double>, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator +(const ComplexVariable&, std::complex<double>){return ComplexVariable();}
 ComplexVariable operator +(const double, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator -(const ComplexVariable&, const double){return ComplexVariable();}
 ComplexVariable operator -(const double, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator -(std::complex<double>, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator -(const ComplexVariable&,std::complex<double>){return ComplexVariable();}
 ComplexVariable operator *(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator *(const ComplexVariable&, const double){return ComplexVariable();}
 ComplexVariable operator *(const double,const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator *(std::complex<double>, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator *(const ComplexVariable&,std::complex<double>){return ComplexVariable();}
 ComplexVariable operator /(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator /(const ComplexVariable&, const double){return ComplexVariable();}
 ComplexVariable operator /(const double,const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator /(std::complex<double>, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator /(const ComplexVariable&,std::complex<double>){return ComplexVariable();}
 ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator ==(const ComplexVariable&, const double){return ComplexVariable();}
 ComplexVariable operator ==(const double,const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator ==(std::complex<double>, const ComplexVariable&){return ComplexVariable();}
 ComplexVariable operator ==(const ComplexVariable&,std::complex<double>){return ComplexVariable();}
 ComplexVariable operator^(const ComplexVariable&, const double){return ComplexVariable();}

complex<double> solver::solve(ComplexVariable& exe) {return complex<double>();}