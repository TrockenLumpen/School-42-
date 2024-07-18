/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:48:54 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/18 14:35:05 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	indexstart;
	int	indexend;
	int	temp;

	indexend = size -1;
	indexstart = 0;
	while (indexstart < indexend)
	{
		temp = tab[indexstart];
		tab[indexstart] = tab[indexend];
		tab[indexend] = temp;
		indexstart++;
		indexend--;
	}
}
/*
int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Call the function to reverse the array
    ft_rev_int_tab(myArray, size);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
*/
