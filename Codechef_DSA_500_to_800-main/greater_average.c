/*
You are given three numbers 
T is the number of test cases 
print Yes if average of first two is greater than 3rd.
*/

#include <stdio.h>

int main(void) {
	// your code goes here
    int T;
    scanf("%d",&T);
    float a,b,c,d;
    for(int i = 0 ; i<T ; i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        d = (a+b)/2;
        if (d>c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }

}

