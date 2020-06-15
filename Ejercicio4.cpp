#include <iostream>

using namespace std;

bool biciesto( int anno){

    return ((anno%4)==0 &&(anno%100) || (anno %400)==0);
}

int dia_mes(int mes, int anno){
    int dia =31;

    if(mes==4 || mes==6 || mes==9  || mes==11){
        dia=30;
    }else if(mes==2){
        dia=29;
    }else
    {
        dia==29;
    }
    return dia;
}
int main (){
    int dia, mes, anno;
    char pleca;

    cin>>dia>>pleca>>mes>>pleca>>anno; //ingresa cada digito uno por uno, ej: dia (enter), mes (enter),anno(enter) y al finalizar escriba una letra//
if(dia> dia_mes(mes, dia)){
    dia=1;
    mes++;

}else if(mes>12){
anno++;
}

cout<<dia<<'/'<<mes<<'/'<<anno;


}