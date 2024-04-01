#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin>>n;

  long long ans;

  ans = ((double)n/2)*(12 + (n-1)*6) + 1;

  cout<<ans<<endl;

  
  return 0;
}

