/*
** EPITECH PROJECT, 2018
** my_print_alpha.c
** File description:
** task01
*/

int my_print_alpha(void)
{
    int letter;
    
    letter = 97;
    while (letter < 123) {
	my_putchar(letter);
	letter = letter + 1;
    }
    return (0);
}
