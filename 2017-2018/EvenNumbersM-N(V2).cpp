#include <iostream>
using namespace std;
int main(){
int first;
int last;
int counter;
int output;
cout<<"This .exe will give you the sum of all even integers from m-n.\n"<<"What is the first integer?\n";
cin>>first;
cout<<"Your last integer?\n";
cin>>last;
counter=first/2;
if (first==last&&first%2==0){
    cout<<first;
    }
else if (first==last&&first%2==1){
    cout<<"error";
}
else if (last<first){
    cout<<"do you think you're funny?";
}
else {
    first=first+(first%2);
    last=last-(last%2);
    while (counter<=last/2){
        cout<<first<<endl;
        first=first+2;
        counter++;
    }
}
}
