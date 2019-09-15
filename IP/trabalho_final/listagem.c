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

void printlista(struct Alunos *aluno, int cont){ //Função que vai ser chamada para a exibição da lista consultada
    int i;
    printf("\n");
    for(i=0; i<cont; i++){
        printf("-----------------------------------------------------------\n");
        printf("Matrícula: %d\n",aluno[i].matricula);
        printf("Nome: %s\n",aluno[i].nome);
        printf("Notas de prova: %.2f %.2f %.2f %.2f %.2f %.2f\n",aluno[i].nprova[0],aluno[i].nprova[1],aluno[i].nprova[2],aluno[i].nprova[3],aluno[i].nprova[4],aluno[i].nprova[5]);
        printf("Notas de listas de exercicio: %.2f %.2f %.2f %.2f %.2f %.2f\n",aluno[i].nlexercicio[0],aluno[i].nlexercicio[1],aluno[i].nlexercicio[2],aluno[i].nlexercicio[3],aluno[i].nlexercicio[4],aluno[i].nlexercicio[5]);
        printf("Nota de trabalho: %.2f\n",aluno[i].ntrabalho);
        printf("Nota Final: %.2f\n",aluno[i].nfinal);
        printf("Quantidade de faltas: %d\n",aluno[i].faltas);
        printf("Situação: %s\n",aluno[i].situacao);
        printf("-----------------------------------------------------------\n");
        printf("\n");
    }
}

void listagem(void){
    struct Alunos aux,*aluno;
    char dir[100];
    int opcao=0,i,j,k;
    while(strcmp(dir,"fim")){
        printf("Digite o diretório com o nome do arquivo a ser consultado\n");
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
            opcao=0;
            while(opcao!=4){
                printf("Digite: \n");
                printf("1 - para listar os alunos por ordem crescente de matrícula;\n");
                printf("2 - para listar os alunos por ordem alfabética de nome;\n");
                printf("3 - para listar os alunos por ordem crescente de nota final;\n");
                printf("4 - para terminar e voltar para processar nova turma;\n");
                printf("5 - para terminar a execução do módulo.\n");
                printf("-> ");
                scanf("%d",&opcao);
                getchar();

                if (opcao==1){
                    for(j = 1; j < i; j++){ //insertion sort que organiza o struct por ordem crescente de matrícula
                        k = j;
                        while(k > 0 && aluno[k-1].matricula > aluno[k].matricula){
                            aux = aluno[k-1];
                            aluno[k-1] = aluno[k];
                            aluno[k] = aux;
                            k--;
                        }
                    }

                    printlista(aluno,i);
                }
                if (opcao==2){
                    for(j=0;j<i;j++){ //organiza o struct por ordem alfabetica de nome
                        for(k=j+1;k<i;k++){
                            if(strcmp(aluno[j].nome,aluno[k].nome)>0){
                            aux = aluno[j];
                            aluno[j] = aluno[k];
                            aluno[k] = aux;
                            }
                        }
                    }
                    printlista(aluno,i);
                }
                if (opcao==3){
                    for(j = 1; j < i; j++){ //insertion sort que organiza o struct por ordem crescente de nota final
                        k = j;
                        while(k > 0 && aluno[k-1].nfinal > aluno[k].nfinal){
                            aux = aluno[k-1];
                            aluno[k-1] = aluno[k];
                            aluno[k] = aux;
                            k--;
                        }
                    }
                    printlista(aluno,i);
                }
                if (opcao==5){
                    opcao=4;
                    strcpy(dir,"fim");
                }
            }
            free(aluno);
            fclose(f);
        }
    }
}
