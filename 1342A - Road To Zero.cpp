#include <bits/stdc++.h>
using namespace std;

int main() {

  int T;
  cin>>T;

  while (T--){
    
		long long x, y, a, b;
		cin>>x>>y>>a>>b;

    long long ans = abs(x-y)*a + min(x, y)*min(a*2, b);

		cout<<ans<<endl;

  }
    
  return 0;
}

