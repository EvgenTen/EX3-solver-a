#include "doctest.h"
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;
TEST_CASE("Test") 
{
 RealVariable x;


     CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
     CHECK(solve(2*x-4.0 == 10.0)==7); 
   

     
}