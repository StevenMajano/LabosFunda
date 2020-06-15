#include "iostream"
using namespace std;
int main()
{
int Cantidad, Total;
float Precio;
string Nombre;

cout<<endl;
cout<<"Nombre del producto: ";
cin>>Nombre;
cout<<endl;

cout<<"Cantidad del producto: ";
cin>>Cantidad;
cout<<endl;

cout<<"Precio del producto: ";
cin>>Precio;
cout<<endl;

cout<<"Total a pagar: ";
Total= Cantidad*Precio;
cout<<Total<<endl;

}
