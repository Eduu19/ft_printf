/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimalformat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 14:29:48 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format. */
#include "printf.h"
#include <stdio.h>

size_t	puthex(unsigned int num, char x)
{
	size_t size;
	char x;
	size = 0;
	if(num > 0)
	{
		num /= 16;
		
	}
}