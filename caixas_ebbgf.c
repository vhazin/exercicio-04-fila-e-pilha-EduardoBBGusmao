#include <stdio.h>
#include <stdlib.h>
typedef struct PILHAS {
	int caixa;
	struct PILHAS* prox;
} pilhas;

typedef struct numP
{
	pilhas* pil;
	struct numP* next;
}Np;

int main(){
	Np* p = (Np*)malloc(sizeof(Np));
	int Npilha, Ncaixas;

	while(Ncaixas != 0 || Npilha != 0){
		scanf("%d %d", &Ncaixas, &Npilha);

		for (int i = 0; i < Npilha; ++i){
			int input;
			scanf("%d", &input);
			Np* ptemp = (Np*)malloc(sizeof(Np));
			pilhas* temp = (pilhas*)malloc(sizeof(pilhas));
			for (int j = 0; j < input; ++j){
				int val;
				scanf("%d", &val);
					if(j ==0){
						temp -> prox = NULL;
						temp -> caixa = val;

					} else{
						
						pilhas* atual = (pilhas*)malloc(sizeof(pilhas));
						atual -> caixa =  val;
						atual -> prox =  NULL;

						while(temp -> prox != NULL){
							temp = temp -> prox;
						};
						printf("while -> caixa: %d\n", val);
						temp -> prox = atual;
						printf("temp -> caixa: %d\n", atual -> caixa);

					}


				}

			if (i==0) {
				p -> next =  NULL;
				p -> pil = temp;
				printf("pil -> : %d\n", p-> pil -> caixa);

			} else {
				Np* ant = (Np*)malloc(sizeof(Np));
				ant = p;
				ptemp -> next = NULL;
				ptemp -> pil = temp;
				while(ant -> next != NULL){
					ant = ant -> next;
				};
				ant -> next = ptemp;
				printf("pil -> : %d\n", ant -> next-> pil -> caixa);


			}


		}

		for (int i = 0; i < Npilha; ++i)
		{	
			printf("%d ", i);
			pilhas* temp = (pilhas*)malloc(sizeof(pilhas));
			temp = p->pil;
			printf("%d ", temp->caixa);
			while(temp -> prox !=NULL){
				temp = temp->prox;
				printf("%d ", temp->caixa);
			};
			printf("\n");
			p = p->next;  
		}

		for (int i = 0; i < Npilha; ++i)
		{
			
		}
	}		
}

/*
4 3
1 3
2 1 2
1 4
*/


