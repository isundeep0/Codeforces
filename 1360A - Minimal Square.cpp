#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int a, b;

    cin>>a>>b;

    int ans = max(min(a, b)*2, max(a, b));

    cout<<ans*ans<<endl;

  }

  // O(T), T = No. of TestCases

  return 0;
}
