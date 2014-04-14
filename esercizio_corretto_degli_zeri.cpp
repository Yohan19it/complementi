//esercizio zeri
#include<iostream>
using namespace std;
int main()
{
    float x,a,b;
    float y;
	cout<<"Inserisci il valore di a ";
	cin>>a;
	cout<<"Inserisci il valore di b ";
	cin>>b;
	for(x=a;x<=b;x++)
	{
                     y=(x*x)-(4*x)+3;
                     if(y==0)
                     {
                             cout<<"La y in "<<x<<" vale 0 \n";
                     }

 }
	system("pause");
	return 0;
}

