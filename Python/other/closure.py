#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: closure.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/27 - 14:09:03
#	***************************************************

#通过闭包减少了两个不同标准相同原理的函数的代码量
def set_passline(passline):
	def cmp(val):
		if val >= passline:
			print('Pass')
		else:
			print('failed')
	return cmp

f_100 = set_passline(60)
f_150 = set_passline(90)
f_100(89)
f_150(89)



def my_sum(*arg):
	if len(arg) == 0:
		return 0
	#防止长度为0和type错误
	for val in arg:
		if not isinstance(val, int):
			return 0
	return sum(arg)

def my_average(*arg):
	if len(arg) == 0:
		return 0
	for val in arg:
		if not isinstance(val, int):
			return 0
	return sum(arg)/len(arg)

def mi_sum(*arg):
	return sum(arg)
def mi_average(*arg):
	return sum(arg)/len(arg)
def dec(func):
	def in_dec(*arg):
		print ('in dec arg=')
		if len(arg) == 0:
			return 0
		for val in arg:
			if not isinstance(val, int):
				return 0
		return func(*arg)
	return in_dec

mi_sum = dec(mi_sum)
#这才是装饰器的动机吧！

print (my_sum(1, 2, 3, 4, 5))
print (my_sum(1, 2, 3, 4, 5, '6'))
print (my_average(1, 2, 3, 4, 5))
print (my_average())
