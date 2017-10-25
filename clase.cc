#include <iostream>
using namespace std;
int p;
int esprimo(int x)
{
int Flag=0;
for (int i=2; i<=x/2; i++)
{
if(x%i==0)
Flag=1;
}
return Flag;
}
int main ()
{
int p;
cout<< "Dame un valor para la variable p"<<endl;
cin>>p;
do
{
if ((p%2)==0)
p=p+1;
if(esprimo(p)==0)
p=p+2;
}
while(esprimo(p)==0);

cout<<p<<endl;
return 0;
}
