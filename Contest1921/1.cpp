#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;

  cin>>t;

  while (t--){
    vector<pair<int, int>> v;
    for (int i = 0; i<4; i++){
      int x, y;
      cin>>x>>y;
      v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    int ans = abs(v[0].second - v[1].second);

    cout<<ans*ans<<endl;

  }

  

  return 0;
}
