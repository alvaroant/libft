/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:31:28 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 22:08:50 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    char *new_str;
    size_t s1_len, start, end, i;

    if (!s1) {
        return NULL;
    }

    if (!set) {
        return ft_strdup(s1);
    }

    s1_len = ft_strlen(s1);
    start = 0;
    end = s1_len - 1;

    while (start <= end && ft_strchr(set, s1[start])) {
        start++;
    }

    while (end >= start && ft_strchr(set, s1[end])) {
        end--;
    }

    new_str = (char *) malloc(sizeof(char) * (end - start + 2));

    if (!new_str) {
        return NULL;
    }

    for (i = 0; i < end - start + 1; i++) {
        new_str[i] = s1[start + i];
    }

    new_str[i] = '\0';

    return new_str;
}