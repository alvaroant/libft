#include "libft.h"
#include <stdio.h>

int main()
{
    printf("%s", "True isalpha: ");
    printf("%d", ft_isalpha('A'));  // Carácter alfabético
    printf("%s", "\nFalse isalpha: ");
    printf("%d", ft_isalpha('#'));  // Carácter no alfabético

    printf("%s", "\nTrue isalnum: ");
    printf("%d", ft_isalnum('A'));  // Carácter alfanumérico
    printf("%s", "\nFalse isalnum: ");
    printf("%d", ft_isalnum('#'));  // Carácter no alfanumérico

    printf("%s", "\nTrue isascii: ");
    printf("%d", ft_isascii('A'));  // Carácter ASCII
    printf("%s", "\nFalse isascii: ");
    printf("%d", ft_isascii(130));  // Carácter no ASCII

    printf("%s", "\nTrue isdigit: ");
    printf("%d", ft_isdigit('5'));  // Dígito
    printf("%s", "\nFalse isdigit: ");
    printf("%d", ft_isdigit('A'));  // Carácter no dígito

    printf("%s", "\nTrue isprint: ");
    printf("%d", ft_isprint('A'));  // Carácter imprimible
    printf("%s", "\nFalse isprint: ");
    printf("%d", ft_isprint(7));  // Carácter no imprimible

    printf("%s", "\nTrue strlen: ");
    printf("%ld", ft_strlen("abc"));  // Longitud de cadena no vacía
    printf("%s", "\nFalse strlen: ");
    printf("%ld", ft_strlen(""));  // Longitud de cadena vacía

	return (0);
}
