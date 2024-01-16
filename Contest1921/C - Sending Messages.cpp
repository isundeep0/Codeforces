#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;

  cin>>t;

  while (t--){
    long long int n, f, a, b;

    cin>>n>>f>>a>>b;

    long long int prev = 0;

    string ans = "YES";

    for (long long int i = 0; i<n; i++){
      long long int val;
      cin>>val;

      long long int k = min((val - prev)*a, b);

      prev = val;

      f -= k;

      if (f <= 0){
        ans = "NO";
      }

    }

    cout<<ans<<endl;


  }

  

  return 0;
}
