
#ifndef KvadratichnoeUravnenie_hpp
#define KvadratichnoeUravnenie_hpp


#include <stdio.h>
#include "BaseUravneniy.hpp"
class KvadratichnoeUravnenie : public BaseUravneniy
{
protected:
    double a, b, c,x1,x2;
    
public:
    KvadratichnoeUravnenie(){}
    ~KvadratichnoeUravnenie(){}
    double EquationRoot();
    double GetA();
    double GetB();
    double GetC();
    void SetA(double _a);
    void SetB(double _b);
    void SetC(double _c);
};

#endif /* KvadratichnoeUravnenie_hpp */
