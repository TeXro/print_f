/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:57:24 by zzin              #+#    #+#             */
/*   Updated: 2024/11/30 10:35:54 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int main(){
    // char h = 'q';
    // char *s = "hello";
    //int z = -1;
    // int test = 56;
    // char *strt = NULL;
	// int fd = open("debug.txt", O_RDWR);
    // //close(STDOUT_FILENO);
   	// int pm = ft_printf("hello");
	// char res[2];
	// res[0] = pm + '0';
    // write(fd, &res[0], 1);
	printf("len:\nO:|%d|\nM:|%d|", printf("%p\n", "hello"), ft_printf("%p\n", "hello"));
    // int result = (unsigned)test;
    // printf("%d", result);  
}