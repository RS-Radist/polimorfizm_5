#include <iostream>
#include "LineynoeUravnenie.hpp"
double LineynoeUravnenie::EquationRoot()
{
    double x,x1;
    x1=c-b;
    x=x1/a;
    if (a*x+b==c)
    {
        return x;
    }
    else
    {
        return 0;
    }
}
void LineynoeUravnenie::SetA(double _a){a=_a;}
void LineynoeUravnenie::SetB(double _b){b=_b;}
void LineynoeUravnenie::SetC(double _c){c=_c;}
double LineynoeUravnenie::GetA(){return a;}
double LineynoeUravnenie::GetB(){return b;}
double LineynoeUravnenie::GetC(){return c;}
