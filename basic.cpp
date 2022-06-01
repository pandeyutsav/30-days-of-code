#include <iostream>
#include<cmath>
using namespace std;

int main()
{
      int a,b,c,x1,x2;
    cout<<"Enter values for a b and c";
    cin>>a>>b>>c;
    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"the values of x1 and x2 for qe are "<<endl<<x1<<endl<<x2 ;
    return 0;
}
