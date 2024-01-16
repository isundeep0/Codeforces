#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;

  cin>>t;

  while (t--){
    
    int n,m;
    cin>>n>>m;

    vector<int> petya(n, 0), vasya(m, 0);

    for (int i = 0; i<n; i++){
      cin>>petya[i];
    }

    for (int i = 0; i<m; i++){
      cin>>vasya[i];
    }

    sort(petya.begin(), petya.end());
    sort(vasya.begin(), vasya.end(), greater<int>());

    long long d = 0;

    int i = 0, j = n-1;
    int low = 0, high = m-1;

    while (i <= j){
      
      int diff1 = abs(petya[i] - vasya[low]);
      int diff2 = abs(petya[j] - vasya[high]);

      if (diff1 > diff2){
        ++i, ++low;
        d += diff1;
      }
      else{
        --j, --high;
        d += diff2;
      }

    }

    pr(d);



  }

  

  return 0;
}
