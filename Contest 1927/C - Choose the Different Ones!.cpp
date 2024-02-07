#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


int main()
{
  int t;
  cin>>t;

  while (t--){
    int n, m, k;
    cin>>n>>m>>k;

    unordered_map<int, bool> mp1, mp2;

    for (int i = 0; i<n; i++){
      int aa;
      cin>>aa;
      mp1[aa] = 1;
    }

    for (int i = 0; i<m; i++){
      int aa;
      cin>>aa;
      mp2[aa] = 1;
    }


    int a = 0, b = 0, c = 0;

    bool ans = true;

    for (int i = 1; i<=k; i++){
      if ((mp1.find(i) != mp1.end()) && (mp2.find(i) != mp2.end())){
        ++c;
      }
      else if (mp1.find(i) != mp1.end()){
        ++a;
      }
      else if (mp2.find(i) != mp2.end()){
        ++b;
      }
      else{
        ans = false;
        break;
      }
      if (a > k/2 || b > k/2){
        ans = false;
        break;
      }
    }

    if (ans){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

    }

  
  return 0;
}



