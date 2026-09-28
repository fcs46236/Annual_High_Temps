/* Program File Name: Annual_High_Temps
Programmer: Frank Sonsini
Date: September 2026
Requirements:
Write a program that calculates 2 percent increase of July average temperatures in NYC, Denver and Phoenix
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double NYC_temp = 85;
    double Denver_temp = 88;
    double Phoenix_temp = 106;
    double percent_inc = .02;
    
    cout << fixed << setprecision(2);


    cout << "Increased New York City average July high temperature = " << NYC_temp * (1 + percent_inc) << endl;
    cout << "Increased Denver average July high temperature = " << Denver_temp * (1 + percent_inc) << endl;
    cout << "Increased Phoenixaverage July high temperature = " << Phoenix_temp * (1 + percent_inc) << endl;
    return 0;
}