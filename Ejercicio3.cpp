#include <iostream>

using namespace std;


bool anno(int a){
bool anno(int a);
if (a%4!=0 ) return false;

else if(a%100 != 0 ) return true;

else if(a%400 != 0) return false;

return true;

}

int main(){
int a;


cout<<"Ingrese un anno: ";cin>>a;

if (anno(a)){
    cout<<"El anno es biciesto";
}
else
{
    cout<<"El anno no es biciesto";
}


}