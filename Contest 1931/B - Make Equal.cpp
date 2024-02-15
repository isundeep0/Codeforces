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

    vector<int> v(n, 0);

    int sum = 0;

    for (int i = 0; i<n; i++){
      cin>>v[i];
      sum += v[i];
    }

    int k = sum/n;

    int diff = 0, ava = 0;

    string ans = "YES";

    for (int i = 0; i<n; i++){
      if (v[i] > k){
        ava += v[i] - k;
      }
      else if (v[i] < k){
        int req = k - v[i];
        if (ava - req < 0){
          ans = "NO";
          break;
        }
        else{
          ava -= req;
        }
      }
    }

    pr(ans);
  
  }



  
  return 0;
}
