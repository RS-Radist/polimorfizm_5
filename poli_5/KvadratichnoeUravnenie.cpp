#include "KvadratichnoeUravnenie.hpp"
#include <cmath>
double KvadratichnoeUravnenie::EquationRoot()
{
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        return 0;
    }
    if (d == 0)
    {
        x1 = x2 = -b / (2 * a);
        a=x1;
        
    }
    else if (d > 0)
    {
        a=x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        b=x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    }
    return 0;
}
double KvadratichnoeUravnenie::GetA(){return a;}
double KvadratichnoeUravnenie::GetB(){return b;}
double KvadratichnoeUravnenie::GetC(){return c;}
void KvadratichnoeUravnenie::SetA(double _a){a=_a;}
void KvadratichnoeUravnenie::SetB(double _b){b=_b;}
void KvadratichnoeUravnenie::SetC(double _c){c=_c;}