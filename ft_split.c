/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:33:09 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 22:12:36 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char **ft_split(char const *s, char c) {
    char **split_str;
    size_t i, j, len, count;

    if (!s) {
        return NULL;
    }

    len = ft_strlen(s);
    count = 0;

    for (i = 0; i < len; i++) {
        if (s[i] != c && (i == 0 || s[i - 1] == c)) {
            count++;
        }
    }

    split_str = (char **) malloc(sizeof(char *) * (count + 1));

    if (!split_str) {
        return NULL;
    }

    i = 0;
    j = 0;

    while (i < len && j < count) {
        size_t start, end;

        while (i < len && s[i] == c) {
            i++;
        }

        start = i;

        while (i < len && s[i] != c) {
            i++;
        }

        end = i;

        if (end > start) {
            split_str[j] = (char *) malloc(sizeof(char) * (end - start + 1));

            if (!split_str[j]) {
                for (j = j - 1; j >= 0; j--) {
                    free(split_str[j]);
                }

                free(split_str);

                return NULL;
            }

            ft_memcpy(split_str[j], &s[start], end - start);
            split_str[j][end - start] = '\0';
            j++;
        }
    }

    split_str[j] = NULL;

    return split_str;
}