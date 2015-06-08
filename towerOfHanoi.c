#include <stdio.h>
#include <stdlib.h>
#include<math.h>



struct stack_node{
    int data;
    struct stack_node *next;

};
typedef struct stack_node stack_node_t;
typedef stack_node_t * stack_t;

  
stack_t  Src = NULL;
stack_t  Aux = NULL;
stack_t  Dest = NULL;

int push(int data, stack_t *tower);
int pop(int* data, stack_t  *tower);
int isEmpty(stack_t *tower);

int EnterdisckstoA (int n);

 
int main(){
    int n,i;
    printf("Enter the number of discs : ");
    scanf("%d",&n);
    printf("\n");
	if(n<=0){
		printf("You have entered a wrong number \n");

	}
	else{
   		 EnterdisckstoA(n);
		 int a,b,c;
    		 if(n%2==1){
        
			for(i=1;i<=(pow(2,n)-1);i++){

				if(isEmpty(&Src)) a=0;
				if(isEmpty(&Aux)) b=0;
				if(isEmpty(&Dest))c=0;

        			pop(&a,&Src);
				
        			if(a==1&& b==0&& c==0){
					push(a,&Dest);
					printf("Move %d from A to C", a);
				}
				
			}
   		 }
	}
    return 0;
}

int push(int x, stack_t *tower){
  stack_node_t *tmp = malloc(sizeof( stack_node_t));
  if(tmp) {
    tmp -> data = x;
    tmp -> next = *tower;
     tmp =*tower ;
    return 0;
  }
  return -1;
}

int pop(int *data, stack_t *tower) {
  if(*tower) {
    stack_node_t*tmp;
    tmp = *tower;
    (*tower) -> next = *tower;
    tmp -> data = *data;
    free(tmp);
    return 1;
  }
  return 0;
}
int isEmpty(stack_t * tower){
  return *tower ? 0 : 1;
}

int EnterdisckstoA (int n){
    int x;
    for(x=n;x>0;x--){
        push(x,&Src);
    }
	return 0;
}
