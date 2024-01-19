#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


int explore(int i, int j, string s){

  int cnt = (i == j ? -1 : 0);

  while (i>=0 && j < s.size() && s[i] == s[j]){
    cnt += 2;
    --i, ++j;
  }

  return (cnt == -1 ? 0 : cnt);

}


vector<int> getPVector(int l, int h, string s){
  
  vector<int> P(h-l+1, 0);

  for (int i = 0; i<P.size(); i++){
    int odd = explore(i, i, s);
    int even = explore(i, i+1, s);

    P[i] = max(odd, even);

  }

  return P;

}

int main()
{

  int t;

  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    string ans = "";

    int l = 0, h = s.size() - 1;    // (abkja). l => 1, h =>3. length l + l from prefix + suffix is a palindrome.

    while ((l < h) && s[l] == s[h])
    {
      ++l, --h;
    }

    if (l > h){
      cout<<s<<endl;     // If the given string itselft a palindrome, we can just pr it.
      continue;
    }

    vector<int> P = getPVector(l, h, s.substr(l, h-l+1));

    pair<int, int> t = {l, 1};

    for (int i = 0; i<P.size(); i++){
      if (P[i] > t.second){
        if (i - (P[i]-1)/2 + l == l){
          t.first = l;
          t.second = P[i];
        }
        else if (i - (P[i] - 1)/2 + l + P[i] - 1 == h){
          t.first = h - P[i] + 1;
          t.second = P[i];
        }
      }
    }

    ans = s.substr(0, l) + s.substr(t.first, t.second) + s.substr(h+1, l);
    

    pr(ans);

  }

  return 0;
}
