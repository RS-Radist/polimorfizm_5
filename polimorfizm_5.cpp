//Создать абстрактный базовый класс с виртуальной функцией - корни уравнения. Создать производные классы: класс линейных уравнений и класс квадратных уравнений. Определить функцию вычисления корней уравнений.
#include <iostream>
#include <cmath>

using namespace std;
class BaseUravneniy
{
protected:
    double a, b, c;
public:
    BaseUravneniy();
    virtual ~BaseUravneniy(){}
    virtual void EquationRoot() = 0;
};

BaseUravneniy::BaseUravneniy()
{
    cout<< "Vvedite znachenie A = ";
    cin >> a;
    cout << "Vvedite znachenie B = ";
    cin >> b;
    cout << "Vvedite znachenie C = ";
    cin >> c;
}

class LineynoeUravnenie : BaseUravneniy
{
public:
    LineynoeUravnenie ();
    ~LineynoeUravnenie () {}
    void EquationRoot() ;
};

LineynoeUravnenie::LineynoeUravnenie()
{
    cout << "Uravnenie " << a << "x + " << b <<"="<< c << endl;
}
void LineynoeUravnenie::EquationRoot()
{
    double x;
    x=b/a;
    if (a*x+b==c)
    {
        cout << "Koren uravneniya raven x=" << x << endl << endl;
    }
    else
    {
        cout<<"Tochnogo Kornya net"<<endl<<endl;
    }
}

class KvadratichnoeUravnenie : BaseUravneniy
{
private:
    double c;
public:
    KvadratichnoeUravnenie();
    ~KvadratichnoeUravnenie() {}
    void EquationRoot();
};
KvadratichnoeUravnenie::KvadratichnoeUravnenie()
{
    cout << "Vvedite znachenie C = ";
    cin >> c;
    cout << "Uravnenie imeet vid " << a << "x^2 + " << b << "x +" << c << " = 0" << endl;
}
void KvadratichnoeUravnenie::EquationRoot()
{
    double x1, x2;
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << "Koren ne soderzet deystvikelnyh chisel" << endl << endl;
        return;
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
    
    cout << "Korni uravneniya ravny x1=" << x1 << ", x2=" << x2 << endl << endl;
}
int main(int argc, char *argv[])
{
    LineynoeUravnenie line;
    line.EquationRoot();
    KvadratichnoeUravnenie Sq ;
    Sq.EquationRoot();
    return 0;
}