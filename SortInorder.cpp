 #include<bits/stdc++.h>
 using namespace std;
 void sortIt(long long arr[], long long n)
    {
       int l=0,r=n-1,k=0;
       
       while(l<r)
       {
           if(arr[l]%2!=0)
           {
               l++;
               k++;
           }
           else if(l<r && arr[r]%2==0){
               r--;
           }
           else if(l<r)
           {
               swap(arr[l],arr[r]);
           }
       }
       sort(arr,arr+k,greater<int>());
       sort(arr+k,arr+n);
    }
    
int main()
{
	long long arr[]={1,2,3,5,4,7,10};
	sortIt(arr,7);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
