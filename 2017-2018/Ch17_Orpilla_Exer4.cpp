#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
double add(double a, double b){
    double s=a+b;
    return s;
}
double mult(double a, double b){
    double p=a*b;
    return p;
}
double subt(double a, double b){
    double d=a-b;
    return d;
}
double divide(double a, double b){
    double q=a/b;
    return q;
}
int main (){
    char choice='n';
    double ok;
    char choice2;
    double a;
    double b;
    double endall;
    cout<<"This program will either display the square roots of 1-36 or calculate a basic arithmetic operation."<<endl;
    cout<<"Select A for the 1st or B for the latter."<<endl;
    while (choice!='a'||choice!='b'||choice!='A'||choice!='B'){
        cin>>choice;
        if (choice=='A'||choice=='a'){
            cout<<"You chose choice A.";
            for (ok=1;ok<=36;ok++){
                cout<<endl<<sqrt(ok)<<endl;
            }
        }
        else if (choice=='B'||choice=='b'){
            cout<<"Type S for addition, P for multiplication, D for subtraction, or Q for division."<<endl;
            cin>>choice2;
            cout<<"Choose the 2 numbers to be operated on."<<endl;
            cin>>a;
            cin>>b;
            if (choice2=='S'||choice2=='s'){
                endall=add(a,b);
                cout<<endl<<endall<<" is their sum.";
            }
            else if (choice2=='P'||choice2=='p'){
                endall=mult(a,b);
                cout<<endl<<endall<<" is their product.";
            }
            else if (choice2=='D'||choice2=='d'){
                endall=subt(a,b);
                cout<<endl<<endall<<" is their difference.";
            }
            else if (choice2=='Q'||choice2=='q'){
                endall=divide(a,b);
                cout<<endall<<" is their quotient.";
            }
        }
        else {
            cout<<"why must you hurt me like this";
        }
    }
    return 0;
}
