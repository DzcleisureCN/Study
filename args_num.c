#include<stdio.h>


int main(int argc, char * argv[])
{
        //This code is to fetach the first char of parameter
        for(argv++,argc--; argc > 0; argc--, argv++)
        {
		printf("argc is %d",argc);
		printf("argv is %c\n",argv[0][0]);
        }

}

