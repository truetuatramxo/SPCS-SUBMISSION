#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
/*write a fuinction that determines if a number is prime or not
write  function that determines the nth number of the fibonacci sequence
use these 2 functgins to print out the first 7 nos. pf the fibopnacci sequence that are also prime*/
char prime (int p){
    int dt;
    int factors=0;
    char isit='f';
    for(dt=1;dt<=p;dt++){
        if (p%dt==0){
            factors++;
        }
    }
    if (factors==2){
        isit='t';
        return isit;
    }
    else {
        return isit;
    }
}
int fibonacci(int fib){
    int fib1=0;
    int fib2=1;
    int output;
    if (fib==1){
        return fib1;
    }
    else if (fib==2){
        return fib2;
    }
    else {for (int counter=3;counter<=fib;counter++){
            output=fib1+fib2;
            fib1=fib2+0;
            fib2=output+0;
          }
        return output;
    }
}
int main(){
    int counter=1;
    int input;
    int fib=1;
    cout<<"This program will output the first few prime fibonacci numbers.";
    cout<<endl<<"Input the first x which you want."<<endl;
    cin>>input;
    while (counter<=input){
        if (prime(fibonacci(fib))=='t'){
            cout<<fibonacci(fib)<<endl;
            counter++;
        }
        fib++;
    }
}
