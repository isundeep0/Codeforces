#include <bits/stdc++.h>
using namespace std;

int main() {

    int p, q, r, s;


    cin>>p>>q>>r>>s;

    int val = max({p, q, r, s});

    if (val - p != 0){
      cout<<val-p<<" ";
    }
    if (val-q != 0){
      cout<<val-q<<" ";
    }

    if (val - r != 0){
      cout<<val-r<<" ";
    }
    if (val - s != 0){
      cout<<val-s<<" ";
    }

    // O(1)
    

  return 0;
}

