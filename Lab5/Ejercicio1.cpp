#include "iostream"
using namespace std;

int main()
{
int num1, num2;
  
  cout<<"Intruzca los dos numeros que desee operar: "<<endl;
 cin>>num1>>num2;
 num1%num2;


 if (num1%num2 == 0){
 
cout<<"Los numeros son divisibles"<<endl;
 
}else
cout<< "Los numeros no son divisibles"<<endl;

}