#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // The inversions will be minimum if at least one of the array is sorted.
        vector<pair<int,int>> arr(n);

        for(int i = 0; i<n; i++){
            cin>>arr[i].first;
        }
        for(int i = 0; i<n; i++){
            cin>>arr[i].second;
        }

        sort(arr.begin(), arr.end());

        for(int i = 0; i<n; i++){
            cout<<arr[i].first<<" ";
        }
        cout<<endl;
        for(int i = 0; i<n; i++){
            cout<<arr[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
