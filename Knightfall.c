#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void scanArray(int A[3][3]);
void rotateCounterClockwise(int V[3][3]);
void rotateClockwise(int V[3][3]);
int main(){

	int Array[3][3]={},i,j;
	char str;
	
	
	scanArray(Array);

	//printf("scanned values: %d %d %d",Array[3][0],Array[3][1],Array[3][2]);

	printf("Please enter the rotate direction l-CounterClockwise r-Clockwise e-exit.:\n");

	str=getchar();
	str=getchar();

	//printf("%c",str);

		if(str == 'r'){
			rotateClockwise(Array);


		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%c",Array[i][j]);
			}
		printf("\n");
		}

		}
	     	 else if(str == 'l'){
		rotateCounterClockwise(Array);

		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%c",Array[i][j]);
			}
		printf("\n");
		}

	      	}
	     	else{printf("error");}
	

	return 0;
}


void scanArray(int A[3][3]){
	char ch;
	int i,j;
	printf("Please enter the array in a one line without spaces:.\n");

	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			ch=getchar();
			if(isalpha(ch)){
				A[i][j]=ch;
			}
		}

	}
	
	return;
}


void rotateClockwise(int V[3][3]){
	int col,row,i,j;
	for(i=0,row=0;i<3 && row<3;i++,row++){
		for(j=0,col=2;j<3 && col>=0;j++,col--){
		  V[i][j]=V[col][row];

		}
	}

	return;
}
void rotateCounterClockwise(int V[3][3]){
	int col,row,i,j;
	for(i=0,row=2;i<3 && row>=0;i++,row--){
		for(j=0,col=2;j<3 && col>=0;j++,col--){
		  V[i][j]=V[col][row];

		}
	}

	return;
}




