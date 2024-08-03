//[ A ] 1 to N
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

//[B] Even Numbers
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
