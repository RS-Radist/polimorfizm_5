#ifndef LineynoeUravnenie_hpp
#define LineynoeUravnenie_hpp
#include <stdio.h>
#include "BaseUravneniy.hpp"
class LineynoeUravnenie : public BaseUravneniy
{
protected:
    double a, b, c;
public:
    LineynoeUravnenie(){};
    ~LineynoeUravnenie (){};
    double EquationRoot();
    double GetA();
    double GetB();
    double GetC();
    void SetA(double _a);
    void SetB(double _b);
    void SetC(double _c);
};

#endif /* LineynoeUravnenie_hpp */
