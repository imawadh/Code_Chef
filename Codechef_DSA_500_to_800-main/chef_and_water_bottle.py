#include <stdio.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	for(int i  =0 ; i<t ; i++)
	{
	    int a;
	    scanf("%d",&a);
	    char str[a];
	    scanf("%s",&str);
	    for(int j = 0 ; j<a ; j++)
	    {
	        if(str[j]=='A')
	        {
	            printf("%c",'T');
	        }
	        else if(str[j]=='T')
	        {
	            printf("%c",'A');
	        }
	        else if(str[j] == 'C')
	        {
	            printf("%c",'G');
	        }
	        else
	        {
	            printf("%c",'C');
	        }
	    }
	    printf("\n");
	}

}

