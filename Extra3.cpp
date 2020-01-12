#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int primfact;
    int dt;
    int factorizer;
    int factors;
    int dtdt;
    cout<<"This program will show you the prime factorization of a number."<<endl<<"Input a number:"<<endl;
    cin>>factorizer;
    for (dt=2;dt<=factorizer;dt++){
        if (factorizer%dt==0){
            for (dtdt=1;dtdt<=dt;dtdt++){
                if (dt%dtdt==0){
                    factors++;
                }
            }
            if (factors==2){
                cout<<dt;
            }
        }
    }
}
