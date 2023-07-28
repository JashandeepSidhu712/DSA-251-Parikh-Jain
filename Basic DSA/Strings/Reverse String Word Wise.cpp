string temp, ans;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                temp=temp+s[i];
                ans+=temp;
                temp="";
            }
            else
            {
                temp=s[i]+temp;
            }
        }
        ans+=temp;
        return ans;
