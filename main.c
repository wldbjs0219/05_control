#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
<<<<<<< HEAD
	int i;
	for (i=0; i<10; i++)
	 printf("Hello World!\n");
=======
	int i=0,meter;
	
	while (i<3)
	{
		meter=i*1609;
		printf("%d 마일은 %d 미터입니다. \n", i,meter);
		i++;
	}
>>>>>>> 9bafbac882569549e8a42e00559973bfee2a59af
	return 0;
}
