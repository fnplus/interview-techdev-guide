# -*- coding: utf-8 -*-
"""
Created on Sat Oct 21 14:47:25 2019

@author: Sefira Karina
"""

data = [50, 17, 72, 12]


def add(newNum):
    data.append(newNum)

def delete():
    data.pop()
    
print("initial data:\n", data, "\nadd 23, ")
add(23)
print("new sequence:\n", data, "\nadd 10, ")
add(10)
print("new sequence:\n", data, "\nadd 40, ")
add(40)
print("new sequence:\n", data,"\nadd 20\n")
add(20)
print("new sequence:\n" , data, "\npop a number")
delete()
print("new sequence:\n" , data, "\npop a number")
delete()
print("new sequence:\n" , data)

