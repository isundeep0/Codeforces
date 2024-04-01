#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  while (n--){
    int a, b, c;
    cin>>a>>b>>c;

    int gcd = pow(10, c-1);

    int x = gcd, y = gcd;

    while (to_string(x).size() < a) x = x*2;
    while (to_string(y).size() < b) y = y*3;

    cout<<x<<" "<<y<<endl;

  }

  return 0;
}

