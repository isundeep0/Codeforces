#include <bits/stdc++.h>
using namespace std;

int main() {

  string n;
  cin>>n;

  string ans = n;
  reverse(n.begin(), n.end());

  ans += n;

  cout<<ans<<endl;
    
  return 0;
}

