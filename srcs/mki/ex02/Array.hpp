/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:12:32 by mki               #+#    #+#             */
/*   Updated: 2021/09/22 13:04:00 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
    T *_arr;
    int _n;

public:
    Array()
    {
        _arr = new T;
        _n = 0;
        std::cout << "default constructor" << std::endl;
    }
    Array(unsigned int n)
    {
        _arr = new T[_n];
        _n = n;
        std::cout << "default constructor with n" << std::endl;
    }
    Array(const Array &obj)
    {
        _arr = new T[obj._n];
        *this = obj;
        std::cout << "copy constructor" << std::endl;
    }
    Array &operator=(const Array &obj)
    {
        if (this == &obj)
        {
            return (*this);
        }
        _n = obj._n;
        for (int i = 0; i < _n; i++)
        {
            _arr[i] = obj._arr[i];
        }
        std::cout << "operator = overriding" << std::endl;
        return (*this);
    }
    T &operator[](int idx)
    {
        if (idx < 0 || idx >= _n)
        {
            throw std::exception();
        }
        return _arr[idx];
    }
    ~Array()
    {
        delete[] _arr;
        std::cout << "destructor" << std::endl;
    }
    int size() const
    {
        return _n;
    }
};

#endif
