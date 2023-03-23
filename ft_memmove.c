/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:35:00 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/19 19:41:28 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptrdest;
	const unsigned char *ptrsrc;

	ptrdest = (unsigned char*)dest;
	ptrsrc = (unsigned char*)src;

	if (ptrdest < ptrsrc)
	{
		while (n--)
			*ptrdest++ = *ptrsrc++;
	}
	else
	{
		ptrdest += n;
		ptrsrc += n;
		while (n--)
			*--ptrdest = *--ptrsrc;
	}
	return (dest);
}