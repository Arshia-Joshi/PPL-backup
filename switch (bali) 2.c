#include<stdio.h>
#include<string.h>
int main()
{
	int ch,result,len1,len2;
	char str1[50];
	char str2[50];
	printf("Enter value for first string =  ");
	scanf("%s",str1);
	printf("Enter value for second string =  ");
	scanf("%s",str2);
	printf("1.stringcopy 2.stringlength 3.stringcompare ");
	printf("Enter your choice= ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			strcpy(str1,str2);
			printf("value of string after string copy is = %s",str1);
			break;
		case 2:
			 len1=strlen(str1);
			printf("length of the string 1 is = %d ",len1);
			len2=strlen(str2);
			printf("length of the string 2 is = %d ",len2);
			break;
		case 3:
			result=strcmp(str1,str2);
			if(result==0)
			{
				printf("both the strings are same");
			}
			else
			{
				printf("both strings are not equal");
			}
			break;
			default:
			printf("Enter valid choice");
    }
		
		return 0;
    	}
	
