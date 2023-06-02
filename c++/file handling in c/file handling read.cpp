#include<stdio.h>
main()
{
	FILE *file1;
    file1=fopen("himanshu.txt","r");
	char data[20];
	fscanf(file1,"%s",&data);
	printf("%s",&data);
}
