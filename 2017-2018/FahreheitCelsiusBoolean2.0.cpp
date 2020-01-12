#include <iostream>
//okay let's do this
#include <cstdlib>
using namespace std;
int main() {
    double fahrenheit;
    double celsius;
    double kelvin;
    char voila;

cout<<"Welcome!";
cout<<"This is the converter for celsius to either kelvin or fahrenheit.";
cout<<"What is your temperature in Celsius?";
    cin>>celsius;
cout<<"Now, would you want to covert to fahrenheit, or kelvin? (F/K,or B (Both))";/*shhhhh*/
    cin>> voila;
if (voila=='b' || voila=='B')
{
    cout<<"Your temperature in Kelvin is: ";
    kelvin = celsius + 273.15;
    cout<<kelvin;
    cout<<".";
    cout<<"Your temperature is also ";
    fahrenheit = celsius*9/5 + 32;
    cout<<fahrenheit;
    cout<<" in Fahrenheit.";
}
else if (voila=='k' || voila=='K')
{

    cout<<"Your temperature in Kelvin is";
    kelvin = celsius + 273.15;
    cout<<kelvin;
    cout<<".";
}
else
{
    cout<<"Your temperature is ";
    fahrenheit = celsius*9/5 + 32;
    cout<<fahrenheit;
    cout<<" in Fahrenheit.";
}
}
