#include<stdio.h>
 
int main(void){
    int year, halley_year=1986, aux;
    scanf("%d",&year);
    aux=halley_year-year;
    while(year < halley_year && year + 76 < halley_year){
        halley_year -= 76;
    }
    while(year >= halley_year){
        halley_year += 76;
    }
    if(aux > 0 && aux/4 > 365)
        halley_year--;
    if(aux < 0 && (-aux)/4 > 365)
        halley_year++;
    printf("%d\n",halley_year);
}
