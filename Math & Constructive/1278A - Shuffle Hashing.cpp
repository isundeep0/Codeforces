#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--) {
    string p, h;
    cin>>p>>h;

    sort(p.begin(), p.end());

    int psize = p.size();

    string ans = "NO";

    for (int i = 0; i<h.size(); i++){
        string P = h.substr(i, psize);
        sort(P.begin(), P.end());
        if (P == p){
            ans = "YES";
            break;
        }
    }

    cout<<ans<<endl;

  }

  // p's size = n, h's size = m

  // O(t*(nlogn+m*(nlogn))) ~ O(t*m*n*logn)

  return 0;
}
