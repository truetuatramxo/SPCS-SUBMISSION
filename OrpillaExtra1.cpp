#include <iostream>
using namespace std;
int main (){
    double boi;
    int counter;
    int limit;
    cout<<"Ladies and Gentlemen!"<<endl<<"This C++ progam will add two, then multiply by 2, depending on YOUR input!"<<endl<<"Let's Begin."<<endl;
    cout<<"How many times?"<<endl;
    cin>>limit;
    cout<<"Which number? (Can be anything)"<<endl;
    cin>> boi;
    for (counter=1;counter<=limit;counter++)
        if (counter%2!=0){
            boi=boi+2;
            cout<<boi<<endl;
        }
        else {
            boi=boi*2;
            cout<<boi<<endl;
        }
    cout<<"*applause*";
}
