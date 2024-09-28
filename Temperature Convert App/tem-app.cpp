#include<iostream>
using namespace std;

double CelsiusToFahrenheit(double  celsius){
    return (celsius * 9/5) + 32;

}

double FahrenheitToCelsius(double fahrenheit){
    return (fahrenheit - 32) * 5/9;

}
double KelvinToCelsius(double kelvin){
    return kelvin - 273.15;

}

int main(){
    int choice;
    double temerature, convertTemperature;
    cout<<"Temperature Conversion Program"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"3. Kelvin to Celsius"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"Enter temperature: ";
    cin>>temerature;
    switch(choice){
        case 1:
        convertTemperature=CelsiusToFahrenheit(temerature);
        cout<<"Temperature in Fahrenheit: "<<convertTemperature<<endl;  
        break;

        case 2:
        convertTemperature=FahrenheitToCelsius(temerature);
        cout<<"Temperature in Celsius: "<<convertTemperature<<endl;
        break;

        case 3:
        convertTemperature=KelvinToCelsius(temerature);
        cout<<"Temperature in Celsius: "<<convertTemperature<<endl;
        break;

        return 0;
    }
}