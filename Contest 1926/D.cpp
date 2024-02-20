#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


int findComplement(int num) {
    // Count number of bits required to represent num
    int numBits = 0;
    int temp = num;
    while (temp > 0) {
        temp >>= 1;
        numBits++;
    }

    // Construct a bitmask of all 1s with the same length as num
    int bitmask = (1 << numBits) - 1;

    // Take the bitwise complement of num
    return num ^ bitmask;
}

int main()
{

  int t;

  cin>>t;

  while (t--){
    int n;
    cin>>n;

    int ans = 0;

    vector<int> v(n), c(n);

    
    for (int i = 0; i<n; i++){
      cin>>v[i];

      c[i] = findComplement(v[i]);

    }

    sort(v.begin(), v.end());
    sort(c.begin(), c.end());

    for (int i = 0; i<n; i++){
      
    }


    pr(ans);

  }

  return 0;
}

// 6 x=5 y=2
// 1 2 7 4 9 6

// (1, 4)
// (1, 9) ✔
// (4, 6) ✔
// (9, 6)