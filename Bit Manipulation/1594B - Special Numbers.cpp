// 2^0 = 1
// 2^1 = 2
// 2^0 + 2^1 = 3
// 2^2 = 4
// .
// .
// .
// .

// n = 2, k = 3 => ans is 3

// So, if n = 3 and k = 12 then find k's binary, 1100
// 3^3 + 3^2 = 36 is the answer.

// Below on is the most efficient way to do it.

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;


int main() {

  int mod = 1e9+7;

  int t;
  cin>>t;

  while (t--){
    int n, k;
    cin>>n>>k;
    
    ll j = 1, ans = 0;

    while (k > 0){

      if (k&1 == 1){
        ans = (ans+j)%mod;
      }

      j = (j*n)%mod;

      k = k>>1;
    }

    cout<<ans<<endl;

  }

  return 0;

}