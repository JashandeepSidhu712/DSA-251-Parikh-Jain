# NON DECREASING ARRAY

```
int count=0;

        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                count++;

                if(count>1)
                return false;

                if(i==1 || arr[i-2]<=arr[i])
                {
                    arr[i-1]=arr[i];
                }
                else
                {
                    arr[i]=arr[i-1];
                }
            }
            
        }

        return true;
```

### PROBLEMS

1. https://leetcode.com/problems/non-decreasing-array/description/

2. https://www.codingninjas.com/studio/problems/non-decreasing-array_699920?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=0

### ALGORITHM HELP

https://www.youtube.com/watch?v=OyaprFsYLPY
