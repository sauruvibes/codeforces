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

//A. Say Hello With C++
#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello, "<<name;
    return 0;
}
