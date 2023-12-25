// Key parameters - Clockwise, Anti-clockwise

// We just need to try out all the possibilities (taking few as clockwise and rest as anti)

// All possibilites. How many ? [20, 10, 30]  => 8 possibilities. 2^3 = 8

// 0 - 0 0 0
// 1 - 0 0 1
// 2 - 0 1 0
// 3 - 0 1 1
// 4 - 1 0 0
// 5 - 1 0 1
// 6 - 1 1 0
// 7 - 1 1 1




#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;

int main() {

  int n;
  cin>>n;

  vector<int> v(n);
  for (int i = 0; i<n; i++){
    cin>>v[i];
  }

  int b = 1<<n;

  for (int num = 0; num<b; num++){
    int sum = 0;

    for (int i = 0; i<n; i++){

      if ((1<<i) & num){
        sum -= v[i];
      }
      else{
        sum += v[i];
      }
    }
    if (sum%360 == 0){
      cout<<"YES"<<endl;
      return 0;
    }
     
  }
 

  cout<<"NO"<<endl;

  return 0;
}