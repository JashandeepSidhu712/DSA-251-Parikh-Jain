## LEETCODE

https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

APPROACH 1

```
int f = arr[0];
        int s = arr[1];

        for(int i=2;i<arr.size();i++)
        {
            cout<<f<<" "<<s<<endl;

            if(f<arr[i])
            {
                if(s<f)
                s=f;
                f=arr[i];
            }
            else if(s<arr[i])
            {
                s=arr[i];
            }
        }
        

        return (f-1)*(s-1);
```

APPROACH 2

```
        sort(arr.begin(),arr.end());

        int n = arr.size();

        return (arr[n-1]-1)*(arr[n-2]-1);
```
