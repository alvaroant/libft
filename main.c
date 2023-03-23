#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

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

	char memsetTest[20];
	strcpy(memsetTest, "Hello World!");
	printf("%s %s", "\nBefore memset: ", memsetTest);
	ft_memset(memsetTest, '!', 5);
	printf("%s %s", "\nAfter memset: ", memsetTest);

	char bzeroTest[20];
	strcpy(bzeroTest, "Hello World!");
	printf("%s %s", "\nBefore bzero: ", bzeroTest);
	ft_bzero(bzeroTest, 5);
	printf("%s %s", "\nAfter bzero: ", bzeroTest);

	char srcMemCpy[20];
	strcpy(srcMemCpy, "overwrite me");
	char destMemCpy[30];
	strcpy(destMemCpy, "String to be overwritten");
	printf("%s %s", "\nBefore memcpy: ", destMemCpy);
	ft_memcpy(destMemCpy, srcMemCpy, 12);
	printf("%s %s\n", "\nAfter memcpy: ", destMemCpy);

    char string[] = "Hola me llamo alvaro, que tal estas, mucho gusto";
    char ft_memcpy_example[49];
    char ft_memmove_example[49];
	char memcpy_example[49];
	char memmove_example[49];

    strcpy(ft_memcpy_example, string);
    strcpy(ft_memmove_example, string);
	strcpy(memcpy_example, string);
	strcpy(memmove_example, string);

    // Usando ft_memcpy
    puts("\nOriginal:");
    puts(ft_memcpy_example);
    ft_memcpy(ft_memcpy_example + 5, ft_memcpy_example, 7);
    puts("Con ft_memcpy:");
    puts(ft_memcpy_example);

	//usando memcpy
	puts("Original:");
	puts(memcpy_example);
	memcpy(memcpy_example + 5, memcpy_example, 7);
	puts("Con memcpy:");
	puts(memcpy_example);

    // Usando ft_memmove
    puts("Original:");
    puts(ft_memmove_example);
    ft_memmove(ft_memmove_example + 5, ft_memmove_example, 7);
    puts("Con ft_memmove:");
    puts(ft_memmove_example);
    
	//usando memmove
	puts("Original:");
	puts(memmove_example);
	memmove(memmove_example + 5, memmove_example, 7);
	puts("Con memmove:");
	puts(memmove_example);

	char ft_strlcpy_dest[50]; // Incrementamos el tamaño del array en 1 para el carácter nulo

	char *ft_strlcpy_src = "Hola me llamo alvaro";
	size_t ft_strlcpy_result = ft_strlcpy(ft_strlcpy_dest, ft_strlcpy_src, sizeof(ft_strlcpy_dest));

	printf("%s %s", "\nft_strlcpy_dest: ", ft_strlcpy_dest);
	printf("%s %ld\n", "\nft_strlcpy_result: ", ft_strlcpy_result);

	char strlcat_example1[50] = "Hola me llamo alvaro";
	char strlcat_example2[50] = ", mucho gusto";

	size_t strlcat_result = strlcat(strlcat_example1, strlcat_example2, sizeof(strlcat_example1));

	printf("%s %s", "\nstrlcat_example1: ", strlcat_example1);
	printf("%s %ld\n", "\nstrlcat_result: ", strlcat_result);

	char ft_toupper_example1 = 'a';
	char ft_toupper_result = ft_toupper(ft_toupper_example1);
	printf("%s %c", "\nft_toupper_example1: ", ft_toupper_result);
 
	char ft_tolower_example1 = 'B';
	char ft_tolower_result = ft_tolower(ft_tolower_example1);
	printf("%s %c", "\nft_tolower_example1: ", ft_tolower_result);



	return (0);
}
