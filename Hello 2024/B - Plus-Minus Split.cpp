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
    string s;
    cin>>n>>s;

    int plus = 0, minus = 0;

    for (char c : s){
      if (c == '+'){
        ++plus;
      }
      else {
        ++minus;
      }
    }

    cout<<abs(plus - minus)<<endl;

    
  }
}


// +-+-+-

// [1, -1, 1, -1, 1, -1]  // m = 6

// min({36, })

// +---++++-+++++---++-

// [1, -1, -1, -1, 1, 1, 1, 1, -1, 1, 1, 1, 1, 1, -1, -1, -1, 1, 1, -1] // m = 10

// [1, 1, 1, 1]

// min()