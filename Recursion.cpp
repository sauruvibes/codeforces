//A. Print Recursion

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"I love Recursion"<<endl;
    }
    return 0;
}

//B. Print from 1 to N
#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
    return 0;
}


//G. Pyramid
#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=(i*2)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
