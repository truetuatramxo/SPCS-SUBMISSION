#include <iostream>
using namespace std;
int main(){
    int counter=1;
    int boi=0;
    int least;
    int sample[10];
    for (counter=1;counter<=10;counter++){
        cout<<"Input the "<<counter<<"st/nd/rd/th number of the array.";
        cin>>sample[counter];
    }
    for(counter=1;counter<=10;counter++){
        if (sample[counter]>boi){
            boi=sample[counter]+0;
        }
    }
    cout<<endl<<boi<<" is the greatest number of your array.";
    for(counter=1;counter<=10;counter++){
        if (sample[counter]<boi){
            boi=sample[counter]+0;
        }
    }
    cout<<endl<<"The smallest number is "<<boi;
}
