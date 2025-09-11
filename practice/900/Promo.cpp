#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;
	vector<long long> prices(n), sum(n+1,0);
    
    for(int i = 0; i<n; i++){
        cin>>prices[i];
    }
    //sorting the prices in increasing order
    sort(prices.begin(), prices.end());
    //the items with max prices are at the end which is what we need, thus eliminating the items with lower prices to maximize our answer
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
