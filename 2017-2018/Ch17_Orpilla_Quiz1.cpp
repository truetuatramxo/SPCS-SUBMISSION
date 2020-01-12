#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    int rows;
    int columns;
    int counter;
    int counter2;
    int subst;
    cout<<"This code will arrange the randomly assigned members of each row in descending order."<<endl;
    cout<<"Input the number of rows."<<endl;
    cin>>rows;
    cout<<"Columns."<<endl;
    cin>>columns;
    int twod[rows][columns];
    for (counter=0;counter<=columns;counter++){
        for (counter2=0;counter2<=rows;counter2++){
            twod[counter][counter2]=rand()%26+75;
        }
    }
  for (counter=0;counter<=columns;counter++){
        for (counter2=0;counter2<=rows;counter2++){
                if (twod [counter][counter2]>twod[counter][counter2+1]){
                    subst=twod [counter][counter2];
                    twod [counter][counter2]=twod[counter][counter2+1];
                    twod [counter][counter2+1]=subst;
                }
            }
    }
    for (counter=0;counter<=columns;counter++){
        for (counter2=0;counter2<=rows;counter2++){
            cout<<twod[counter][counter2]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
