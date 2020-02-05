#include<stdio.h>
#include<stdlib.h>
 
struct node{
        int data;
        struct node* next;
 
}node;
 
struct node* addnode(struct node* start,int j);
 
void middle(struct node* start,int l);
 
 
 
struct node* start=NULL;
 
int main(){
        int j,l=0,t;
        char s;
 
        scanf("%d\n",&t);
        while(t--){
                l=0;
                do{
 
 
                        scanf("%d%c",&j,&s);
                        start=addnode(start,j);
                        l++;
                }while(s!='\n');
                middle(start,l);
                start=NULL;
        }
        return 0;
}
 
struct node* addnode(struct node *start,int j){
        struct node *tp=start;
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=j;
        temp->next=NULL;
        if(start==NULL){
 
                start=temp;
                return start;
 
        }
        else{
                while(tp->next!=NULL){
                        tp=tp->next;
                }
                tp->next=temp;
                return start;
 
        }
 
}
 
 
 
void  middle(struct node *start,int l){
        int count=--l,i=0;
        struct node* tpm=start;
        if(start!=NULL){
 
                for(i=0;i<(count-1)/2;i++){
                    tpm=tpm->next;
}
 
                printf("%d\n",tpm->next->data);
 
        }
        }
