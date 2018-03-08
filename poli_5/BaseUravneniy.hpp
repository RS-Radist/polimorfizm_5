#ifndef BaseUravneniy_hpp
#define BaseUravneniy_hpp
#include <stdio.h>
class BaseUravneniy
{
public:
    virtual double EquationRoot() = 0;
    virtual double GetA()=0;
    virtual double GetB()=0;
    virtual double GetC()=0;
    virtual void SetA(double _a)= 0;
    virtual void SetB(double _b)= 0;
    virtual void SetC(double _c)= 0;
};
#endif /* BaseUravneniy_hpp */
