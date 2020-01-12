#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
int main (){
    srand(time(NULL));
    int guess=rand ()%100+1;
    int user=1;
    cout<<"I just randomly produced a number."<<endl<<"Guess it."<<endl;
    while (user!=guess){
        cin>>user;
        if (user!=guess){
            cout<<"ENGK ENGK. Try again."<<endl;
            if (user<guess){
                cout<<"Try making your number a little higher."<<endl;
            }
            else {
                cout<<"Try making your guess a little lower."<<endl;
            }
        }
    }
    cout<<"Oh dear. You guessed it right. It was "<<user<<".";
}
