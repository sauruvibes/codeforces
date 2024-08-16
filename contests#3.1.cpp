//A. Square or rectangle
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        long long a,b;
        cin>>a>>b;
        if(a == b){
            cout<<"Square\n";
        }else{
            cout<<"Rectangle\n";
        }
    }
    return 0;
}
