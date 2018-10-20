#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: test.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/26 - 15:04:22
#	***************************************************

def deco(func):
	def _deco(*args, **kwargs):
		print("before %s called." % func.__name__)
		ret = func(*args, **kwargs)
		print("	after %s called. result: %s" % (func.__name__, ret))
		return ret
	#为了能使新函数每次都被调用，将新函数返回
	return _deco

@deco
def myfunc(a, b):
	print("myfunc(%s, %s) called." % (a, b))
	return a + b

@deco
def myfunc2(a, b, c):
	print("myfunc2(%s, %s, %s) called." % (a, b, c))
	return a + b + c

myfunc(1, 2)
myfunc(3, 4)
myfunc2(1, 2, 3)
myfunc2(3, 4, 5)
