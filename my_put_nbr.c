/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** Task7
*/


int negatif2(){}

int calcul(int a, int b, int c, int d, int e){
    a = nb / 1000000000;
    nb = nb - (a * 10000000000);
    b = nb / 1000000000;
    nb = nb - (b * 1000000000);
    c = nb / 1000000000;
    nb = nb - (c * 1000000000);
    c = nb / 1000000000;
    nb = nb - (d * 1000000000);
    d = nb 

}

int my_put_nbr(int nb){
    int a;
    int b;
    int c;
    int d;
    int e;
    
    if (nb == 0){
	my_putchar(48);
    }
    else if (nb < 0){
	my_putchar('45');
	calcul(nb, a, b, c, d, e);
    } else {
	calcul(nb, a, b, c, d, e);
    }
}


