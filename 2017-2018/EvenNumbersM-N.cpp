#include <iostream>
using namespace std;
int main(){
int first;
int last;
int output;

cout<<"This .exe will give you the sum of all even integers from m-n.\n"<<"What is the first integer?\n";
cin>>first;
cout<<"Your last integer?\n";
cin>>last;
if (first==last){
        first=first-(first%2);
    cout<<first;
}
else if (last<first){
    cout<<"do you think you're funny?";
}
else {
    first=first-(first%2);
    last=last-(last%2);
    output=((first+last)/2)*(((last-first)/2)+1);
    cout<<output;
}

}
