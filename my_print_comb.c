/*
** EPITECH PROJECT, 2018
** my_print_comb.c
** File description:
** Task05
*/

int my_print_comb(void)
{
    int a = 48;
    int b = 49;
    int c = 50;
    
    while (c < 58 && c > b ) {
	my_putchar (a);
	my_putchar (b);
	my_putchar (c);
	if (((a - 48) * 100 + (b - 48) * 10 + c - 48 ) != 789 ){
	my_putchar (',');
	my_putchar (' ');
        }
        c++;
	
	if (c > 57) {
	    b++;
	    c = b + 1;
		if ( b == 57 ) {
		    a ++;
		    b = a + 1;
		    c = b + 1;
	   }
	}
    }
}
    
	
	

