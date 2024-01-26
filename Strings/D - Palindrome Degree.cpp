#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;
ll mod = 12345678901, base = 123;

string s;

int main()
{

  cin>>s;

  ll res = 0;

  int val[s.size()/2+1] = {0};

  ll hash1 = 0, hash2 = 0;

  ll pBase = 1;

  for (int i = 0; i<s.size(); i++){
    hash1 = hash1*base + s[i];
    hash2 = hash2 + pBase*s[i];

    pBase = pBase*base;

    int curr = 0;

    if (hash1 == hash2){
      curr = val[(i+1)/2] + 1;
    }

    res += curr;

    if (i+1 < s.size()/2 + 1){
      val[i+1] = curr;
    }

  }

  pr(res);

  
  return 0;
}



