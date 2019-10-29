#include<stdio.h>
#include<string.h>
 
int main(void){
    int n,i,j,cont=0;
    scanf("%d",&n);
    char s[n][10000];
    for(i=0; i<n; i++){
        getchar();
        scanf("%[^\n]",s[i]);
 
    }
    for(j=0;j<n;j++){
        for(i=0; i<strlen(s[j]); i++){
            if(s[j][i]=='a' || s[j][i]=='e' || s[j][i]=='i' || s[j][i]=='o' || s[j][i]=='u' || s[j][i]=='A' || s[j][i]=='E' || s[j][i]=='I' || s[j][i]=='O' || s[j][i]=='U')
                cont++;
        }
        printf("%d\n",cont);
        cont=0;
 
 
    }
 
 
return 0;
}