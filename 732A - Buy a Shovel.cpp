#include <bits/stdc++.h>
using namespace std;

int main() {

  int k, r;


    cin>>k>>r;

    int ans = 1;

    int i = k;

    while (k%10 != 0 && (k-r)%10 != 0){
      k += i;
      ++ans;
    }

    cout<<ans<<endl;

  return 0;
}

