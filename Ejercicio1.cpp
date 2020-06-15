#include <iostream>

using namespace std;

int numeros(int mayor,int menor){
int residuo;

do
{
    residuo= mayor%menor;

if(residuo !=0){
   mayor=menor;
   menor=residuo;

}

} while (residuo !=0);

return mayor, menor;

}


int main(){

int n1,n2,mayor, menor,mcd;

cout<<"Ingrese el numero mayor y menor: "; cin>>n1>>n2;

cout<<"El MCD de los numeros es: " <<numeros( mayor, menor);


}
