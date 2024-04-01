#include <bits/stdc++.h>
using namespace std;

int main() {

      int n, k;

      cin>>n>>k;

      vector<int> v(k+1, 0);

      int ans = 0;

      for (int i = 0; i<n; i++){
        int a;
        cin>>a;
        v[a]++;
        if (v[a] == 2){
          ans += v[a];
          v[a] = 0;
        }
      }


      int cnt = 0;

      for (int i = 0; i<=k; i++){
        if (v[i] > 0){
          ++cnt;
        }
      }

      ans += ceil((double)cnt/2);

      cout<<ans<<endl;


      // T.C = O(N + k)

      // If We ignore the input's Complexity, then it would be

      // T.C = O(k), S.C = O(k)
      
    
  return 0;
}

