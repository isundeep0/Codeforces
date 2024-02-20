#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int n;

    cin>>n;

    vector<int> v(n, 0);

    for (int i = 0; i<n; i++){
      cin>>v[i];
    }

    sort(v.begin(), v.end());

    int sum = 0;

    for (int i = 1; i<n; i++){
      sum += v[i] - v[i-1];
    }

    pr(sum);

    
  }

  return 0;
}

// 6 x=5 y=2
// 1 2 7 4 9 6

// (1, 4)
// (1, 9) ✔
// (4, 6) ✔
// (9, 6)