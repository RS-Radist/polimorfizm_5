#include <iostream>
#include "General.hpp"
using namespace std;
void Show(BaseUravneniy* temp)
{
    cout<<temp->GetA()<<"x"<<"+"<<temp->GetB()<<"="<<temp->GetC();
}