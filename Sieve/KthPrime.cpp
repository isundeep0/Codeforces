#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;

int main() {

  vector<int> v; 
  int l = 1e8;
  int isPrime[l];
  
  v.push_back(2);

  for (int i = 3; i<=10000; i+=2){
    if (isPrime[i] == 0){
      for (int j = i*i; j<l; j+=2*i){
        isPrime[j] = 1;
      }
    }
  }

  for(int i=3;i<=100000000;i+=2){
        if(isPrime[i]==0)
        v.push_back(i);
  }

  int q;
  cin>>q;

  while (q--){
    int k;
    cin>>k;
    
    pr(v[k-1]);

  }

  
  return 0;

}