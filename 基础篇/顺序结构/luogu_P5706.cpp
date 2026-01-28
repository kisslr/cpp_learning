#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    double total;
    int person;
    cin >> total >> person;
    printf("%.3lf\n%d",total/person,2*person);
    return 0;
}