 string convert(string s, int numRows) {
        string mat[numRows][s.size()];
        int r=0;
        int c=0;
        int curr=0;
        while(curr<s.size())
        {
            while(r<numRows && curr<s.size())
            {
                mat[r++][c]=s[curr++];
            }
            r=max(0,r-2);
            while(r>0 && curr<s.size())
            {
                mat[r--][++c]=s[curr++];
            }
            c++;
        }
        string ans="";
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                ans+=mat[i][j];
            }
        }
        return ans;
    }
