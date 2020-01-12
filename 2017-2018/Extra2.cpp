#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int dt;
    int factorizer;
    int choice;
    int counter;
    int boi;
    cout<<"These are the first 4 perfect numbers."<<endl<<"Perfect numbers are numbers that are equal to the sum of their factors not equal to themselves.";
    for (counter=1;counter<=4;choice++){
        for (dt=1;dt<=factorizer;dt++){
            if (factorizer%dt==0){
                boi=boi+dt;
            }
        }
        if ((boi/2)==choice){
            cout<<endl<<choice<<endl;
            counter++;
        }
    }
}
