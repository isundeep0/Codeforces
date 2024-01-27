#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

ll dp[10000000];
unordered_map<ll, string> mp;


void output(int n){
  if (n == 0) return;
  string k = mp[dp[n]];
  output(n - k.size());
  cout<<k<<" ";
}

int main()
{

  int n, m;
  string t;

  cin>>n>>t>>m;

  fill(dp, dp+10000000, -1);

  ll base = 123, pBase = 1, mod = 12345678901;

  for (int i = 0; i<m; i++){
    string k;
    cin>>k;

    ll hash = 0;

    for (int j = 0; j<k.size(); j++){
      hash = (hash*base + tolower(k[j]))%mod;
    }


    mp[hash] = k;

  }

  dp[0] = 0;

  for (int i = 0; i<t.size(); i++){
    
    ll hash = 0;

    for (int j = i; j>=0; j--){
      hash = (hash*base + t[j])%mod;
      if (dp[j] != -1 && mp.count(hash)){
        dp[i+1] = hash;
        break;
      }
    }

  
  }

  for (int i = 0; i<=t.size(); i++){
    cout<<dp[i]<<" ";
  }
  cout<<endl;

  output(n);



  
  return 0;
}



