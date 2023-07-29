# EQUILIBRIUM INDEX

```
int sum=0, left=0;
        
        for(int i=0;i<n;i++)
        sum+=arr[i];
    
        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
            
            if(sum==left)
            return i;
            
            left+=arr[i];
            
        }
    
        return -1;
```

### PROBLEMS

1. https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

2. https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/1

3. https://www.codingninjas.com/studio/problems/equilibrium-index_893014?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

4. https://leetcode.com/problems/find-pivot-index/
