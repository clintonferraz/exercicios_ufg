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
    setlocale(LC_ALL,"Portuguese"); //Possibilita utilização de caracteres da lingua portuguesa
    while(opcao!=5){
        #ifdef OS_Windows
            system("cls");//Comando de limpar a tela, caso o sistema operacional detectado seja windows
        #else
            system("clear");//Comando de limpar a tela, caso o sistema operacional detectado seja GNU/Linux
        #endif

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
