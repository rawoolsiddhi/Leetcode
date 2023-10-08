//print the whole row particularly from pascal triangle.

// brute
#include<iostream>
using namespace std;


int ncr(int n, int r){
  long long res =1;

  for(int i=0; i<r; i++){
    res =res*(n-i);
    res =res/ (i+1);
  }
  return res;
}

void pascaltriangle(int n){
   for(int c=1; c<=n; c++){
     cout<<ncr(n-1, c-1) <<" ";
   }
}
int main(){
  int n;
  cout<<"enter c \n";
  cin>>n;
   pascaltriangle(n);

  return 0;
}
