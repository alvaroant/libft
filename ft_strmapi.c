/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:39:38 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 21:40:27 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    char *str;
    size_t len, i;

    if (!s || !f) {
        return NULL;
    }

    len = ft_strlen(s);
    str = (char *) malloc(sizeof(char) * (len + 1));

    if (!str) {
        return NULL;
    }

    for (i = 0; i < len; i++) {
        str[i] = (*f)(i, s[i]);
    }

    str[len] = '\0';

    return str;
}




