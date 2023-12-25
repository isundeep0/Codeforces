// This is a very simple Problem although you need to do some paper work.

// The right question you need to ask, are:

// From 1 to n, what is the maximum possible XOR sum for any two elements ?
// Do the XOR of (n XOR ~n). This is the final answer when k > 1.

// Why ?

// Because no matter how many elements you take and perform xor, it will never exceed (n XOR ~n).
// But, finding complement for n is somewhat like a little...

// Alternatively, we can go for a better approach. 
// The comlement of any number will be less than that number and If you XOR them it will give the next 2^i-1.
// No matter what for any number you perform XOR, (n XOR ~n), The results will always be NEXT (2^i - 1) you can verify it.

// 1 3 7 15 31 63...

// How do you relate them?

// 1 2(1) + 1 = 3, 2(3) + 1 = 7, 2(7) + 1= 15, 2(15) + 1 = 31, 2(31) + 1 = 63, .......


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;


int main() {

  ll n, k;
  cin>>n>>k;

  if (k == 1){
    cout<<n<<endl;
    return 0;
  }

  ll m = 1;

  while (m < n){
    m = 2*m + 1;
  }

  cout<<m<<endl;

  return 0;

}