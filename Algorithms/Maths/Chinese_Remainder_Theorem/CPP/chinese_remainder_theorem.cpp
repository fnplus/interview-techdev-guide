#include<bits/stdc++.h>
using namespace std;
int calcx(int n,int dv[], int rem[]){
  int x=1;
  while(true){
    int i=0;
    for(i=0; i<n; i++){
      if(x%dv[i]!=rem[i]){
        break;
      }
    }
    if(i==n){
      break;
    }
    x++;
  }
  return x;
}
int main() {
  int n;
  cout<<"\nEnter number of terms: ";
  cin>>n;
  int dv[n],rem[n];
  cout<<"\nEnter divisor array: ";
  for(int i=0; i<n; i++){
    cin>>dv[i];
  }
  cout<<"\nEnter remainder array: ";
  for(int i=0; i<n; i++){
    cin>>rem[i];
  }
  cout<<"\nThe value of x is "<<calcx(n,dv,rem)<<"\n";
}
