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

    vector<int> a(n, 0);

    for (int i = 0; i<n; i++){
      cin>>a[i];
    }

    sort(a.begin(), a.end());

    auto last = unique(a.begin(), a.end());  // Consecutive elements to be removed.

    a.erase(last, a.end());   // space saved. As set is not used to remove duplicates.

    int pnt = 0, ans = 0;

    for (int i = 0; i<a.size(); i++){
      while (a[i] - a[pnt] >= n){
        ++pnt;
      }
      ans = max(ans, i - pnt + 1);
    }

    cout<<ans<<endl;


  }

  
  return 0;
}
