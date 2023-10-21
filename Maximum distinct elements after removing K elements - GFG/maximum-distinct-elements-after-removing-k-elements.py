#User function Template for python3
class Solution:
    def maxTripletSum (self, arr,  n, K) : 
        a=set(arr)
        if n-len(a)==0:
            return n-K
        if n-len(a)==K:
            return len(a)
        elif n-len(a)>K:
            return len(a)
        elif n-len(a)<K:
            return n-K



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n, K = map(int, input().split())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    res = ob.maxTripletSum(arr, n, K)
    print(res)



# } Driver Code Ends