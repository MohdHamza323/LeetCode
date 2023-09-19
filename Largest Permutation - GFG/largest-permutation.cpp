//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void KswapPermutation(int arr[], int n, int k)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=i;
        
        int largest=n;
        
        for(int i=0;i<n;i++){
            if(k==0)break;
            
            else if(arr[i]==largest) largest--;
            
            else if(arr[i]!=largest){
                
                int iol=mp[largest];
                swap(arr[i],arr[iol]);
                
                mp[arr[i]]=i;
                mp[arr[iol]]=iol;
                
                largest--;
                k--;
            }
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		Solution ob;
		ob.KswapPermutation(arr,n,k);
		for(int i=0;i<n;++i)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}


// } Driver Code Ends