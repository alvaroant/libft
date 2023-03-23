/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:42:59 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 21:43:35 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    unsigned int i = 0;

    if (!s || !f) {
        return;
    }

    while (s[i]) {
        (*f)(i, &s[i]);
        i++;
    }
}
