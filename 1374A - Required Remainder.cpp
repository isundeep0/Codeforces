#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int x, y, n;

    cin>>x>>y>>n;

    int val = n%x - y;

    if (val == 0){
      cout<<n<<endl;
    }
    else if (val > 0){
      cout<<n-val<<endl;
    }
    else{
      cout<<n-(val+x)<<endl;
    }


  }

  return 0;
}

