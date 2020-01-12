#include <iostream>
using namespace std;
int main(){
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    int n;
    int counter=3;
    cout << "Enter a positive number: ";
    cin >> n;
    if (n>2){
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;
    while(counter <= n){
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        counter++;}}
    else if (n==2){
        cout<<"Fibonacci Series: " << t1 << ", " << t2;
    }
    else if (n==1){
        cout<<"Fibonacci Series: " << t1;
    }
    else {
        cout<<"Are you kidding me?";
    }
}
