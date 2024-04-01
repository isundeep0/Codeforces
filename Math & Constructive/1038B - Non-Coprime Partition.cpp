#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  if (n == 1 || n == 2){
    cout<<"No"<<endl;
  }
  else{
    cout<<"Yes"<<endl;
    int odd = ceil((double)n/2);
    cout<<odd<<" ";
    int k = 1;
    for (int i = 1; i<=odd; i++){
      cout<<k<<" ";
      k += 2;
    }
    cout<<endl;
    int even = n/2;
    cout<<even<<" ";
    k = 2;
    for (int i = 1; i<=even; i++){
      cout<<k<<" ";
      k += 2;
    }
  }
  
  return 0;
}

