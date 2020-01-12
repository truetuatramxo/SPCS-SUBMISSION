#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
    double nani[10];
    int a;
    int b;
    int counter;
    bool boi;
    int counter2;
    cout<<"This program will arrange 10 user-inputted values in ascending order.\n";
    for (counter=0;counter<=9;counter++){
        cout<<"Enter the "<<counter<<" number.";
        cin>>nani[counter];
    }
    if (nani[0]<=nani[1]<=nani[2]<=nani[3]<=nani[4]<=nani[5]<=nani[6]<=nani[7]<=nani[8]<=nani[9]){
        boi=false;
    }
    for(counter2=1;counter2<=9;counter2++){
        for (counter=0;counter<=8;counter++){
            if (nani[counter]>nani[counter+1]){
                a=nani[counter];
                nani[counter]=nani[counter+1];
                nani[counter+1]=a;
            }
        }
        if (nani[0]<=nani[1]<=nani[2]<=nani[3]<=nani[4]<=nani[5]<=nani[6]<=nani[7]<=nani[8]<=nani[9]){
            boi=true;
        }
    }
    cout<<"The numbers in ascending order are:\n";
    for (counter=0;counter<=9;counter++){
        cout<<nani[counter]<<endl;
    }
    return 0;
}
