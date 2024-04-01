#include <bits/stdc++.h>
using namespace std;

int main() {


	int t;
	cin>>t;

	while (t--){
		int n;
		string v;
		cin>>n>>v;

		int prev1 = INT_MIN, prev2 = INT_MAX;

		for (int i = 0; i<n; i++){
			if (v[i] == '1'){
				prev1 = max(prev1, i);
				prev2 = min(prev2, i);
			}
		}

		if (prev1 == INT_MIN){
			cout<<n<<endl;
		}
		else{
			cout<<max((prev1+1)*2, (n-prev2)*2)<<endl;
		}


	}


	return 0;
}
