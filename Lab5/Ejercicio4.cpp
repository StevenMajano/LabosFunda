#include <iostream>
#include "string.h"
using namespace std;

int main()
{
char Palabra [10];
int longitud= 0;
cout<<"Ingrese una palabra:"<<endl;
gets(Palabra);
longitud= strlen(Palabra);
longitud%2;

if (longitud >=10 && longitud%2==0){
cout<<"Su palabra tiene 10 o mas caracteres y su longitud es par."<<endl;
}

else if (longitud >10 && longitud%2>0){
cout<<"Su palabra es tiene mas de 10 caracteres pero su longitud es impar."<<endl;
}

if(longitud<10 && longitud%2>0){ //si uso "else" en el tercer o cuarto "if" me da dos resultados
    cout<<"Su palabra tiene menos de 10 caracteres y su longitud impar."<<endl;
} 
if (longitud<10 && longitud%2==0){
cout<<"Su palabra tiene menos de 10 caracteres y su longitud es par."<<endl;
}
}