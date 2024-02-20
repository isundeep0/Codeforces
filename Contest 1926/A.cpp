#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;

  cin>>t;

  while (t--){
    string s;
    cin>>s;

    vector<int> v(2, 0);

    for (char c : s){
      v[c-'A']++;
    }

    if (v[0] > v[1]){
      pr("A");
    }
    else{
      pr("B");
    }




  }

  return 0;
}

// 6 x=5 y=2
// 1 2 7 4 9 6

// (1, 4)
// (1, 9) ✔
// (4, 6) ✔
// (9, 6)