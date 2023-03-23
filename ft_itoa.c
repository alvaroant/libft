/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:37:04 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 21:37:49 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n) {
    char *str;
    int len = 1, tmp = n;

    while (tmp /= 10) {
        len++;
    }

    if (n < 0) {
        len++;
    }

    str = (char *) malloc(sizeof(char) * (len + 1));

    if (!str) {
        return NULL;
    }

    str[len] = '\0';

    if (n == 0) {
        str[0] = '0';
        return str;
    }

    if (n < 0) {
        str[0] = '-';
        n = -n;
    }

    while (n) {
        str[--len] = n % 10 + '0';
        n /= 10;
    }

    return str;
}
