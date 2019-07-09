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

void alteracao(void){
    struct Alunos *aluno;
    char dir[100];
    int matbusca,busca,i,j,opcao;
    while(strcmp(dir,"fim")){
        printf("Digite o diretório com o nome do arquivo a ser alterado\n");
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
                printf("Digite uma matrícula de aluno para fazer uma nova edição\n");
                printf("ou digite '0' para voltar e escolher outro arquivo:\n");
                printf("-> ");
                scanf("%d",&matbusca);
                getchar();
                busca=-1;
                for(j=0; j<i; j++){
                    if(aluno[j].matricula==matbusca){//Quando encontra o aluno com matricula digitada, salva o índice desse aluno na variavel 'busca'
                        busca=j;
                        break;
                    }
                }
                while(busca==-1 && matbusca!=0){//Loop para quando o programa não encontra um aluno no arquivo com a matricula digitada
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
                if(busca!=-1){//Ou seja, quando o programa tiver encontrado uma matricula igual à digitado e houver um índice salvo em busca
                    printf("\n");
                    printf("-----------------------------------------------------------\n"); //Printa os dados so aluno encontrado
                    printf("Matricula: %d\n",aluno[busca].matricula);
                    printf("Nome: %s\n",aluno[busca].nome);
                    printf("Notas de prova: %.2f %.2f %.2f %.2f %.2f %.2f\n",aluno[busca].nprova[0],aluno[busca].nprova[1],aluno[busca].nprova[2],aluno[busca].nprova[3],aluno[busca].nprova[4],aluno[busca].nprova[5]);
                    printf("Notas de listas de exercicio: %.2f %.2f %.2f %.2f %.2f %.2f\n",aluno[busca].nlexercicio[0],aluno[busca].nlexercicio[1],aluno[busca].nlexercicio[2],aluno[busca].nlexercicio[3],aluno[busca].nlexercicio[4],aluno[busca].nlexercicio[5]);
                    printf("Nota de trabalho: %.2f\n",aluno[busca].ntrabalho);
                    printf("Nota Final: %.2f\n",aluno[busca].nfinal);
                    printf("Quantidade de faltas: %d\n",aluno[busca].faltas);
                    printf("Situacao: %s\n",aluno[busca].situacao);
                    printf("-----------------------------------------------------------\n");
                    printf("\n");
                    printf("Digite:\n");
                    printf("1 - para alterar o nome do aluno;\n");
                    printf("2 - para alterar as notas de prova;\n");
                    printf("3 - para alterar as notas de lista de exercicio;\n");
                    printf("4 - para alterar a nota de trabalho;\n");
                    printf("5 - para alterar a quantidade de faltas.\n");
                    printf("6 - para voltar e consultar outro aluno.\n");
                    printf("-> ");
                    scanf("%d",&opcao);
                    getchar();
                    switch (opcao){
                        case 1:
                            printf("Digite um novo nome para o aluno: ");
                            scanf(" %[^\n]s",aluno[busca].nome);
                            getchar();
                        break;
                        case 2:
                            for(j=0; j<6; j++){
                                printf("Digite a nota da prova %d do aluno: ",j+1);
                                scanf("%f",&aluno[busca].nprova[j]);
                                getchar();
                            }
                        break;
                        case 3:
                            for(j=0; j<6; j++){
                                printf("Digite a nota da lista de exercicios %d do aluno: ",j+1);
                                scanf("%f",&aluno[busca].nlexercicio[j]);
                                getchar();
                            }
                        break;
                        case 4:
                            printf("Digite a nova nota de trabalho do aluno: ");
                            scanf("%f",&aluno[busca].ntrabalho);
                            getchar();
                        break;
                        case 5:
                            printf("Digite o novo total de faltas do aluno: ");
                            scanf("%d",&aluno[busca].faltas);
                            getchar();
                        break;
                    }
                    aluno[busca].mediaprovas = (aluno[busca].nprova[0]+aluno[busca].nprova[1]+aluno[busca].nprova[2]+aluno[busca].nprova[3]+aluno[busca].nprova[4]+aluno[busca].nprova[5])/6;
                    aluno[busca].medialistas = (aluno[busca].nlexercicio[0]+aluno[busca].nlexercicio[1]+aluno[busca].nlexercicio[2]+aluno[busca].nlexercicio[3]+aluno[busca].nlexercicio[4]+aluno[busca].nlexercicio[5])/6;
                    aluno[busca].nfinal = (aluno[busca].mediaprovas*0.8 + aluno[busca].medialistas*0.1 + aluno[busca].ntrabalho*0.1);

                    if(aluno[busca].nfinal>=6 && aluno[busca].faltas<0.25*128)
                        strcpy(aluno[busca].situacao,"Aprovado");
                    else if(aluno[busca].nfinal<6 && aluno[busca].faltas<0.25*128)
                        strcpy(aluno[busca].situacao,"Reprovado por nota");
                    else if(aluno[busca].nfinal>=6 && aluno[busca].faltas>=0.25*128)
                        strcpy(aluno[busca].situacao,"Reprovado por ausencia");
                    else
                        strcpy(aluno[busca].situacao,"Reprovado por ausencia e por nota");
                    f = fopen(dir,"wb"); //abre o arquivo com o parametro "wb" que sobrescreve o arquivo original
                    fwrite(aluno,sizeof(struct Alunos),i,f);//salva novamente todo o struct no arquivo
                    fclose(f);
                    printf("\n");
                    if(opcao==1 || opcao==2 || opcao==3 || opcao==4 || opcao==5)
                        printf("Aluno alterado com sucesso!\n");
                }
            }



        }


    }
}

