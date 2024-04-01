#include <bits/stdc++.h>
using namespace std;

int main() {

  long long int x, y, z;
  cin>>x>>y>>z;

  //6 8 2

  long long int ans = x/z + y/z;

  x = x%z, y = y%z;

  long long int a = z - max(x, y);

  if (x+y >= z){
    if (a != z){
      ++ans;
    }
    else{
      a = 0;
    }
  }
  else{
    a = 0;
  }

  

  cout<<ans<<" "<<a<<endl;
      
    
  return 0;
}

