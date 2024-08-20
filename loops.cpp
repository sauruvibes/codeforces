//A. 1 to N
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    for(int i=1; i<=n; i++){
        cout<<i;
    
    cout<<endl;
    }
    return 0;
} 

//B. Even Numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = 0;
    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            cout<<i;
            cout<<endl;
            flag = 1;
        }
    }
        if(flag == 0){
            cout<<"-1\n";
        }
    return 0;
}


//D. Fixed Password
#include<iostream>
using namespace std;
int main(){
    int x;
    while(true){
        cin>>x;
        if(x == 1999){
            cout<<"Correct\n";
            break;
        }else{
            cout<<"Wrong\n";
        }
    }
    return 0;
}

//F. Multiplication table
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=12; i++){
        cout<<n<<" * "<<i<<" = "<<(n*i);
        cout<<endl;
    }
    return 0;
}

//O. Pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//P. Shape1
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//T. Shape2
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//W. Shape 3
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}

//C. Even, Odd, Positive and Negative
#include<bits/stdc++.h>
using namespace std;
int main(){
    int evenCount = 0;
    int oddCount = 0;
    int posCount = 0;
    int negCount = 0;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;     
        if(n % 2 == 0){
        evenCount++;
        }else{
        oddCount++;
        }if(n > 0){
        posCount++;
        }else if(n<0){
        negCount++;
        }    
    }
        cout<<"Even: "<<evenCount++<<endl;
        cout<<"Odd: "<<oddCount++<<endl;
        cout<<"Positive: "<<posCount++<<endl;
        cout<<"Negative: "<<negCount++<<endl;
    return 0;
}
