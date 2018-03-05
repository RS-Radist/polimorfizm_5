//Создать абстрактный базовый класс с виртуальной функцией - корни уравнения. Создать производные классы: класс линейных уравнений и класс квадратных уравнений. Определить функцию вычисления корней уравнений.
#include <iostream>
#include <cmath>

using namespace std;
class BaseUravneniy
{
protected:
    double a, b, c,x1,x2;
public:
    virtual double EquationRoot() = 0;
    virtual double GetA()=0;
    virtual double GetB()=0;
    virtual double GetC()=0;
    virtual double GetX1()=0;
    virtual double GetX2()=0;
    virtual void SetA(double _a)= 0;
    virtual void SetB(double _b)= 0;
    virtual void SetC(double _c)= 0;
};
void Show(BaseUravneniy* temp)
{
    cout<<temp->GetA()<<"x"<<"+"<<temp->GetB()<<"="<<temp->GetC();
}


class LineynoeUravnenie : public BaseUravneniy
{
public:
    LineynoeUravnenie (){}
    ~LineynoeUravnenie (){}
    double EquationRoot()
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

    };
    double GetX1()
    {return x1;}
    double GetX2()
    {return x2;}
    double GetA()
    {
        return a;
    }
    double GetB()
    {
        return b;
    }
    double GetC()
    {
        return c;
    }
    
    void SetA(double _a){a=_a;}
    void SetB(double _b){b=_b;}
    void SetC(double _c){c=_c;}
};



class KvadratichnoeUravnenie : public BaseUravneniy
{
public:
    KvadratichnoeUravnenie(){}
    ~KvadratichnoeUravnenie(){}
    double EquationRoot()
    {
        double d = b * b - 4 * a * c;
        if (d < 0)
        {
            
            return 0;
        }
        if (d == 0)
        {
            x1 = x2 = -b / (2 * a);
           
        }
        else if (d > 0)
        {
            x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        }
        return 0;
    }
    
    double GetX1()
    {return x1;}
    double GetX2()
    {return x2;}
    
    double GetA()
    {
        return a;
    }
    double GetB()
    {
        return b;
    }
    double GetC()
    {
        return c;
    }
    
    void SetA(double _a){a=_a;}
    void SetB(double _b){b=_b;}
    void SetC(double _c){c=_c;}
};

int main()
{
    
    
    LineynoeUravnenie line;
    KvadratichnoeUravnenie square;
    BaseUravneniy* base;
    base=&line;
    double a,b,c;
    cout<<"Введите три числа\n";
    cin>>a;
    cin>>b;
    cin>>c;
    base->SetA(a);
    base->SetB(b);
    base->SetC(c);
    Show(base);
    cout<<endl;
    cout<<base->EquationRoot();
    cout<<endl;
    //////////////////////////////
    base=&square;
    cout << "Vvedite znachenie A = \n";
    cin>>a;
    cout << "Vvedite znachenie B = \n";
    cin>>b;
    cout << "Vvedite znachenie C = \n";
    cin>>c;
    base->SetA(a);
    base->SetB(b);
    base->SetC(c);
    cout << "Uravnenie imeet vid " << base->GetA() << "x^2 + " << base->GetB()
    << "x +" << base->GetC() << " = 0" << endl;
    base->EquationRoot();
    cout<<"Первый корень-"<<base->GetX1()<<endl;
    cout<<"Второй корень-"<<base->GetX2()<<endl;
    cout<<endl;
    
}