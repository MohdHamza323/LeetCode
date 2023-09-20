//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    map<int,int> mp;
	    
	    int count1=0,prev1=INT_MIN,ans=-1;
	    
	    for(int i=0;i<n;i++){
	        count1=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                count1++;
	            }
	        }
	        mp[i]=count1;
	        
	    }
	   // for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
	    //code here
	    int maxi=0;
	    for(auto i:mp){
	        
	        if(i.second>maxi){
	            maxi=i.second;
	            ans=i.first;
	        }
	        
	    }
	    return ans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends