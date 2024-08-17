//A. Timon and Pumbaa
#include<iostream>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    int sub = a-b;
    if(sub>=0){
        cout<<sub<<endl;
    }else{
        cout<<"0";
    }
    return 0;
}
