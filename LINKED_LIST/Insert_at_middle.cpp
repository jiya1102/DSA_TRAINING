#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node{
   int data;
   struct node *next;
}Node;

Node* getnode(int);
Node* build123();
void display(Node *);
void InsertAtMiddle(int,int);

Node *HP;
int main(){

  HP=build123();
   display(HP); 
   InsertAtMiddle(4,2);
   display(HP); 
}

Node* getnode(int x){//creat a node and return address of node
   Node *p;
   p= (Node*) malloc(sizeof(Node));
   p->data=x;
   p->next=NULL;
   return p;
}

Node* build123(){ //creat a list 1,2,3 and return address of first node
    Node* temp1,*temp2,*temp3;
    temp1=getnode(1);
    temp2=getnode(2);
    temp3=getnode(3);

    temp1->next=temp2;
    temp2->next=temp3;
    return temp1;
}

void display(Node *s){//count node of list 
    int count =0; 
    while(s!=NULL){
        count ++;
     printf("%d \n",s->data );
     s=s->next;
    } cout<<"no. of node is:"<<count<<endl;
}

void InsertAtMiddle(int x,int y){
       node* q= HP;
       node *p,*r;
    p =getnode(x);

    if(HP==NULL){
        free(p);
        return;
    }
    else{
       while(q->data!=y&&q->next!=NULL){
       q=q->next;
   }
   if(q->data==y){
    r=q->next;
    q->next =p;
    p->next=r;
   }
   else{
    free(p);
    return;
   }
}
}

