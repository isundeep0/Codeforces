#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


int main()
{
  int t;
  cin>>t;

  while (t--){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int closest[n];

    for (int i = 0; i<n; i++){
      closest[i] = -1;
    }

    int l = 1;

    for (int i = 0; i<n; i++){
      int ele = arr[i];

      while (l < n && ele == arr[l]){
        ++l;
      }

      closest[i] = l;

    }



    int q;
    cin>>q;

    for (int i = 0; i<q; i++){
        int l, r;
        cin>>l>>r;

        int m = closest[l-1];

        if (m >= r || m == n){
          cout<<-1<<" "<<-1<<endl;
        }
        else{
          cout<<l<<" "<<m+1<<endl;
        }

        
    }


    }

  
  return 0;
}



