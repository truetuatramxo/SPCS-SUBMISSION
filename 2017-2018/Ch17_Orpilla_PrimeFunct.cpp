#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;
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
int main(){
    int counter;
    for (counter=1;counter<=101;counter++){
        if (prime(counter)=='t'){
            cout<<counter<<endl;
        }
    }
}
