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
    string s, f;
    cin>>n>>s>>f;

    int a = 0, b = 0;

    for (int i = 0; i<n; i++){
      if (s[i] == '1' && f[i] == '0'){
        ++a;
      }
      if (s[i] == '0' && f[i] == '1'){
        ++b;
      }
    }

    cout<<max(b, a)<<endl;

  }

  

  return 0;
}
