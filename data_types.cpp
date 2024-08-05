//A. Say Hello With C++
#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello, "<<name;
    return 0;
}

//B. Basic Data Types
#include<iostream>
using namespace std;
int main(){
    int i;
    long long l;
    char c;
    float f;
    double d;
    cin>>i>>l>>c>>f>>d;
    cout<<i<<endl<<l<<endl<<c<<endl<<f<<endl<<d<<endl;
    return 0;
}

//C. Simple Calculator
#include<iostream>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    cout<<x<<" * "<<y<<" = "<<x*y<<endl;
    cout<<x<<" - "<<y<<" = "<<x-y<<endl;
    return 0;
}

//D. Difference
#include<iostream>
using namespace std;
int main(){
    long long a,b,c,d,x;
    cin>>a>>b>>c>>d;
    x=(a*b)-(c*d);
    cout<<"Difference = "<<x;
    return 0;
}

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

//J. Multiples
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if(a % b == 0){
        cout<<"Multiples\n";
    }else if(b % a == 0){
        cout<<"Multiples\n";
    }else{
        cout<<"No Multiples\n";
    }
    return 0;
}
