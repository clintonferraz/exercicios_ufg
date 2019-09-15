#include<stdio.h>
int main(void){
    int s[6],a,sena,quina=0,quadra=0,cont=0;

    for(int i=0; i<6; i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&a);
    int va[a][6];
    for(int i=0; i<a; i++){
        for(int j=0; j<6; j++){
            scanf("%d",&va[i][j]);
        }
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<6; j++){
            for(int k=0; k<6; k++){
                if(va[i][j] == s[k])
                    cont++;
            }
        }
        if(cont == 6)
            sena++;
        if(cont == 5)
            quina++;
        if(cont == 4)
            quadra++;
        cont = 0;
    }
    if(sena>0)
        printf("Houve %d acertador(es) da sena\n",sena);
    else
        printf("Nao houve acertador para sena\n");

    if(quina>0)
        printf("Houve %d acertador(es) da quina\n",quina);
    else
        printf("Nao houve acertador para quina\n");

    if(quadra>0)
        printf("Houve %d acertador(es) da quadra\n",quadra);
    else
        printf("Nao houve acertador para quadra\n");    
    




}