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
    cin >> n;
    int ones = INT_MIN, twos = INT_MAX;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int a, x;
      cin >> a >> x;

      if (a == 1 && x > ones)
      {
        ones = x;
      }
      else if (a == 2 && x < twos)
      {
        twos = x;
      }
      else if (a == 3)
      {
        v.push_back(x);
      }
    }

    if (ones > twos){
      cout<<0<<endl;
      continue;
    }

    int cnt = twos - ones + 1;

    for (int i = 0; i < v.size(); i++)
    {
      if (v[i] >= ones && v[i] <= twos)
      {
        --cnt;
      }
    }

    cout<<cnt<<endl;
  }

  return 0;
}
