#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: with.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/28 - 10:05:44
#	***************************************************

"""
with_as应用场景:
1.文件操作;
2.进程线程之间互斥对象，例如互斥锁;
3.支持上下文的其他对象(重写__enter__和__exit__特殊方法应该能方便很多)
"""

class Mycontex(object):
	def __init__(self,name):
		self.name = name

	def __enter__(self):
		print "__enter__"
		return self

	def do_self(self):
		print "do_self"
		a

	def __exit__(self,exc_type,exc_value,traceback):
		print "__exit__"
		print "Error:",exc_type," info:",exc_value

if __name__ == '__main__':
	with Mycontex('test context') as f:
		print f.name
		f.do_self()
