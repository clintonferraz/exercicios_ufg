#include<stdio.h>
#include<math.h>
struct pontos{
    double u,x,y,z;
};

int main(void){
    int n,i,j;
    scanf("%d",&n);
    struct pontos ponto[n];
    for(i=0; i<n; i++){
        scanf("%lf %lf %lf %lf",&ponto[i].u,&ponto[i].x,&ponto[i].y,&ponto[i].z);
    }
    double dist[n-1];
    for(i=0; i<n-1; i++){
        dist[i]=pow(ponto[i].u-ponto[i+1].u,2)+pow(ponto[i].x-ponto[i+1].x,2)+pow(ponto[i].y-ponto[i+1].y,2)+pow(ponto[i].z-ponto[i+1].z,2);
        dist[i]=sqrt(dist[i]);
        printf("%.2lf\n",dist[i]);
    }






    return 0;
}
