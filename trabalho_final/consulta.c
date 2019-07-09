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

void consulta(void){
    struct Alunos *aluno;
    char dir[100];
    int matbusca,busca,i,j;
    while(strcmp(dir,"fim")){
        printf("Digite o diretório do arquivo a ser consultado\n");
        printf("ou digite 'fim' para retornar ao menu principal:\n");
        printf("-> ");
        scanf(" %[^\n]s",dir);
        getchar();
        FILE *f = fopen(dir,"rb");
        while (!f && strcmp(dir,"fim")){ //Loop para quando o usuário digitar um diretório de arquivo inválido
            printf("Erro ao tentar abrir arquivo!\n");
            printf("Digite um diretório de arquivo válido ou digite 'fim' para sair do módulo: \n");
            printf("-> ");
            scanf(" %[^\n]s",dir);
            getchar();
            f = fopen(dir,"rb");
        }
        if(f){
            aluno = (struct Alunos *)malloc(sizeof(struct Alunos));//Aloca na memória espaço para guardar 1 estrutura do tipo aluno
            i=0;
            while(fread(&aluno[i],sizeof(struct Alunos),1,f)){//Enquanto houver registros para ler no arquivo
                i++;
                aluno = (struct Alunos *) realloc( aluno, (i+1)*sizeof(struct Alunos) );//Aumenta o espaço alocado da memoria conforme mais registros vão sendo lidos no arquivo
            }
            matbusca=-1;
            while(matbusca!=0){
                printf("Digite uma matrícula de aluno para fazer uma nova consulta\n");
                printf("ou digite '0' para voltar e escolher outro arquivo:\n");
                printf("-> ");
                scanf("%d",&matbusca);
                getchar();
                busca=-1;
                for(j=0; j<i; j++){
                    if(aluno[j].matricula==matbusca){
                        busca=j;
                        break;
                    }
                }
                while(busca==-1 && matbusca!=0){
                    printf("Aluno não encontrado!\n");
                    printf("Digite uma matrícula válida ou digite '0' para sair e abrir outro arquivo:\n");
                    printf("-> ");
                    scanf("%d",&matbusca);
                    for(j=0; j<i; j++){
                        if(aluno[j].matricula==matbusca){
                            busca=j;
                            break;
                        }
                    }
                }
                if(busca!=-1){
                    printf("\n");
                    printf("-----------------------------------------------------------\n");
                    printf("Matrícula: %d\n",aluno[busca].matricula);
                    printf("Nome: %s\n",aluno[busca].nome);
                    printf("Notas de prova: %.2f %.2f %.2f %.2f %.2f %.2f\n",aluno[busca].nprova[0],aluno[busca].nprova[1],aluno[busca].nprova[2],aluno[busca].nprova[3],aluno[busca].nprova[4],aluno[busca].nprova[5]);
                    printf("Notas de listas de exercнcio: %.2f %.2f %.2f %.2f %.2f %.2f\n",aluno[busca].nlexercicio[0],aluno[busca].nlexercicio[1],aluno[busca].nlexercicio[2],aluno[busca].nlexercicio[3],aluno[busca].nlexercicio[4],aluno[busca].nlexercicio[5]);
                    printf("Nota de trabalho: %.2f\n",aluno[busca].ntrabalho);
                    printf("Nota Final: %.2f\n",aluno[busca].nfinal);
                    printf("Quantidade de faltas: %d\n",aluno[busca].faltas);
                    printf("Situação: %s\n",aluno[busca].situacao);
                    printf("-----------------------------------------------------------\n");
                    printf("\n");
                }
            }
            free(aluno);
            fclose(f);
        }

    }


}


