#include <iostream>
#include <windows.h>
 
 using namespace std;


void hora (){
int hh=23,mm=58,ss=57,reloj;


while (reloj){
   system("cls");
    bool reloj= true;
    cout<<hh<<":"<<mm<<":"<<ss<<endl;
    Sleep (1000);
    ss++;

    if(ss>59){
        mm++;
        ss=0;
    
    }else if(mm==59){

        hh++;
        mm=0;
        }
    else if (hh==24)
    {
        hh=0;
        mm=0;
        ss=0;
        
    
    }
}

}

 int main(){

hora();
 }
