#include<stdio.h>

struct tabela{
    int cod;
    double valorcredito;
    char nomecurso[500];
};

struct alunos{
    char nome[500];
    int cod;
    int creditos;
    double valor;
};

int main(void){
    int n,m,i,j;

    scanf("%d",&n);
    struct tabela tabela1[n];
    for(i=0; i<n; i++){
        scanf("%d",&tabela1[i].cod);
        scanf("%lf",&tabela1[i].valorcredito);
        scanf(" %[^\n]s",tabela1[i].nomecurso);
    }
    scanf("%d",&m);
    struct alunos aluno[m];
    for(i=0; i<m; i++){
        scanf(" %[^\n]s",aluno[i].nome);
        scanf("%d",&aluno[i].cod);
        scanf("%d",&aluno[i].creditos);
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(aluno[i].cod==tabela1[j].cod){
                aluno[i].valor=aluno[i].creditos*tabela1[j].valorcredito;
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", aluno[i].nome,tabela1[j].nomecurso,aluno[i].creditos,tabela1[j].valorcredito,aluno[i].valor );
            }
        }

    }
  //  for(i=0; i<m; i++){

   // }




    return 0;
}
