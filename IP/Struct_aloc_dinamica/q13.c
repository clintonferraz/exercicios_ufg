#include<stdio.h>
#include<math.h>

struct Complex{
    double real;
    double imag;
};

struct RaizEqu2 {
    struct Complex raiz1;
    struct Complex raiz2;
};

struct RaizEqu2 calcula_raiz_equ_2(float a, float b, float c){
    struct RaizEqu2 raizes;
    float determinante;
    determinante=(b*b)-4*a*c;
    if(determinante>=0){
        raizes.raiz1.real=(-b+sqrt(determinante))/(2*a);
        raizes.raiz1.imag=0;
        raizes.raiz2.real=(-b-sqrt(determinante))/(2*a);
        raizes.raiz2.imag=0;
    }
    if(determinante<0){
        raizes.raiz1.real=(-b)/(2*a);
        raizes.raiz1.imag=+sqrt(fabs(determinante))/(2*a);
        raizes.raiz2.real=(-b)/(2*a);
        raizes.raiz2.imag=-sqrt(fabs(determinante))/(2*a);
    }

    return raizes;


}

void complex_print(struct Complex c){
        if(c.real==0 && c.imag==0)
            printf("0.00");
        if(c.real!=0 )
            printf("%.2f",c.real);
        if(c.imag>0 && c.real!=0)
            printf("+");
        if(c.imag!=0 && c.imag!=1 && c.imag!=-1)
            printf("%.2fi",c.imag);
        if(c.imag==1)
            printf("i");
        if(c.imag==-1)
            printf("-i");
        printf("\n");

}

int main(void){
    float a,b,c;
    struct RaizEqu2 raizes;


    scanf("%f %f %f",&a,&b,&c);
    raizes = calcula_raiz_equ_2(a,b,c);
    printf("x1 = ");
    complex_print(raizes.raiz1);
    printf("x2 = ");
    complex_print(raizes.raiz2);



    return 0;
}
