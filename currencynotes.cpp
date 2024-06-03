#include<bits/stdc++.h>
using namespace std;
void currency(int amount)
{
	int notes[9]={2000,500,200,100,50,20,10,5,1};
	int notesreq[9]={0};
	for(int i=0;i<9;i++)
	{
		if(amount>=notes[i])
		{
			notesreq[i]=amount/notes[i];
			amount=amount%notes[i];
			
		}
	}
	cout<<"Curremcy notes required ";
	for(int i=0;i<9;i++)
	{
		cout<<notes[i]<<" :"<<notesreq[i]<<"  ";
	}
}
int main()
{
	int n=868;
	currency(n);
}
