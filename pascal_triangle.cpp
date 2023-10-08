// find the element at particular place


//   brute solution ---- nCr = n! / (r! * (n-r)!)


#include<iostream>
using namespace std;

int ncr(int n, int c){
  long long res =1;
   for(int i=0; i< r; i++){
     res =res *(n-i);
     res=res/(i+1);
   }

  return res;
  
}

int pascalTri(int r, int c){
  int ele = ncr(r-1, c-1);
  return ele;
}
int main(){
  int r,c;
  cout<<"enter r";
  cin>>r;
  cout<<"enter c";
  cin>>c;

  int element = pascalTri(r, c);
  cout<<"The element at position (" << r << "," << c << ") is: " << element << "\n";
  
  return 0;
}
