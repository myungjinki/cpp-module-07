/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:55:47 by mki               #+#    #+#             */
/*   Updated: 2021/09/19 14:59:51 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T a, T b)
{
    if (a < b)
    {
        return (a);
    }
    return (b);
}

template <typename T>
T max(T a, T b)
{
    if (a > b)
    {
        return (a);
    }
    return (b);
}

#endif
