#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin>>s;

  int n = s.size();

  if (n == 1 && (s[0] == '0' || s[0] == '1')){
    cout<<0<<endl;
    return 0;
  }

  int ans = ceil((double)n/2);

  if (n%2 == 1){
    int ones = 0;
    for (char c : s){
        if (c == '1'){
            ++ones;
        }
    }
    if (ones == 1){
        --ans;
    }
  }

  cout<<ans<<endl;
    
  return 0;
}

