#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* next;
  Node(int x)
  {
      data=x;
      next=NULL;
  }
  
};
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int d;
    cin>>d;
    Node* head=new Node(d);
    Node* tail=head;
    for(int i=0;i<n-1;i++)
    {
        cin>>d;
        tail->next=new Node(d);
        tail=tail->next;
    }
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
        
    }
}
