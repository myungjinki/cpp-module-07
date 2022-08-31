/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:08:21 by mki               #+#    #+#             */
/*   Updated: 2021/09/19 16:30:07 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#define LEN 5

void increase(int &num)
{
    num++;
}

int main()
{
    int arr[LEN] = {0, 1, 2, 3, 4};
    for (int i = 0; i < LEN; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    iter(arr, LEN, increase);
    for (int i = 0; i < LEN; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return (0);
}