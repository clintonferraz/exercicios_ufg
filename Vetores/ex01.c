#include<stdio.h>
#include<math.h>

void func(long int *vi,long int nr,long int nd){
	if(vi[nr-1]!=nd-1)
		vi[nr-1]++;
	else{
		func(vi,nr-1,nd-1);
		vi[nr-1]=vi[nr-2]+1;
	}
}

int main(void){
	long int n,nd,nr,i,j;
	scanf("%ld %ld",&nd, &nr);
	scanf("%ld",&n);
	long int vi[nr],nv[nd];
	for (i=0;i<nr;i++){
		vi[i]=i;
	}
	      
	for(i=0; i<nd; i++){
            nv[i]=n%(int)pow(10,nd-i)/(int)pow(10,nd-i-1);
    }

	while(1){
		for (i=0;i<nr;i++){
			printf("%ld",nv[vi[i]]);
		}
		printf("\n");
		if(vi[0]==nd-nr)
			break;
		func(vi,nr,nd);
	}	
	
	return 0;
}
