#include<stdio.h>
#include<stdlib.h>
 
typedef struct node{
        int data;
        struct node* next;
 
}Node;
 
Node* head=NULL;
 
 
 
 
int GetNode(Node* head, int positionFromTail ){
int i= positionFromTail,j=0,k=0;
Node* temp=head;
 
 
    while(temp!=NULL){
    temp=temp->next;
    j++;
    }
    temp=head;
    while(k<j-i-1){
        temp=temp->next;
        k++;
    }
 
 return (temp->data);
}
 
 
void addnode(int j){
        Node* tp=head;
        Node* temp=(Node*)malloc(sizeof(Node));
        temp->data=j;
        temp->next=NULL;
        if(head==NULL){
 
                head=temp;
 
 
                        }
        else{
                while(tp->next!=NULL){
                        tp=tp->next;
                }
                tp->next=temp;
 
 
        }
 
}
 
 
int main(){
        int j,i,l,t,positionFromTail ,d;
 
 
        scanf("%d",&t);
 
        while(t--){
                scanf("%d",&l);
 
                  for(i=1;i<=l;i++){
                        scanf("%d",&j);
                        addnode(j);
 
                  }
 
                scanf("%d",&positionFromTail);
 
                d=GetNode(head,positionFromTail );
 
                printf("%d\n",d);
 
                head=NULL;
        }
        
        return 0;
        }
     
