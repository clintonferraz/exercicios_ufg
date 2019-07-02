#include<stdio.h>
#include<math.h>

struct pontos{
    double coordenada[4];
    double norma;

};

int main(void){
    int n,m,i,j,k;

    scanf("%d",&n);
    struct pontos ponto[n];
    for(i=0; i<n; i++){
        for(j=0; j<4; j++){
            scanf("%lf",&ponto[i].coordenada[j]);
        }
    }
    for(i=0; i<n; i++){
            ponto[i].norma = pow(ponto[i].coordenada[0],2) + pow(ponto[i].coordenada[1],2) + pow(ponto[i].coordenada[2],2) + pow(ponto[i].coordenada[3],2);
            ponto[i].norma = sqrt(ponto[i].norma);
    }
    struct pontos pontosaux;

    for(i = 1; i < n; i++){
        j = i;
        while(j > 0 && ponto[j-1].norma > ponto[j].norma){
            pontosaux = ponto[j-1];
            ponto[j-1] = ponto[j];
            ponto[j] = pontosaux;
            j--;
        }
    }

    for(i=0; i<n; i++){
            printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n",ponto[i].coordenada[0], ponto[i].coordenada[1], ponto[i].coordenada[2], ponto[i].coordenada[3], ponto[i].norma);
    }

    return 0;
}
