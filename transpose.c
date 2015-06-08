#include<stdio.h>

int main(){

int M[3][2],i,B[2][3],j,A[6];

printf("Enter a 3*2 metrix:\n ");

for(i=0;i<6;i++){
	scanf("%d",&A[i]);
}
M[0][0]=A[0]; M[0][1]=A[1]; M[1][0]=A[2]; M[1][1]=A[3]; M[2][0]=A[4]; M[2][1]=A[5];
for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		B[j][i]=M[i][j];
	}
}
printf("The Transpose is :\n");

for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("%d\t",B[i][j]);
	}
printf("\n");
}
printf("\n");
return 0;

}
