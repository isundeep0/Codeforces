// Observations:

//  if s size is 1500, k is 1300. How many substrings possible ? It's too large..

// also, If you just push the substring itself then set might be nightmare. Let's there is already 100 strings in set,

// of each length around 1000 characters. Now If you want to add another string of length 1000 characters, 

// since set can't have duplicates, it should check all of it's strings and then the string is added. Nightmare...

// Whereas it is far easy with the numbers.. 


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout<<a<<endl;
 
int main() {
 
  string s, alphabets;
  int k;
  
  cin>>s>>alphabets>>k;
 
  set<pair<ll, ll>> ans;
 
  for (int i = 0; i<s.size(); i++){

    string tmp = "";

    int badOnes = 0;

    ll hash1 = 0, hash2 = 0, power1 = 1, power2 = 1;

    int p1 = 31, p2 = 29, mod = 1e9+7;

    for (int j = i; j<s.size(); j++){

      tmp.push_back(s[j]);

      badOnes += (alphabets[s[j] - 97] == '1' ? 0 : 1);
      
      if (badOnes <= k){

        hash1 = (hash1 + (s[j] - 96)*power1)%mod;
        hash2 = (hash2 + (s[j] - 96)*power2)%mod;

        ans.insert(make_pair(hash1, hash2));

        power1 = (power1*p1)%mod;
        power2 = (power2*p2)%mod;

      }

      else{
        break;
      }

    }

  }
 
  cout<<ans.size()<<endl;

  
  return 0; 
 
}