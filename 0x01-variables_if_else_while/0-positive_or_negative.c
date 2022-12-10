#include <stdio.h>



/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    *Return:always return 0
 *
 *     */

int main(void)

{



		int n;



			srand(time(0));



				n = rand() - RAND_MAX / 2;

					if (n < 0)

							{

										printf("%d is negative\n", n);

											} else if (n == 0)

													{

																printf("%d is zero\n", n);

																	} else

																			{

																						printf("%d is positive\n", n);

																							}

																		return (0);

}



1-last_digit.c



#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    * Return: always return 0
 *
 *     */

int main(void)

{

		int n;

			int lastn;



				srand(time(0));



					n = rand() - RAND_MAX / 2;



						lastn = n % 10;



							if (lastn > 5)

									{

												printf("Last digit of %d is %d and is greater than 5\n", n, lastn);

													} else if (lastn == 0)

															{

																		printf("Last digit of %d is %d and is 0\n", n, lastn);

																			} else

																					{

																								printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);

																									}

																				return (0);

}



100-print_combo.c



#include <stdio.h>

/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    * Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

		int i;

			int j;



				for (i = 10; i <= 19; i++)

						{

									for (j = 10; j <= 19; j++)

												{

																if ((j % 10) > (i % 10))

																				{

																									putchar((i % 10) + '0');

																													putchar((j % 10) + '0');

																																	if (i != 18 || j != 19)

																																						{

																																												putchar(',');

																																																	putchar(' ');

																																																					}

																																				}



																		}

										}

					putchar('\n');

						return (0);

}



2-print_alphabet.c



#include <stdio.h>

/**
 *
 *  *main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     */

int main(void)

{

		char a;



			for (a = 'a'; a <= 'z' ; a++)

						putchar(a);

				putchar('\n');

					return (0);

}



3-print_alphabets.c



#include <stdio.h>

/**
 *
 *  *main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     */

int main(void)

{

			char a;



					for (a = 'a'; a <= 'z' ; a++)

									putchar(a);

							for (a = 'A'; a <= 'Z'; a++)

											putchar(a);

									putchar('\n');

											return (0);

}



4-print_alphbt.c



#include <stdio.h>

/**
 *
 *  *main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

		char a;



			for (a = 'a'; a <= 'z' ; a++)

					{

							if (a == 'q' || a == 'e')

									{

											continue;

												}

									putchar(a);

										}

				putchar('\n');

					return (0);

}



5-print_numbers.c



#include <stdio.h>

/**
 *
 *  *main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

		int a = 0;



			for (; a < 10 ; a++)

						printf("%d", a);

				putchar('\n');

					return (0);

}



6-print_numberz.c



#include <stdio.h>

/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

			int a = 0;



					for (; a < 10 ; a++)

									putchar('0' + a);

							putchar('\n');

									return (0);

}



7-print_tebahpla.c



#include <stdio.h>

/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

			char a;



					for (a = 'z'; a >= 'a' ; a--)

									putchar(a);

							putchar('\n');

									return (0);

}



8-print_base16.c



#include <stdio.h>

/**
 *
 *  *main - entry point
 *
 *   *
 *
 *    *Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

		unsigned char a = '0';

			int i;



				for (i = 0; i < 10; i++)

						{

									putchar(a);

											a++;

												}

						a = '1';

							for (i = 0; i < 6; i++)

																{

																			putchar('0' + a);

																					a++;

																						}

								putchar('\n');

									return (0);

}



9-print_comb.c



#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    * Return: always returns 0
 *
 *     *
 *
 *      */



int main(void)

{

		int i;



			for (i = 10; i < 20; i++)

					{

								putchar((i % 10) + '0');

										if (i != 19)

													{

																	putchar(',');

																				putchar(' ');

																						}

											}

				putchar('\n');

					return (0);

}



101-print_comb4.c



#include <stdio.h>

/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    * Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

		int i;

			int j;

				int k;



					for (i = 0; i <= 9; i++)

							{

										for (j = 0; j <= 9; j++)

													{

																	for (k = 0; k <= 9; k++)

																					{

																										if (k > j && j > i)

																															{

																																					putchar(i + '0');

																																										putchar(j + '0');

																																															putchar(k + '0');

																																																				if (i != 7 || j != 8 || k != 9)

																																																										{

																																																																	putchar(',');

																																																																							putchar(' ');

																																																																												}

																																																								}

																													}

																			}

											}

						putchar('\n');

							return (0);

}



102-print_comb5.c



#include <stdio.h>

/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    * Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

		int i;

			int j;



				for (i = 0; i <= 99; i++)

						{

									for (j = i + 1; j <= 99; j++)

												{

																putchar(i / 10 + '0');

																			putchar(i % 10 + '0');

																						putchar(' ');

																									putchar(j / 10 + '0');

																												putchar(j % 10 + '0');



																															if (!(i == 98 && j == 99))

																																			{

																																								putchar(',');

																																												putchar(' ');

																																															}

																																	}

										}

					putchar('\n');

						return (0);

}
