#include <iostream>
#include <cmath>
using namespace std;
int age;
int gender;
double mass;
double height;
double multi;
double extra;


void man(){

    cout << "Add meg a korod!\n";
    cin >> age;
    cout << "Add meg a sulyodat!\n";
    cin >> mass;
    cout << "Add meg a magassagodat(m pl.: 1.85 ha 185 cm vagy)\n";
    cin >> height;

    if(age>=11 && age<=18){
        multi=17.5;
        extra=651;


    }else if(age>=19 && age<=30){
        multi=15.3;
        extra=679;

    }else{
        multi=11.6;
        extra=879;

    }


}
void woman(){
    cout << "Add meg a korod!\n";
    cin >> age;
    cout << "Add meg a sulyodat!\n";
    cin >> mass;
    cout << "Add meg a magassagodat(m pl.: 1.85 ha 185 cm vagy)\n";
    cin >> height;
    if(age>=11 && age<=18){
        multi=12.2;
        extra=746;



    }else if(age>=19 && age<=30){
        multi=14.7;
        extra=497;


    }else{
        multi=8.7;
        extra=829;

    }

    


}


int main(){

    cout << "add meg a nemedet Ferfi(0)/No(1)\n";
    cin >> gender;
    if(gender==0){
        man();
    }else if (gender==1)
    {
        woman();
    }else{cout << "Ervenytelen\n"; cin >> gender;}

if(height>2.5){
    height=height/100.0;
}

double calc=pow(height,2);
double calories=multi*mass+extra;
double bmi=mass/calc;

        cout << "A testtomeg indexed: "<<bmi<<endl;
        cout << "Napi kaloriabevitel hogy tartsd a sulyod: " << calories <<endl;
   int anti_bmi=18.6*calc;     
   int anti_bmi_extra=25*calc;
   int anti_calories=multi*anti_bmi_extra+extra;
   int anti_calories_extra=multi*anti_bmi+extra;

    cout <<bmi<<endl;
    if(bmi<=18.5){
        cout << "Jelenleg sovany vagy.\n";  
        cout << "Ahoz hogy normal erteken belul legyel legalabb "<< anti_bmi<< "kg-nak kellene lenned"<< endl;
        cout << "amihez minimum "<<anti_calories_extra<< " kaloriat kellene fogyasztanod"<<endl;   
    }else if(bmi>=18.6 && bmi<=25){
         cout << "Jelenleg normalis testsullyal rendelkezel.\n";       
    }else if(bmi>=25.1 && bmi<=30){

        cout << "Jelenleg tulsulyos vagy.\n";  
        cout << "Ahoz hogy normal erteken belul legyel legalabb "<< anti_bmi_extra<< "kg-nak kellene lenned"<< endl;
        cout << "amihez maximum "<<anti_calories<< " kaloriat kellene fogyasztanod"<<endl;     
    }else if(bmi>=30.1){
        cout << "Jelenleg elhizott vagy.\n";  
        cout << "Ahoz hogy normal erteken belul legyel legalabb "<< anti_bmi_extra<< "kg-nak kellene lenned"<< endl;
        cout << "amihez maximum "<<anti_calories<< " kaloriat kellene fogyasztanod"<<endl;       
    }
    
 



    //cout << age <<endl << mass <<endl << height <<endl;
}
    