/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:18:25 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 22:06:41 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strjoin(-3, av + 1, ":"));
}
