#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isvowel(char c);


int main(){
	char ch;
	printf("Enter a string :");
	//scanf("%s",ch);
	
	while((ch=getchar())!='\n'){
          //ch = getchar();
		if(isvowel(ch))
			putchar(ch); 
	
	}

	printf("\n");
return 0;

}

int isvowel(char c){

	//char c;
	int flag;

	if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')){
  		flag=0;
	}
	else flag=1;


return flag;

}
