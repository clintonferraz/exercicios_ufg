#include<stdio.h>
#include<math.h>
int main(void){
    int cont=0,aux=0,fa[5],fb[5];
    double d=0;
    char a[5000],b[5000],c[10000];

    scanf("%[^\n]",c);
   
    for(int i = 0; i-aux < 5000; i++){
        if(c[i]!=';' && cont==0)
            a[i] = c[i];
        else{
            if(c[i] == ';'){
                cont++;
                aux=i+1;
            }else{
                b[i-aux] = c[i];
            }
        }
    }

    if(cont!=1)
        printf("FORMATO INVALIDO!\n");
    else{
        for(int i=0; i<5000; i++){
            if(a[i]=='a' || a[i]=='A')
                fa[0]++;
            if(a[i]=='e' || a[i]=='E')
                fa[1]++;
            if(a[i]=='i' || a[i]=='I')
                fa[2]++;
            if(a[i]=='o' || a[i]=='O')
                fa[3]++;
            if(a[i]=='u' || a[i]=='U')
                fa[4]++;


            if(b[i]=='a' || b[i]=='A')
                fb[0]++;
            if(b[i]=='e' || b[i]=='E')
                fb[1]++;
            if(b[i]=='i' || b[i]=='I')
                fb[2]++;
            if(b[i]=='o' || b[i]=='O')
                fb[3]++;
            if(b[i]=='u' || b[i]=='U')
                fb[4]++;
        }


        printf("(");
        for(int i = 0; i < 5; i++){
            printf("%d",fa[i]);
            if(i<4)
                printf(",");
            else
                printf(")");
        }
        printf("\n");


        printf("(");
        for(int i = 0; i < 5; i++){
            printf("%d",fb[i]);
            if(i<4)
                printf(",");
            else
                printf(")");
        }
        printf("\n");


        for(int i = 0; i < 5; i++){
            d+=(fa[i]-fb[i])*(fa[i]-fb[i]);
        }
        d=sqrt(d);
        printf("%.2lf\n",d);
    }
    return 0;
}