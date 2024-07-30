void dfs(int row,int col,vector<vector<int>> &image,vector<vector<int>> &ans,
int newclr,int iniclr,int delrow[],int delcol[],int n,int m)
{
    ans[row][col]=newclr;
    for(int i=0;i<4;i++)
    {
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m &&
        image[nrow][ncol]==iniclr && ans[nrow][ncol]!=newclr)
        {
            dfs(nrow,ncol,image,ans,newclr,iniclr,delrow,delcol,n,m);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int iniColor=image[sr][sc];
        vector<vector<int>> ans=image;
        int delRow[]={-1,0,+1,-0};
        int delcol[]={0,+1,0,-1};
        int n=image.size();
        int m=image[0].size();
        dfs(sr,sc,image,ans,newColor,iniColor,delRow,delcol,n,m);
        return ans;
    }
