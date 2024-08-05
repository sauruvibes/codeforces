//E. Area of a Circle
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n;
    cin>>n;
    double pi = 3.141592653;
    double area = pi * (n*n);
    cout<<fixed<<setprecision(9);
    cout<<area;
    return 0;
}
