/*
** EPITECH PROJECT, 2018
** my_print_comb.c
** File description:
** Task05
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}


int my_print_comb(void)
{
    int a = 48;
    int b = 49;
    int c = 50;
    
    while (c < 58 && c > b ) {
	my_putchar (a);
	my_putchar (b);
	my_putchar (c);
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
    

    int main(void)
{
    my_print_comb();
    return(0);
}
    
	
	

