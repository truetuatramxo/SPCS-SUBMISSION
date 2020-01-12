#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
//0,1,1,2,3,5,8,13,21...
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
int main (){
    int fib;
    cin>>fib;
    cout<<fibonacci(fib);
}
