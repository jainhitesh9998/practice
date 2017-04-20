#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
			void levelOrder(Node * root){
        queue<Node*> q;
        if( root !=NULL)
            q.push(root);
      //Write your code here
        while(!q.empty()){
            Node *s = q.front();
            q.pop();
            cout<<s->data<<"\t";
            if(s->left!=NULL)
                q.push(s->left);
            if(s->right!=NULL)
                q.push(s->right);
             
        }
            
  	
  
	}
		
		};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}