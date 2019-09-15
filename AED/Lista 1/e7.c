#include<stdio.h>
 
int main(void){
    int p,s,i,j,k,pap,temsapo=0;
    scanf("%d %d", &p, &s);
    int po[s],d[s];
    for(i=0; i<s; i++){
        scanf("%d %d", &po[i], &d[i]);
    }
    for(i=0; i<p; i++){
        for(j=0;j<s;j++){
            k=0;
            pap=p;
            while(pap<=p){
                pap=po[j]+k*d[j];
                if(pap==i+1)
                    temsapo=1;
                k++;
            }
            k=0;
            pap=p;
            while(pap>0){
                pap=po[j]-k*d[j];
                if(pap==i+1)
                    temsapo=1;
                k++;
            }
            //if(po[j]==i+1 || po[j]+d[j]==i+1 || po[j]-d[j]==i+1)
            //    temsapo=1;
        }
        printf("%d\n",temsapo);
        temsapo=0;
    }
 
 
}