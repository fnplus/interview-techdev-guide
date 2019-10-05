# -*- coding: utf-8 -*-
"""
Created on Sat Oct 21 14:47:25 2019

@author: Sefira Karina
"""

data = [50, 17, 72, 12, 23, 54, 76, 9, 14, 19, 0, 0, 67]


def dfs(data, x, i):
    if i <= len(data):

        if data[i - 1] != 0:
            print("check", data[i - 1])

        if data[i - 1] == x:
            return i

        result = dfs(data, x, i * 2)  ##left side

        if result != -1:
            return result
        result = dfs(data, x, (i * 2) + 1)  ##right side

        if result != -1:
            return result

        return -1
    else:
        return -1

#x is the number to be found
dfs(data, 72, 1)
