#!/bin/python3

# the sum of two elements defines the next

a = 0
b = 1


while a < 10:
    print(a)

    temp = a + b
    a = b
    b = temp

