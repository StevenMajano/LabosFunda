#include "iostream"
#define pi 3.141569 
using namespace std;
int main(void)
{
    float r, area, perimetro, D;
    cout<<"Calcular dimensiones de un circunferencia."<< endl;
cout<<endl;
cout<<"Introduzca el radio del cirulo." << endl;
cin>>r;
perimetro= 2*pi*r;
    cout<<"El perimetro de la circunferencia es: "<<endl<<perimetro<<endl;
cout<< endl;

    cout<<"Introduce el diametro de la circunferencia"<<endl;
cin>>D;
area=(pi*D*D )/4;
cout<<"El area del circulo es:"<<endl<<area<<endl;

}