#include<stdio.h>
main()
{
	FILE *file1;
	file1=fopen("himanshu.txt","w");
	char data[20]="hello himanshu";
	fprintf(file1,"%s",data);
}
