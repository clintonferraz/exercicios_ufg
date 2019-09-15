#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Alunos {
    unsigned int matricula;
    char nome[80];
    float nprova[6],mediaprovas;
    float nlexercicio[6],medialistas;
    float ntrabalho;
    float nfinal;
    unsigned int faltas;
    char situacao[40];
};

void cadastro(void){
    FILE *f;
    int i;
    struct Alunos aluno;
    char dir[100];
    printf("Digite o diretório com o nome do arquivo a ser gravado\n");
    printf("ou digite 'fim' para retornar ao menu principal:\n");
    printf("-> ");
    scanf(" %[^\n]s",dir);
    if(strcmp(dir,"fim")) //Gravar arquivo somente se o nome digitado for diferente de "fim"
        f = fopen(dir,"ab");
    while (!f && strcmp(dir,"fim")){ //Loop para quando o usuário digitar um diretório de arquivo inválido
        printf("Erro ao tentar gravar arquivo! Talvez não tenha permissão?\n");
        printf("Digite um diretório de arquivo válido ou digite 'fim' para sair do módulo: \n");
        printf("-> ");
        scanf(" %[^\n]s",dir);
        getchar();
        if(strcmp(dir,"fim"))
            f = fopen(dir,"ab");
    }
    if(strcmp(dir,"fim")){

        while(1){
            printf("Digite a matrícula do novo aluno, ou digite 0 para sair: ");
            scanf("%d",&aluno.matricula);
            getchar();
            if(aluno.matricula==0)
                break;
            printf("Digite o nome do aluno: ");
            scanf(" %[^\n]s",aluno.nome);
            for(i=0; i<6; i++){
                printf("Digite a nota da prova %d do aluno: ",i+1);
                scanf("%f",&aluno.nprova[i]);
            }
            for(i=0; i<6; i++){
                printf("Digite a nota da lista de exercícios %d do aluno: ",i+1);
                scanf("%f",&aluno.nlexercicio[i]);
            }
            printf("Digite a nota de trabalho do aluno: ");
            scanf("%f",&aluno.ntrabalho);
            printf("Digite o numero total de faltas do aluno: ");
            scanf("%d",&aluno.faltas);

            aluno.mediaprovas = (aluno.nprova[0]+aluno.nprova[1]+aluno.nprova[2]+aluno.nprova[3]+aluno.nprova[4]+aluno.nprova[5])/6;
            aluno.medialistas = (aluno.nlexercicio[0]+aluno.nlexercicio[1]+aluno.nlexercicio[2]+aluno.nlexercicio[3]+aluno.nlexercicio[4]+aluno.nlexercicio[5])/6;
            aluno.nfinal = (aluno.mediaprovas*0.8 + aluno.medialistas*0.1 + aluno.ntrabalho*0.1);

            if(aluno.nfinal>=6 && aluno.faltas<0.25*128)
                strcpy(aluno.situacao,"Aprovado");
            else if(aluno.nfinal<6 && aluno.faltas<0.25*128)
                strcpy(aluno.situacao,"Reprovado por nota");
            else if(aluno.nfinal>=6 && aluno.faltas>=0.25*128)
                strcpy(aluno.situacao,"Reprovado por ausência");
            else
                strcpy(aluno.situacao,"Reprovado por ausência e por nota");

            fwrite(&aluno,sizeof(struct Alunos),1,f);
        }
        fclose(f);
    }
}

