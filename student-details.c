 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 struct student{
	char name[50];
	int rollNo;
	float marks;
 };
 int main(){
	FILE *file;
	int num,i=0;
	char name[50];
	struct student s;
	file=fopen("for-student-details.txt","w");
	if(file==NULL){
		printf("File could not be opened\n");
		return 1;
	}
	printf("Enter the number of Students : ");
	scanf("%d",&num);
	for(;i<num;i++){
		printf("\nEnter details for student %d : \n",i+1);
		printf("Name  	    : ");
		scanf("%s",name);
		strcpy(s.name,name);
		printf("Roll Number : ");
		scanf("%d",&s.rollNo);
		printf("Marks		: ");
		scanf("%f",&s.marks);
		fprintf(file,"Name  	    : %s\nRoll Number : %d\nMarks    : %.2f\n",s.name,s.rollNo,s.marks);
	}
	fclose(file);
	printf("Student-details successfully stored in file");
	return 0;
 }
