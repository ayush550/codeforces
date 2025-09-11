#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;
	int prices[n];
    
    for(int i = 0; i<n; i++){
        cin>>prices[i];
    }
    
    sort(prices, prices+n);  //sorting prices in ascending order
    while(q--){
        int x, y;
        cin>>x>>y;
        
        int max_total_value = 0;
        //from the xth position till the last, the items withthe  maximum possible value that the user can get for free
        for(int i = n-x; i<n; i++){
            if(y == 0)  break;
            max_total_value += prices[i];
            y--;
        }
        cout<<max_total_value<<endl;
    }
    
    return 0;
}
