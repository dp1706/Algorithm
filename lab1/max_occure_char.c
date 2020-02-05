#include<stdio.h>
#include<string.h>
 
int main(){
        int h[256]={0},i,j,t,r;
        char str[100], result=0;
 
        scanf("%d\n",&t);
 
        while(t--){
                result=0;
 
                scanf(" %[^\n]",str);
                j=strlen(str);
                for(i=0;i<=j;i++)
                {
                        if(str[i]>=65 && str[i]<=92)
                        {
                                str[i]=str[i]+32;
                        }
                }
 
                for(i=0;i<j;i++){
 
                        h[str[i]]++;
                        if(result<(h[str[i]])){
                                result=h[str[i]];
                                r=str[i];
 
                        }
                }
 
                if(r!=32)
                        printf("%c\n",r);
                else
                        printf("sp\n");
                for(i=0;i<256;i++){
                        h[i]=0;
                }
        }
 
        return 0;
}
