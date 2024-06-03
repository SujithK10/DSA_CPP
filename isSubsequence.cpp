#include<bits/stdc++.h>
using namespace std;
 bool isSubSequence(string A, string B) 
    {
     if (A.length() > B.length()) {
        return 0;
    }
    
    int i = 0;
    int j = 0; 
    
    while (i < A.length() && j < B.length()) {
        if (A[i] == B[j]) {
            i++; 
        }
        j++; 
    }
    
   
    return (i == A.length());}
int main()
{
	string A="Bat";
	string B="Batman";
	cout<<isSubSequence(A,B);
}
