#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: try_except.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/28 - 08:56:49
#	***************************************************

"""
先清楚Python几种错误:
1.NameError
2.SyntaxError
3.IOError
4.ZeroDivisionError
5.ValueError
"""
#之前只是很粗鄙地使用try_except
try:
	pass
except:
	pass
#这样写的话，最好确保程序不会发生除了你预想中的那种错误

#try_except捕获的是运行时的错误和异常，一开始的语法错误无法捕捉，因为try压根没运行
try:
	a
except NameError,e:		#后面可以接多个except，判定多种特定错误
	print 'catch error:',e
print 'exec over'

#try_except_else
try:
	a
except NameError,e:
	print 'catch error:',e
else:
	print 'no error'

#try_finally:为异常处理事件提供清理机制，用来关闭文件或者释放系统资源
try:
	f = open('1.txt')
	print int(f.read())
finally:
	print "file close"
	f.close()

#try_except_finally
#无异常:try->finally;有异常:try->except->finally
try:
	f = open('1.txt')
	line = f.read(2)
	num = int(line)
	print "read num=%d" % num
except IOError,e:
	print "catch IOError:",e
except ValueError,e:
	print "catch ValueError:",e
finally:
	print "close file"
	f.close()

#try_except_else_finally
#无异常:try->else->finally;有异常:try->except->finally


