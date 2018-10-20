#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: a.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/27 - 10:15:07
#	***************************************************

def deco(arg):
	def _deco(func):
		def __deco():
			print("before %s called [%s]." % (func.__name__, arg))
			func()
			print("  after %s called [%s]." % (func.__name__, arg))
		return __deco
	return _deco

@deco("mymodule")
def myfunc():
	print(" myfunc() called.")

@deco("module2")
def myfunc2():
	print(" myfunc2() called.")
																	  
myfunc()
myfunc2()
