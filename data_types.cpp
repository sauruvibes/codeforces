
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

//I. Welcome for you with Conditions
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if(a >= b){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}

//L. The Brothers
#include<iostream>
using namespace std;
int main(){
    string x;
    string y;
    cin>>x>>y;
    string z;
    string a;
    cin>>z>>a;
    if( y == a){
        cout<<"ARE Brothers\n";
    }else{
        cout<<"NOT\n";
    }
    return 0;
}

// O. Calculator
#include<iostream>
using namespace std;
int main(){
    int a, b;
    char c;
    cin>>a>>c>>b;
    if(c == '+'){
        cout<<(a+b)<<endl;
    }else if(c == '*' ){
        cout<<a*b<<endl;
    }else if(c == '-'){
        cout<<(a-b)<<endl;
    }else if(c == '/'){
        cout<<(a/b)<<endl;
    }
    return 0;
}

//Q. Coordinates of a Point
#include<iostream>
using namespace std;
int main(){
    double x, y;
    cin>>x>>y;
    if(x == 0 && y == 0){
        cout<<"Origem\n";
    }else if(x > 0 && y > 0){
        cout<<"Q1\n";
    }else if( x > 0 && y < 0){
        cout<<"Q4\n";
    }else if( x < 0 && y < 0){
        cout<<"Q3\n";
    }else if( x < 0 && y > 0){
        cout<<"Q2\n";
    }else if(x == 0 && y != 0){
        cout<<"Eixo Y\n";
    }else if(x != 0 && y == 0){
        cout<<"Eixo X\n";
    }
    return 0;
}

//V. Comparison

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char s;
    cin>>a>>s>>b;
    if (s == '>'){
        if(a > b){
            cout<<"Right\n";
        }else{
            cout<<"Wrong\n";
        }
    }
    if (s == '<'){
        if(a < b){
            cout<<"Right\n";
        }else{
            cout<<"Wrong\n";
        }
    } 
    if ( s == '='){
        if(a == b){
            cout<<"Right\n";
        }else{
            cout<<"Wrong\n";
        }
    }   
    return 0;
}


//F. Digits Summation
#include<iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    int lastDig1 = n%10;
    int lastDig2 = m%10;
    int sum = 0;
    sum = lastDig1 + lastDig2;
    cout<<sum<<endl;
    return 0;
}

//W. Mathematical Expression
#include<iostream>
using namespace std;
int main(){
    long long a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    switch(s){
        case '+' : if(a + b == c)
        cout<<"Yes";
        else
        cout<<a+b;
        break;
        case '-' : if(a - b == c)
        cout<<"Yes";
        else
        cout<<a-b;
        break;
        case '*' : if(a * b == c)
        cout<<"Yes";
        else
        cout<<a*b;
        break;        
    }
    return 0;
}
