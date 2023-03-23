/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:48:48 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/22 21:49:36 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd) {
    if (n < 0) {
        write(fd, "-", 1);
        n = -n;
    }

    if (n >= 10) {
        ft_putnbr_fd(n / 10, fd);
    }

    char digit = n % 10 + '0';
    write(fd, &digit, 1);
}
