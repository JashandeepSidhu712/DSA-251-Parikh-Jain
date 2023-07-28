# FIRST MISSING POSITIVE

```
int j=1;
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        for(auto i:arr)
        cout<<i<<" ";

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            {
                if(arr[i]!=j)
                {
                    return j;
                }
                else
                {
                    j++;
                }
            }
            else
            {
                continue;
            }
        }

        return j++;
```

# PROBLEMS

1. https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

2. https://leetcode.com/problems/first-missing-positive/description/

3. https://www.codingninjas.com/studio/problems/first-missing-positive_699946?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube
