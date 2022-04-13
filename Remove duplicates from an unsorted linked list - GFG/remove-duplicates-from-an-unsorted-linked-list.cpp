// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


 // } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<set>

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {   
        // Node *temp=head;
        // while(temp1!=NULL && temp1->next!=NULL){
        //     for(Node* temp2=temp1; temp2->next!=NULL; ){
        //         if(temp1->data == temp2->next->data){
        //             Node *del = temp2->next;
        //             temp2->next=temp2->next->next;
        //             delete(del);
        //         }
        //         else{
        //             temp2=temp2->next;
        //         }
        //     }
        //     temp1=temp1->next;
        // }
        unordered_set<int> seen;
        Node* curr = head;
        Node* prev = NULL;
        while(curr!=NULL){
            if (seen.find(curr->data) != seen.end()) {
                prev->next = curr->next;
                delete (curr);
            }
            else {
                seen.insert(curr->data);
                prev = curr;
            }
            curr = prev->next;
        }
        return head;
    }
};


// { Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}  // } Driver Code Ends