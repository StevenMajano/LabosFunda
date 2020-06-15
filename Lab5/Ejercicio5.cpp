#include <iostream>
#include "string.h"

using namespace std;

int main()
{
int l;

string Palabra,Pa,Pa2,Pa3;

cout<<"Escriba la palabra"<<endl;
cin>>Palabra;
cout<<endl;

Pa = Palabra[0];
l = Palabra.length()-1;
Pa2 = Palabra [1];
Pa3 = (Pa==Pa2)?"Su palabra empieza y termina con la misma letra":"Su palabra no empieza y no termina con la misma letra";

cout<<"Palabra escrita: "<<Pa3<<endl;
}
