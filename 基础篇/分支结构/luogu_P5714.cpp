#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double m,h,bmi;
    cin >> m >> h;
    bmi = m/pow(h,2);
    if(bmi<18.5){
        cout << "Underweight";
    }
    else if(bmi<24){
        cout << "Normal";
    }
    else{
        cout <<bmi << endl << "Overweight";
    }
    return 0;
}