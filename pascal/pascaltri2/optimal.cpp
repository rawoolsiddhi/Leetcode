// optimal

#include<iostream>
using namespace std;

void pascaltri(int n){
    long long ans=1;
    cout<<ans<< " ";

    for(int i=1; i<n; i++){
        ans = ans*(n-i);
        ans=ans/i;
        cout<< ans <<" ";
    }
    
}

int main(){
    int n;
    cout<<"n = \n";
    cin>>n;
    pascaltri(n);
    return 0;
}
