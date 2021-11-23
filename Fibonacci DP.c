#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void FiboFor(int n);
int FiboRec(int n);
int FiboRMemo(int n, int Fmemo[]);
//Previo a la memoization el FiboFor tarda 123 segundos en calcular 1000000 de numeros fibonacci
//Pre memoization FiboRec explota con n=1000000, tambien con n=500
//FiboRMem es capaz de calcular correctamente 50 numeros fibonacci, no pruebo con mas porque el consumo de memoria se eleva
//aun asi FiboRec explota con 50, por lo que vemos una mejora significativa
//Me gustaria terminar la Memoization en iterativo pero no se me ocurre como XD
//Actualizacion, el Memoizado calcula 500 numeros en menos de 5 segundos, intente que calcule el millon pero exploto como sospechaba
int main(){
	int n=0,i=0;
	//int fn1=0,fn2=1,fibo=0,x=0,y=0,z=0;
	int fibrec=0;
	int MemoFibo[50];  for(i=0;i<=50;i++){	MemoFibo[i]=-1;	} MemoFibo[0]=1; MemoFibo[1]=1;
	system("color 0a");
	printf("Bienvendo\nNecesito que escribas un numero N para sacar la serie Fibonacci\n");
	scanf("%d",&n);
	system("cls");
	/*
	fibrec=FiboRec(n);
	printf("%d\n",fibrec);*/
	
	//FiboFor(n);
	
	fibrec=FiboRMemo(n,MemoFibo);
	printf("%d\n",fibrec);
	
	system("pause");
	return 0;
}


void FiboFor(int n){
	int i, fibo=0,fn1=0,fn2=1;
	printf("Empezaremos la sucesion en la posicion 2, los elementos anteriores eran 0 y 1\n");
		for(i=0;i<=n-2;i++){
			fibo=fn1+fn2;
			fn1=fn2;
			fn2=fibo;
			printf("La sucesion en la posicion %d es: %d\n",i+2,fibo); 
		}
}


int FiboRec(int n){
 if (n<=1)  return 1;
 else  return FiboRec(n-2)+FiboRec (n-1);  
}

int FiboRMemo(int n, int Fmemo[]){
	if(Fmemo[n]!=-1){	return Fmemo[n];	} 
	   else{
	   	Fmemo[n]=FiboRMemo(n-2,Fmemo)+FiboRMemo(n-1,Fmemo);
		return Fmemo[n];
	   }	
}
 
