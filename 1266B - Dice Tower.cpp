#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    long long int x;
    cin>>x;

    int a = x%14;

    if (x >= 15 && a >= 1 && a <= 6){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
    
  return 0;
}

