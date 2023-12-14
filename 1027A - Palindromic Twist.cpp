#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--) {
    int n;
    string s;
    cin>>n>>s;

    int i = 0, j = n - 1;

    string ans = "YES";

    while (i<j){
        if (s[i] == s[j] || ((s[i]+1 == s[j]-1) || (s[i]-1 == s[j]+1))){
          ++i;
          --j;
        }
        else {
            ans = "NO";
            break;
        }
    }

    cout<<ans<<endl;

  }

  return 0;
}
