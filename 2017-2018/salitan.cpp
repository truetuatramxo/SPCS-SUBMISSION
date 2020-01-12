#include <iostream>
using namespace std;
int main () {
int lamao [5]={5, 10, 15, 20, 25};
int y;
int x;
cout<<"Which elements of the array do you want to add? Numbers are 5, 10, 15, 20, 25. Use 0-4, respectively."<<endl;
cin>>x;
cout<<"The second element"<<endl;
cin>>y;
cout<<endl<<lamao[y]+lamao[x];
}
