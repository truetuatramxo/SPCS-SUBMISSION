//CS2 Source Code Template for ay 2017-2018 rev. 0

/*
Program: CS2 Qtr4 CodExerFinal, <application title>
Programmer: <firstname midinitial surname>
Section: <section name>hjuyuy
Date: dd monthname yyyy
*/
//note: as of now, only temperature works.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main (){
    char convert;
    char convert2;
    char repeat='Y';
    double conversion;
    int easteregg=1;
    while (repeat=='Y'){
        cout<<"This program will convert a given unit to any compatible unit."<<endl;
        cout<<"Input T for time, M for money, D for distance, E for temperature, A for mass, or V for volume."<<endl;
        cin>>convert;
        if (convert=='A'){
            cout<<"What do you want to convert first? (M=milligrams, G=grams, L=pounds, and T= metric tons.)"<<endl;
            cin>>convert;
            cout<<"Then converted to what?"<<endl;
            cin>>convert2;
            if (convert=='M'&&convert2=='G'){
                cout<<"Input the distance in milligrams."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in grams is "<<conversion/1000<<" g"<<endl;
            }
            else if (convert=='M'&&convert2=='L'){
                cout<<"Input the distance in milligrams."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in pounds is "<<conversion/453592<<" lbs"<<endl;
            }
            else if (convert=='M'&&convert2=='T'){
                cout<<"Input the distance in milligrams."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in metric tons is "<<conversion/1000000000<<" mt"<<endl;
            }
            else if (convert=='G'&&convert2=='M'){
                cout<<"Input the distance in grams."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in milligrams is "<<conversion*1000<<" mg"<<endl;
            }
            else if (convert=='G'&&convert2=='L'){
                cout<<"Input the distance in grams."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in pounds is "<<conversion/453.592<<" lbs"<<endl;
            }
            else if (convert=='G'&&convert2=='T'){
                cout<<"Input the distance in grams."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in metric tons is "<<conversion/1000000<<" mt"<<endl;
            }
            else if (convert=='L'&&convert2=='M'){
                cout<<"Input the distance in pounds."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in milligrams is "<<conversion*453592<<" mg"<<endl;
            }
            else if (convert=='L'&&convert2=='G'){
                cout<<"Input the distance in pounds."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in grams is "<<conversion*453.592<<" g"<<endl;
            }
            else if (convert=='L'&&convert2=='T'){
                cout<<"Input the distance in pounds."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in metric tons is "<<453.592*conversion/1000000<<" g"<<endl;
            }
            else if (convert=='T'&&convert2=='M'){
                cout<<"Input the distance in metric tons."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in milligrams is "<<conversion*1000000000<<" mg"<<endl;
            }
            else if (convert=='T'&&convert2=='G'){
                cout<<"Input the distance in metric tons."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in grams is "<<conversion*1000000<<" g"<<endl;
            }
            else if (convert=='T'&&convert2=='L'){
                cout<<"Input the distance in metric tons."<<endl;
                cin>>conversion;
                cout<<"Your inputted mass in pounds is "<<conversion*2204.62<<" lbs"<<endl;
            }
            else {
                cout<<"error"<<endl;
            }
        }
        else if (convert=='T'){
            cout<<"What do you want to convert first? (M=Milliseconds, S=Seconds, I=Minutes, H=Hours)"<<endl;
            cin>>convert;
            cout<<"Then converted to what?"<<endl;
            cin>>convert2;
            if (convert=='M'&&convert2=='S'){
                cout<<"Input the time in milliseconds."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in seconds is "<<conversion/1000<<" s"<<endl;
            }
            else if (convert=='M'&&convert2=='I'){
                cout<<"Input the time in milliseconds."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in minutes is "<<conversion/60000<<" mins"<<endl;
            }
            else if (convert=='M'&&convert2=='H'){
                cout<<"Input the time in milliseconds."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in hours is "<<conversion/3600000<<" hrs"<<endl;
            }
            else if (convert=='S'&&convert2=='M'){
                cout<<"Input the time in seconds."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in milliseconds is "<<conversion*1000<<" ms"<<endl;
            }
            else if (convert=='S'&&convert2=='I'){
                cout<<"Input the time in seconds."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in minutes is "<<conversion/60<<" mins"<<endl;
            }
            else if (convert=='S'&&convert2=='H'){
                cout<<"Input the time in seconds."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in hours is "<<conversion/3600<<" hrs"<<endl;
            }
            else if (convert=='I'&&convert2=='M'){
                cout<<"Input the time in minutes."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in milliseconds is "<<conversion*60000<<" ms"<<endl;
            }
            else if (convert=='I'&&convert2=='S'){
                cout<<"Input the time in minutes."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in seconds is "<<conversion*60<<" s"<<endl;
            }
            else if (convert=='I'&&convert2=='H'){
                cout<<"Input the time in minutes."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in hours is "<<conversion/60<<" hrs"<<endl;
            }
            else if (convert=='H'&&convert2=='M'){
                cout<<"Input the time in hours."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in minutes is "<<conversion*3600000<<" mins"<<endl;
            }
            else if (convert=='H'&&convert2=='S'){
                cout<<"Input the time in hours."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in seconds is "<<conversion*3600<<" s"<<endl;
            }
            else if (convert=='H'&&convert2=='I'){
                cout<<"Input the time in hours."<<endl;
                cin>>conversion;
                cout<<"Your inputted time in minutes is "<<conversion*60<<" mins"<<endl;
            }
            else {
                cout<<"error"<<endl;
            }
        }
        else if (convert=='M'){
            cout<<"What do you want to convert first? (Y=Japanese Yen, P=Philippine Pesos, D=American Dollars, E=Euros, and B=Bitcoin)"<<endl<<"Note: Due to the unstable nature of currencies, we will use the conversion rates from 5 May, 2018."<<endl;
            cin>>convert;
            cout<<"Then converted to what?"<<endl;
            cin>>convert2;
            if (convert=='Y'&&convert2=='P'){
                cout<<"Input the value in yen."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in peso is "<<conversion*0.47<<" php"<<endl;
            }
            else if (convert=='Y'&&convert2=='D'){
                cout<<"Input the value in yen."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in dollars is "<<conversion*0.0092<<" usd"<<endl;
            }
            else if (convert=='Y'&&convert2=='E'){
                cout<<"Input the value in yen."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in euro is "<<conversion*0.0077<<" euro"<<endl;
            }
            else if (convert=='Y'&&convert2=='B'){
                cout<<"Input the value in yen."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in bitcoin is "<<conversion/1049053.30<<" btc"<<endl;
            }
            else if (convert=='P'&&convert2=='Y'){
                cout<<"Input the value in peso."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in yen is "<<conversion/0.47<<" jpy"<<endl;
            }
            else if (convert=='P'&&convert2=='D'){
                cout<<"Input the value in peso."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in dollar is "<<conversion*0.019<<" usd"<<endl;
            }
            else if (convert=='P'&&convert2=='E'){
                cout<<"Input the value in peso."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in euro is "<<conversion*0.016<<" euro"<<endl;
            }
            else if (convert=='P'&&convert2=='B'){
                cout<<"Input the value in peso."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in bitcoin is "<<conversion*0.000002<<" btc"<<endl;
            }
            else if (convert=='D'&&convert2=='Y'){
                cout<<"Input the value in dollars."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in yen is "<<conversion/0.0092<<" jpy"<<endl;
            }
            else if (convert=='D'&&convert2=='P'){
                cout<<"Input the value in dollars."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in pesos is "<<conversion*51.74<<" php"<<endl;
            }
            else if (convert=='D'&&convert2=='E'){
                cout<<"Input the value in dollars."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in euro is "<<conversion*0.84<<" euro"<<endl;
            }
            else if (convert=='D'&&convert2=='B'){
                cout<<"Input the value in dollars."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in bitcoin is "<<conversion*0.0001<<" btc"<<endl;
            }
            else if (convert=='E'&&convert2=='Y'){
                cout<<"Input the value in euro."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in yen is "<<conversion/0.0077<<" jpy"<<endl;
            }
            else if (convert=='E'&&convert2=='P'){
                cout<<"Input the value in euro."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in peso is "<<conversion*61.82<<" php"<<endl;
            }
            else if (convert=='E'&&convert2=='D'){
                cout<<"Input the value in euro."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in dollars is "<<conversion*1.19<<" usd"<<endl;
            }
            else if (convert=='E'&&convert2=='B'){
                cout<<"Input the value in euro."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in bitcoin is "<<conversion*0.00012<<" btc"<<endl;
            }
            else if (convert=='B'&&convert2=='Y'){
                cout<<"Input the value in bitcoin."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in yen is "<<conversion*1049053.30<<" jpy"<<endl;
            }
            else if (convert=='B'&&convert2=='P'){
                cout<<"Input the value in bitcoin."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in peso is "<<conversion*497963.55<<" php"<<endl;
            }
            else if (convert=='B'&&convert2=='D'){
                cout<<"Input the value in bitcoin."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in dollar is "<<conversion*9625.00<<" usd"<<endl;
            }
            else if (convert=='B'&&convert2=='E'){
                cout<<"Input the value in bitcoin."<<endl;
                cin>>conversion;
                cout<<"Your inputted value in euro is "<<conversion*8049.38<<" euro"<<endl;
            }
            else if (easteregg==1){
                cout<<"oyo (martin ruiz, 2k16). you found an easter egg. open the link in your browser for a reward. https://www.youtube.com/watch?v=dQw4w9WgXcQ "<<endl;
                easteregg++;
            }
            else if (easteregg==2){
                cout<<"buya. you found a second one. open the link for yet another reward. https://www.youtube.com/watch?v=wuyxOP4czEo."<<endl;
                easteregg++;
            }
            else if (easteregg==3){
                cout<<"persistent one, huh. here's a 3rd easter egg. https://www.youtube.com/watch?v=Wrom03sWf-s."<<endl;
                easteregg++;
            }
            else if (easteregg==4){
                cout<<"slightly annoying, yet intriguing. take this (note: not mine) https://www.youtube.com/watch?v=d8vHhkPjcQ4"<<endl;
                easteregg++;
            }
            else if (easteregg==5){
                cout<<"argghhh. https://www.youtube.com/watch?v=nZXgPDL647c "<<endl;
                easteregg++;
            }
            else if (easteregg<=10&&easteregg>=6){
                cout<<"this is the last straw."<<endl;
                easteregg++;
            }
            else if (easteregg>10){
                cout<<"are you happy? data:image/jpeg;base64,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"<<endl;
                easteregg++;
            }
        }
        else if (convert=='D'){
            cout<<"What do you want to convert first? (N=Nanometers, M=Meters, L=Lightyear, and P=Parsecs)"<<endl;
            cin>>convert;
            cout<<"Then converted to what?"<<endl;
            cin>>convert2;
            if (convert=='M'&&convert2=='P'){
                cout<<"Input the distance in meters."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in parsecs is "<<conversion/30856780000000000<<" pc"<<endl;
            }
            else if (convert=='M'&&convert2=='L'){
                cout<<"Input the distance in meters."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in lightyears is "<<conversion/9461000000000000<<" ly"<<endl;
            }
            else if (convert=='M'&&convert2=='N'){
                cout<<"Input the distance in meters."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in nanometers is "<<conversion*1000000000<<" nm"<<endl;
            }
            else if (convert=='N'&&convert2=='M'){
                cout<<"Input the distance in nanometers."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in meters is "<<conversion/1000000000<<" m"<<endl;
            }
            else if (convert=='N'&&convert2=='L'){
                cout<<"Input the distance in nanometers."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in lightyears is "<<conversion/(10000*94610000000)<<" *10^10 ly"<<endl;
            }
            else if (convert=='N'&&convert2=='P'){
                cout<<"Input the distance in nanometers."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in parsecs is "<<conversion/(1000*30856780000)<<" *10^12 pc"<<endl;
            }
            else if (convert=='P'&&convert2=='M'){
                cout<<"Input the distance in parsecs."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in meters is "<<30856780000000000*conversion<<" m"<<endl;
            }
            else if (convert=='P'&&convert2=='N'){
                cout<<"Input the distance in parsecs."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in nanometers is "<<30856780000000000*conversion*1000000000<<" nm"<<endl;
            }
            else if (convert=='P'&&convert2=='L'){
                cout<<"Input the distance in parsecs."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in lighyears is "<<3.26156*conversion<<" ly"<<endl;
            }
            else if (convert=='L'&&convert2=='P'){
                cout<<"Input the distance in lightyears."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in parsecs is "<<conversion/3.26156<<" pc"<<endl;
            }
            else if (convert=='L'&&convert2=='M'){
                cout<<"Input the distance in lightyears."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in meters is "<<conversion*9461000000000000<<" m"<<endl;
            }
            else if (convert=='L'&&convert2=='N'){
                cout<<"Input the distance in lightyears."<<endl;
                cin>>conversion;
                cout<<"Your inputted distance in nanometers is "<<9461000000000000*conversion*1000000000<<" nm"<<endl;
            }
            else {
                cout<<"error"<<endl;
            }
        }
        else if (convert=='E'){
            cout<<"What do you want to convert first? (C=Celsius, F=Fahrenheit, and K=Kelvin)"<<endl;
            cin>>convert;
            cout<<"Then converted to what?"<<endl;
            cin>>convert2;
            if (convert=='C'&&convert2=='K'){
                cout<<"Input the temperature in celsius."<<endl;
                cin>>conversion;
                cout<<"Your inputted temperature in Kelvin is "<<conversion+273.15<<" degrees Kelvin."<<endl;
            }
            else if (convert=='K'&&convert2=='C'){
                cout<<"Input the temperature in Kelvin."<<endl;
                cin>>conversion;
                cout<<"Your inputted temperature in Celsius is "<<conversion-273.15<<" degrees Celsius."<<endl;
            }
            else if (convert=='C'&&convert2=='F'){
                cout<<"Input the temperature in Celsius."<<endl;
                cin>>conversion;
                cout<<"Your inputted temperature in Fahrenheit is "<<conversion*1.8+32<<" degrees Fahrenheit."<<endl;
            }
            else if (convert=='F'&&convert2=='C'){
                cout<<"Input the temperature in Fahrenheit."<<endl;
                cin>>conversion;
                cout<<"Your inputted temperature in Celsius is "<<(conversion-32)/1.8<<" degrees Celsius."<<endl;
            }
            else if (convert=='K'&&convert2=='F'){
                cout<<"Input the temperature in Kelvin."<<endl;
                cin>>conversion;
                cout<<"Your inputted temperature in Fahrenheit is "<<1.8*(conversion+273.15)+32<<" degrees Fahrenheit."<<endl;
            }
            else if (convert=='F'&&convert2=='K'){
                cout<<"Input the temperature in Fahrenheit."<<endl;
                cin>>conversion;
                cout<<"Your inputted temperature in Kelvin is "<<(conversion-32)/1.8+273.15<<" degrees Kelvin."<<endl;
            }
            else {
                cout<<"error"<<endl;
            }
        }
        else if (convert=='V'){
            cout<<"What do you want to convert first? (C=Cubic centimeters, M=Cubic Meters, G=Gallons, and L=Liters)"<<endl;
            cin>>convert;
            cout<<"Then converted to what?"<<endl;
            cin>>convert2;
            if (convert=='C'&&convert2=='L'){
                cout<<"Input the volume in cubic centimeters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in liters is "<<1000*conversion<<" l."<<endl;
            }
            else if (convert=='C'&&convert2=='G'){
                cout<<"Input the volume in cubic centimeters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in gallons is "<<3785.41178*conversion<<" gallons."<<endl;
            }
            else if (convert=='C'&&convert2=='M'){
                cout<<"Input the volume in cubic centimeters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in cubic meters is "<<1000000*conversion<<" m^3."<<endl;
            }
            else if (convert=='M'&&convert2=='L'){
                cout<<"Input the volume in cubic meters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in Liters is "<<1000*conversion<<" L."<<endl;
            }
            else if (convert=='M'&&convert2=='G'){
                cout<<"Input the volume in cubic meters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in gallons is "<<264.172052*conversion<<" gallons."<<endl;
            }
            else if (convert=='M'&&convert2=='C'){
                cout<<"Input the volume in cubic meters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in cubic centimeters is "<<1000000*conversion<<" cm^3."<<endl;
            }
            else if (convert=='G'&&convert2=='C'){
                cout<<"Input the volume in gallons."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in cubic centimeters is "<<4546.09*conversion<<" cm^3."<<endl;
            }
            else if (convert=='G'&&convert2=='L'){
                cout<<"Input the volume in gallons."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in liters is "<<4.54609*conversion<<" L."<<endl;
            }
            else if (convert=='G'&&convert2=='M'){
                cout<<"Input the volume in gallons."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in cubic meters is "<<0.003785412*conversion<<" m^3."<<endl;
            }
            else if (convert=='L'&&convert2=='C'){
                cout<<"Input the volume in liters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in cubic centimeters is "<<1000*conversion<<" cm^3."<<endl;
            }
            else if (convert=='L'&&convert2=='G'){
                cout<<"Input the volume in liters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in gallons is "<<0.2199692*conversion<<" gallons."<<endl;
            }
            else if (convert=='L'&&convert2=='M'){
                cout<<"Input the volume in liters."<<endl;
                cin>>conversion;
                cout<<"Your inputted volume in cubic meters is "<<0.1000*conversion<<" m^3."<<endl;
            }
            else {
                cout<<"error"<<endl;
            }
        }
        cout<<"Would you like to convert again? [Y/N]"<<endl;
        cin>>repeat;
        system("CLS");
    }
}
