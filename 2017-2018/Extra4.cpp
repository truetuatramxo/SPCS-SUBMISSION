#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int gcf;
    int boi;
    int counter;
    cout<<"This program will display the gcf of 2 numbers. The first?"<<endl;
    cin>>num1;
    cout<<"Input the second."<<endl;
    cin>>num2;
    if (num2>num1){
        boi=num2;
        num2=num1;
        num1=boi;
    }
    for (counter=1;counter<=num2;counter++) {
        if ((num1%counter==0)&&(num2%counter==0)){
            gcf = counter;
        }
    }
    cout<<"The gcf is "<<gcf;
}
