#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int factors=0;
    int dt;
    int factorizer;
    cout<<"Enter a number:"<<" ";
    cin>>factorizer;
    for(dt=1;dt<=factorizer;dt++){
        if (factorizer%dt==0){
            factors++;
        }
    }
    cout<<factorizer<<" has"<<" "<<factors<<" "<<"factors.";
}

