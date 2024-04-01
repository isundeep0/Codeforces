#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  int ans = -1;

  while (n--){
    int a;
    cin>>a;
    ans = max(ans, a);
  }

  cout<<ans<<endl;
    
  return 0;
}

