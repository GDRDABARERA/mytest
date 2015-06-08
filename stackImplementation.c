#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct snode{

	char name [20];
	char  eNo [10];
	struct snode * studentNext;
	struct cnode * courseNext;

};
typedef struct snode *studentNode;

 struct cnode{

	char  courseNo [10];
	struct cnode * courseNext;

};
typedef struct cnode * courseNode;

void insertStudentdata( char ENo[],char  Name[]);
void insertCoursedata( char  Courses[]);
//void printcourses();
void showlist();

studentNode studenthead = NULL;
courseNode coursehead = NULL;

int main (){
	char i;
	char  Name[20]; char  ENo[10];
	char Courses[10];

	printf("Do you have detais?(Y or N): \n");
	scanf("%c",&i);
	if(i=='Y'){
	
	while(i=='Y'){
		printf("Enter E.No :");
		scanf("%s",ENo);
		printf("\n");

		printf("Enter Name :");
		scanf("%s",Name);
		printf("\n");

		
		
		printf("Enter Courses :");
		scanf("%s",Courses);
		printf("\n");

		

		while(strcmp(Courses,"End")){

			insertCoursedata(Courses);
			scanf("%s%*c",Courses);
		}

		insertStudentdata(ENo,Name);

		printf("Do you have detais?(Y or N): \n");
		scanf("%c",&i);
	}

	
	showlist();
	
	}
	else{
		showlist();
		return 0;
	}

return 0;
}

void insertStudentdata(char ENo[],char Name[]){
	studentNode new_snode= (studentNode)malloc(sizeof (struct snode));
	studentNode tmp;
	tmp = studenthead;
	if(tmp){
		while(tmp->studentNext){
			tmp = tmp->studentNext;
		}
		tmp -> studentNext = new_snode;
	}
	else{
		studenthead = new_snode;
	}
	new_snode->courseNext=coursehead;
	coursehead = NULL;
	//insertCoursedata( Courses);
	strcpy(new_snode->name,Name);
	strcpy(new_snode->eNo , ENo);
	new_snode->studentNext=NULL;

return;

}

void insertCoursedata ( char  Courses[]){
		courseNode new_cnode=(courseNode)malloc(sizeof(struct cnode));
		courseNode tmp1;
		tmp1=coursehead;
		new_cnode->courseNext=NULL;
		strcpy(new_cnode->courseNo,Courses);

		if(tmp1){
			while(tmp1->courseNext){
				tmp1 = tmp1->courseNext;
			}
			tmp1 -> courseNext = new_cnode;
		}else{
			coursehead = new_cnode;
		}



	return;
	}

void printcourses(courseNode courseNext){
	courseNode tmp;
	tmp= courseNext;
	printf("Courses :");
	while(tmp){
		printf("%s\t",tmp->courseNo);
		tmp=tmp->courseNext;
	}
	//tmp=tmp->studentNext;
}

void showlist(){

	studentNode tmp;
	tmp= studenthead;
	while(tmp){
	printf("\n");
	printf("E_Number :%s\n",tmp->eNo);
	printf("Name : %s\n",tmp->name);
	printcourses(tmp -> courseNext);
	tmp=tmp->studentNext;
	}

}

