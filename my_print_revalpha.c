/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** task02
*/


int my_print_alpha(void)
{
    int letter;

    letter = 96;
    while (letter < 122) {
	my_putchar(letter);
	letter = letter + 1;
    }
    return (0);
}
