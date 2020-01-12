#include<iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int counter;
    float argh[10];
    int counter2;
    float a;
    float b;
    cout<<"Hello. This program will use Insertion Sort to arrange 10 user-inputted values in ascending order.\n";
    for (counter=0;counter<=9;counter++){
        cout<<"Input the "<<counter+1<<"st/nd/rd/th element of the array."<<endl;
        cin>>argh[counter];
    }
    for (counter=0;counter<9;counter++){
        if (argh[counter]>argh[counter+1]){
            counter2=counter;
            for (counter2;counter2>=0;counter2--){
                if (argh[counter2]>argh[counter2+1]){
                    a=argh[counter2];
                    argh[counter2]=argh[counter2+1];
                    argh[counter2+1]=a;
                }
            }
        }
    }
    for (counter=0;counter<=9;counter++){
        cout<<"The "<<counter+1<<"st/nd/rd/th element is "<<argh[counter]<<endl;
    }
}
