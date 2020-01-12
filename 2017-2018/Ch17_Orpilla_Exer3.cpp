#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    int twod[8][30];
    int rows;
    int columns;
    int counter;
    int ey;
    cout<<"This code will arrange the randomly assigned members of each row in ascending order.";
    cout<<"There will be no user input :-("<<endl;
    for (columns=0;columns<=7;columns++){
        for (rows=0;rows<=29;rows++){
            twod[columns][rows]=rand()%46;
        }
    }
    for (columns=0;columns<=7;columns++){
        for (rows=0;rows<=29;rows++){
            for (counter=0;counter<=29;counter++){
                if (twod [columns][counter]>twod[columns][counter+1]){
                    ey=twod [columns][counter];
                    twod [columns][counter]=twod[columns][counter+1];
                    twod [columns][counter+1]=ey;
                }
            }
        }
    }
    for (columns=0;columns<=7;columns++){
         for (rows=0;rows<=29;rows++){
            cout<<twod[columns][rows]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
