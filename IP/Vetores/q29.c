#include<stdio.h>
int main(void){
    int q1=0,q2=0,aux;
    while(q1<1 || q1>500000){
        scanf("%d",&q1);
    }
    while(q2<1 || q2>500000){
        scanf("%d",&q2);
    }

    int V1[q1],V2[q2],q3=q2+q1;
    int Vr[q3];
    for(int i = 0; i < q1; i++){
        scanf("%d",&V1[i]);
    }
    for(int i = 0; i < q2; i++){
        scanf("%d",&V2[i]);
    }
    for(int i = 0; i < q3;i++){
        if(i<q1)
            Vr[i]=V1[i];
        else
            Vr[i]=V2[i-q1];
    }

    int j;
    for(int i = 1; i < q3; i++){
        j = i;
        while(j > 0 && Vr[j-1] > Vr[j]){
            aux = Vr[j-1];
            Vr[j-1] = Vr[j];
            Vr[j] = aux;
            j--;
        }
    }

    for(int i = 0; i < q3; i++){
        printf("%d\n",Vr[i]);
    }

    return 0;
}
