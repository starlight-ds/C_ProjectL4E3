/*
 * JazminnaSmirni_Lab_4_ex2.c
 *
 *  Created on: Feb 21, 2024
 *      Author: jsmirni
 */

#include <stdio.h>
#define POP_INCREASE .1

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	int pop = 9870;
	int count_years = 0;
	while (pop <= 30000)
	{
		pop += (pop * POP_INCREASE);
		count_years++;
	}

	printf("After %d years, the population with surpass 30,000", count_years);

	return 0;
}
