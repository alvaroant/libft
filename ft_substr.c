/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:21:36 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 22:05:27 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *substr;
    size_t i;

    if (!s) {
        return NULL;
    }

    if (start > ft_strlen(s)) {
        return NULL;
    }

    if (len > ft_strlen(s) - start) {
        len = ft_strlen(s) - start;
    }

    substr = (char *) malloc(sizeof(char) * (len + 1));

    if (!substr) {
        return NULL;
    }

    for (i = 0; i < len && s[start + i] != '\0'; i++) {
        substr[i] = s[start + i];
    }

    substr[i] = '\0';

    return substr;
}