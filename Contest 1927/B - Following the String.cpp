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

    unordered_map<char, int> mp;

    int z = 0;

    string s = "";

    for (int i = 0; i<n; i++){
      int a;
      cin>>a;

      if (a == 0){
        char c = 97 + z;
        mp[c]++;
        s += c;
        ++z;
      }
      else{

        for (auto const& f : mp){
          if (f.second == a){
            mp[f.first]++;
            s += f.first;
            break;
          }
        }
      }

    }

    cout<<s<<endl;


  }
  
  return 0;
}



