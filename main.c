#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>
#ifdef __unix__
#elif defined(_WIN32) || defined(WIN32)
   #define OS_Windows
#endif

void cadastro(),consulta(),alteracao(),listagem();

int main(void){
    int opcao;
    while(opcao!=5){
        #ifdef OS_Windows
            /* Codigo Windows */
            system("cls");
        #else
            /* Codigo GNU/Linux */
            system("clear");
        #endif

        setlocale(LC_ALL,"Portuguese");
        printf("[======== MENU PRINCIPAL ========]\n");
        printf("| Digite:                        |\n");
        printf("| 1 - Cadastrar uma turma;       |\n");
        printf("| 2 - Consultar um aluno;        |\n");
        printf("| 3 - Alterar dados de um aluno; |\n");
        printf("| 4 - Listar dados de uma turma; |\n");
        printf("| 5 - Terminar a execução.       |\n");
        printf("+--------------------------------+\n");
        printf("-> ");
        scanf("%d",&opcao);
        getchar();

        switch (opcao){
            case 1:
                cadastro();
            break;
            case 2:
                consulta();
            break;
            case 3:
                alteracao();
            break;
            case 4:
                listagem();
            break;
        }
    }
    return 0;
}
