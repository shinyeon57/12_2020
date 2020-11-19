#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	int	i;
	FILE *fp;
	char str[100];
	
	fp = fopen("sample.txt", "w");
	if(fp==NULL)
	{
		return -1;
	}
	
	for(i=0;i<3;i++)
	{
	
	printf("Input a word :");
	scanf("%s", str);
	
	fprintf(fp, "%s", str);
}
	
	fclose(fp);

}
