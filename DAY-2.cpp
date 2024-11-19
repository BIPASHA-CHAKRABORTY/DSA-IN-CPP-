//simple calci
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char opr;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter a operation(+,-,/,*):";
    cin>>opr;
    
    if(opr == '+')
    {
        cout<<"sum:"<< a+b;
    }
    else if(opr == '*')
    {
        cout<<"sum:"<< a*b;
    }
    else if(opr == '-')
    {
        cout<<"Subtraction:"<< a-b;
    }
    else if (opr == '/')
    {
        cout<<"Divsion:"<< a/b;
    }
    else
    {
        cout<<"Wrong selection";
    }
  return 0;
}
//3 num compare 
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter value of c:";
    cin>>c;
    
    if (a>b and a>c)
    {
        cout<<"A is greater than others";
    }
    else if (b>a and b>c)
    {
        cout<<"b is greater than others";
    }
    else
    {
        cout<<"c is greater than others";
    }
  return 0;
}
