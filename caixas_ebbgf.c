#include <stdio.h>
#include <stdlib.h>



int main(){
	int Nc, Np;
	int *caixas;
	int xi, yi;
	while(1){
		scanf("%d", &Nc);
		scanf("%d", &Np);
		caixas = calloc(Np,  sizeof(int));


		if(Np == 0 && Nc == 0)
			return 0;

		for (int i = 0; i < Np; i++ ){
			int input;
			scanf("%d", &caixas[i]);
			caixas[i]--;
			for (int j = 0; j <= caixas[i]; ++j){
				
				scanf("%d", &input);
				

				if (input == 1){
					xi = i;
					yi = j;
				}

			}			
		}
		int numE = 0, numD = 0, j=Np-1;
		for (int i = 0; i < Np; ++i){
			if(i<xi){
				if ((xi-1) < 0 ||caixas[i]<yi)
				{
					numE = 0;
				}
				if ( caixas[i] >= yi){
					numE = numE + (caixas[i]- (yi-1));
				}
			}
			if(j > xi){	
				if (xi+1 >= Np || caixas[j] < yi) {
					numD = 0;
				} 
				if ( caixas[j] >= yi){
					numD = numD + (caixas[j]- (yi-1));
				}
			}

			j--;
				
		}

		if (numD > numE)
		{
			numD = numE;
		}
		printf("%d\n", numD+ (caixas[xi]-yi));

	};
}
