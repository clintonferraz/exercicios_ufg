#include<stdio.h>
#include<stdlib.h>

struct alunos{
    int mat;
    int dia;
    int mes;
    int ano;
    char nome[50];

};

int ComparaDataNasc(struct alunos aluno1, struct alunos aluno2){
    if(aluno1.ano==aluno2.ano){
        if(aluno1.mes==aluno2.mes){
            if(aluno1.dia>=aluno2.dia)
                return 1;
            else
                return 0;
        }else{
            if(aluno1.mes>aluno2.mes)
                return 1;
            if(aluno1.mes<aluno2.mes)
                return 0;
        }
    }else{
        if(aluno1.ano>aluno2.ano)
            return 1;
        if(aluno1.ano<aluno2.ano)
            return 0;
    }
}

int main(void){
    int n,i,j;

    scanf("%d",&n);
    struct alunos *aluno,alunoaux;
    aluno = (struct alunos *)malloc(n*sizeof(struct alunos));

    for(i=0; i<n; i++){
        scanf("%d %d %d %d",&aluno[i].mat,&aluno[i].dia,&aluno[i].mes,&aluno[i].ano);
        scanf(" %[^\n]s", aluno[i].nome);
    }

   // printf("%d\n",ComparaDataNasc(aluno[0],aluno[1]));

    for(i = 1; i < n; i++){
        j = i;
        while(j > 0 && !ComparaDataNasc(aluno[j-1],aluno[j]) ){
            alunoaux = aluno[j-1];
            aluno[j-1] = aluno[j];
            aluno[j] = alunoaux;
            j--;
        }
    }

    for(i = 0; i < n; i++){
        printf("Matric.:  %d Nome:  %s Data Nasc:  %d/%d/%d\n",aluno[i].mat ,aluno[i].nome,aluno[i].dia,aluno[i].mes,aluno[i].ano);
    }

    return 0;
}
