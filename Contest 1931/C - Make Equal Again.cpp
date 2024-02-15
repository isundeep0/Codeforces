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

    for (int i = 0; i<n; i++){
      cin>>v[i];
    }

    int k1 = 1, k2 = 1;   //k1 is prefMaxEqualElementsCount, k2 is suffMaxEqualElementsCount

    for (int i = 1; i<n; i++){

      if (v[i] == v[i-1]){
        ++k1;
      }
      else{
        break;
      }

    }

    for (int i = n-2; i>=0; i--){

      if (v[i] == v[i+1]){
        ++k2;
      }
      else{
        break;
      }

    }

    if (k1 == k2 && k1 == n){
      pr(0);
      continue;
    }

    bool isBothEndSame = false;

    if (v[0] == v[n-1]){
      isBothEndSame = true;
    }

    int k = k1 + k2;

    if (!isBothEndSame){
      k = max(k1, k2);
    }

    pr(n-k);

  
  }

  // 8 8 8 2 3 2 8 8
  
  return 0;
}



// 4 3 3 2 1 3


// 9 9 9 9 3 2 4 4 4 4