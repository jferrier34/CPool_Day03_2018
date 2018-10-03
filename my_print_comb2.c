/*
** EPITECH PROJECT, 2018
** my_print_comb2.c
** File description:
** Task06
*/

int my_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    for ( a = 48; a <= 57; a = a + 1){
	for ( b = 48; b <= 57 ; b = b + 1){
	    my_print_comb2bis(d, c, b, a);
	}
    }
}

int  my_print_comb2bis(int d, int c, int b, int a){
    for (c = 48; c <= 57; c = c + 1){
	for (d = 48; d <= 57; d = d + 1){
	    if ((a + b) < (c + d)){
	    my_putchar(a);
	    my_putchar(b);
	    my_putchar(' ');
	    my_putchar(c);
	    my_putchar(d);
	    if ((a+b)==113 && a == 56 && b == 57){
		my_putchar(',');
		my_putchar(' ');
	    }
	    if (a <= 57 && (a + b + c + d) != 227){
		my_putchar(',');
		my_putchar(' ');
	    }
	 }
     }

    }
}
