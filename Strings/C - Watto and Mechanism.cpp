#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;
const ll mod = 1000000007;
const int p = 107;
int km[600001];

ll calc(string k){
  ll ans = 0;
  for (int i = 0; i<k.size(); i++){
    ans += (k[i] - 'a' + 1)*km[i]%mod;   // [a-1, b-2,... z-26]
  }
  return ans;
}

void powerSquares(){
  for (int i = 1; i<600001; i++){
    km[i] = (km[i-1]*p)%mod;          // [p^1,  p^2, ..., p^600000]
  }
}

int main()
{

  int n, m;
  cin>>n>>m;

  km[0] = 1;

  powerSquares();

  set<ll> st;

  for (int i = 0; i<n; i++){
    string k;
    cin>>k;
    
    ll hash = calc(k);
    st.insert(hash);
  }

  for (int i = 0; i<m; i++){
    string k;
    cin>>k;
    ll hash = calc(k);
    bool bit = false;
    for (int j = 0; j<k.size(); j++){
      for (char l = 'a'; l <= 'c'; ++l){
        if (k[j] == l){
          continue;
        }
        ll mHash = hash - (k[j] - 'a' + 1)*km[j]%mod + (l - 'a' + 1)*km[j]%mod;
        if (st.find(mHash) != st.end()){
          bit = true;
          break;
        }
      }
      if (bit) break;
    }
    if (bit){
      pr("YES");
    }
    else{
      pr("NO");
    }
  }

  
  return 0;
}



