/*
	Докажите,что произведение двух последовательных
	четных чисел делиться на 4 
*/

#include <stdio.h>

int main()
{
	int chet=0;
	int nchet=0;	
	int k=0;
	printf("k: ");
	if(scanf("%d", &k))
	{
		if(!(k%2))	// чет
		{
			chet=(2*k)/4;

			printf("chet = (2*k):4\n");
			printf("answer = %d\n", chet);
		}
		else if(k%2) 	// нечет
		{
			nchet=(2*(k-1))/4;
			printf("nchet = (2*(k-1)):4\n");
			printf("answer = %d\n", nchet);
		}
		else perror("=(");
	}
	else perror("scanf()");

	return 0;
}
