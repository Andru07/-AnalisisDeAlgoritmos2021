#include <stdio.h>
#include <stdlib.h>
void ConteoMaster(int costo[], int peso[], int volumen[], int pesoLimite, int volumenLimite);
int main(){
	system("color 0a");
	int pesos[4],volumenes[4],costos[4],peso=0,volumen=0;
	//int auxpes[4], auxvol[4], auxcos[4];
	printf("Dime cual es la capacidad en peso de la mochila\n");
	scanf("%d",&peso);
	printf("Ahora dime la capacidad en volumen\n");
	scanf("%d",&volumen);
	printf("Cual es es valor del objeto 1\n");
	scanf("%d",&costos[0]);
	printf("Cual es el volumen que ocupa\n");
	scanf("%d",&volumenes[0]);
	printf("Cuanto pesa\n");
	scanf("%d",&pesos[0]);
	printf("Cual es es valor del objeto 2\n");
	scanf("%d",&costos[1]);
	printf("Cual es el volumen que ocupa\n");
	scanf("%d",&volumenes[1]);
	printf("Cuanto pesa\n");
	scanf("%d",&pesos[1]);
	printf("Cual es es valor del objeto 3\n");
	scanf("%d",&costos[2]);
	printf("Cual es el volumen que ocupa\n");
	scanf("%d",&volumenes[2]);
	printf("Cuanto pesa\n");
	scanf("%d",&pesos[2]);
	printf("Cual es es valor del objeto 4\n");
	scanf("%d",&costos[3]);
	printf("Cual es el volumen que ocupa\n");
	scanf("%d",&volumenes[3]);
	printf("Cuanto pesa\n");
	scanf("%d",&pesos[3]);
	
	ConteoMaster(costos,pesos,volumenes,peso,volumen);
	
	return 0;
}

void ConteoMaster(int costo[], int peso[], int volumen[], int pesoLimite, int volumenLimite){
	float volumenF[4], pesoF[4];//Esto es las veces que cabe en la mochila
	float costoF1[4],costoF2[4];
	int i,mayorP=0,mayorV=0,indic=0;
	
	
	for(i=0; i<=4; i++){
		volumenF[i]=volumen[i]/volumenLimite;
		pesoF[i]=peso[i]/pesoLimite;
	}
	
	
	  for(i=0;i<=4;i++){  costoF1[i]=costo[i]*pesoF[i]; costoF2[i]=costo[i]*volumenF[i];	}	
	  //for(i=0;i<=3;i++){  costoF2[i]=costo[i]*volumenF[i]; 	}	
	     
	for(i=0;i<=4;i++){  if(costoF1[i]>=mayorP) { mayorP=costoF1[i]; indic=i+1;	} 	}	
	for(i=0;i<=4;i++){  if(costoF2[i]>=mayorV) { mayorV=costoF2[i]; indic=i+1;	} 	}
	
	if(mayorP>mayorV){ printf("El objeto que te da mayor beneficio es  el %d, dandote en total $%d",indic,mayorP);	}
	else  printf("El objeto que te da mayor beneficio es  el %d, dandote en total $%d",indic,mayorV);
	
}
