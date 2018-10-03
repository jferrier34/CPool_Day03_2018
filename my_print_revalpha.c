/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** task02
*/

int my_print_revalpha(void)
{
    int letter;

    letter = 122;
    while (letter > 96) {
	my_putchar(letter);
	letter = letter - 1;
    }
    return (0);
}
