#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;
	vector<int> prices(n), sum(n+1,0);
    
    for(int i = 0; i<n; i++){
        cin>>prices[i];
    }
    
    sort(prices.begin(), prices.end());
    
    for(int i = 0; i<n; i++){
        sum[i+1] = sum[i]+prices[i];
    }
    
    while(q--){
        int x, y;
        cin>>x>>y;
        
        cout<<sum[n-x+y] - sum[n-x]<<endl;
    }
    
    return 0;
}
