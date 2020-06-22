#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

int choice;

vector<int> guesses;
int i=0;
int guess;


void gameplay(){

 cout << "U r playing\n";
 int x;
 
 cout << "Pick your range\n";
 cin >> x;
 
 int random = rand() % x++;
 cout << "The number is between 0 and  "<<x-1<<"\n";
 //cout << random << endl;
 //remove slashes to output the number 
 cout << "Your guess:\n";
 cin  >> guess;



 if(guess!=random){
     int i=1;
     
 do{

    guesses.push_back(guess); 

     if(guess<random){
         cout << "Too low\n";
     }else{cout << "Too high\n";}

 for(i=0;i<guesses.size()-1;i++){
    cout << guesses[i] << "\t";

    
}
    cout<< guess;
    cout << "\n";

     cin >> guess;
     

 }while(guess!=random);
 
guesses.clear();

 }
 cout <<"You Win\n";
 cout << "Restart?\n";
 cout << "Yes(1)/No(0)\n";
 cin >> choice;
 if (choice!=1){
     return;
 }else{gameplay();
 
 ;}
}


int main(){
srand(time(NULL));
//int choice;
cout << "Start?\n";
cout << "yes(1)/no(0)\n";
cin  >> choice;
do{
switch(choice){
    case 0:
        cout << "Not playing\n";
        return 0;
        break;

    case 1:
       
        gameplay();
        
}

}while(choice==0);
}
