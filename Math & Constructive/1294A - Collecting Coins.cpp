#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int a, b, c, n;

    cin>>a>>b>>c>>n;

    int val = max({a, b, c})*3 - (a + b + c);

    if (n - val < 0){
      cout<<"NO"<<endl;
    }
    else{
      n = n - val;
      if (n == 0 || (n%3 == 0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }


  }

  return 0;
}
