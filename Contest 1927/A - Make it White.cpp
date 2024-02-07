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
    string s;
    cin>>n>>s;

    int cnt = 0;

    int l = 0, h = 0;

    for (int i = 0; i<n; i++){
      if (s[i] == 'B'){
        l = i;
        break;
      }
    }

    for (int i = n-1; i>=0; i--){
      if (s[i] == 'B'){
        h = i;
        break;
      }
    }

    cout<<(h - l + 1)<<endl;


  }
  
  return 0;
}



