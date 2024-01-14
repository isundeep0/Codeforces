#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;

  cin>>t;

  while (t--){
    int n, k, x;
    
    cin>>n>>k>>x;

    vector<int> prefSum(n+1, 0), arr(n+1, 0);

    for (int i = 1; i<=n; i++){
      cin>>arr[i];
    }

    sort(arr.begin()+1, arr.end(), greater<int>());

    for (int i = 1; i<=n; i++){
      prefSum[i] += prefSum[i-1] + arr[i];
    }

    int ans = INT_MIN;

    for (int i = 0; i<=k; i++){
      ans = max(ans, prefSum[n] - 2*prefSum[min(i+x, n)] + prefSum[i]);
    }


    cout<<ans<<endl;

  }

  return 0;
}
