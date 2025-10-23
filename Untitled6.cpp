#include<stdio.h>
int main(){
	char ch;
	int lines,i,j;
	
	//Input the character to print
	printf("Enter the character to print:");
	scanf("%d",&lines);
	
	//Nested loops to oprint the pattern
	for (i =1;i<=lines;i++){   //For each line
	for (j =1;j<=i;j++){     //Print character increasing per line
	  printf("%c",ch);
	}
	printf("\n");
	}
	
	return 0;
}
