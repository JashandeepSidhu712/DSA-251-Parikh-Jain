# ROTATE AN ARRAY BY K

```
d=d%n; //assume n =5 elements in array
        //d= 12 ; it's similar to rotating array 2 times (12%5)
        //rotating array 5 times in this case is simply reaching to the original array.
        
        reverse(arr,arr+d);
        reverse(arr+d, arr+n);
        reverse(arr,arr+n);
```

### PROBLEMS

1. https://www.codingninjas.com/studio/problems/rotate-array_1230543?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=0

2. https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

3. https://practice.geeksforgeeks.org/problems/rotation4723/1

4. https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1

5. https://leetcode.com/problems/rotate-array/description/
