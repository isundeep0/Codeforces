#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin>>n>>k;

  vector<pair<int, int>> v;

  for (int i = 0; i<n; i++){
    int a;
    cin>>a;
    v.push_back({a, i+1});
  }

  sort(v.begin(), v.end());

  int ans = 0, i = 0;

  while (i < v.size()){
    k = k - v[i].first;
    if (k < 0){
      break;
    }
    ++ans;
    ++i;
  }

  cout<<ans<<endl;
  for (int j = 0; j<ans; j++){
    cout<<v[j].second<<" ";
  }

  return 0;
}
