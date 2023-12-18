#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t  --){
    int n, k;
    cin>>n>>k;

    if (n > k){
      k = k*(int)ceil((double)n/k);
    }

    cout<<(int)ceil((double)k/n)<<endl;

  }
    
  return 0;
}

