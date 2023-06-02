#include<stdio.h>
main()
{
	FILE *file1;
	char data[20];
	printf("enter data :- ");
	scanf("%s",data);
	file1=fopen("himanshu.txt","w");
	fprintf(file1,"%s",data);
	
	file1=fopen("himanshu.txt","r");
	fscanf(file1,"%s",&data);
	printf("%s",&data);
}
