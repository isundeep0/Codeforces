#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;

  cin>>t;

  while (t--){
    int n;
    cin>>n;

    int ans = 0;

    map<int, int> mp;


    
    for (int i = 0; i<n; i++){

      int v;

      cin>>v;

      int k = (((1LL<<31) - 1) ^ v);

      if (!mp[v]){
        ++ans;
        mp[k]++;
      }
      else{
        mp[v]--;
      }


    }

    

    pr(ans);

  }

  return 0;
}

// 6 x=5 y=2
// 1 2 7 4 9 6

// (1, 4)
// (1, 9) ✔
// (4, 6) ✔
// (9, 6)