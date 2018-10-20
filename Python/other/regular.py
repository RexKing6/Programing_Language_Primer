#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: regular.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/27 - 19:11:11
#	***************************************************

import re

#参数I,忽略大小写
str1 = 'iMoOc python'
pa = re.compile(r'imooc', re.I)

ma = pa.match(str1)
print ma.group()

mb = re.match(r'iMoOc', str1)
print mb.group()

mc = re.match(r'[1-3]','1')
print mc.group()

mc = re.match(r'[1-3-]','-')
print mc.group()

"""
\d/\D 匹配数字/非数字
\s/\S 匹配空白/非空白
\w/\W 匹配数字字母/非数字字母
"""
md = re.match(r'[\w]','0')
print md.group()

md = re.match(r'[\w]','.')
try:
	print md.group()
except:
	print 'error'

md = re.match(r'[\W]','.')
print md.group()

me = re.match(r'\]','a]')
#为什么这样匹配不了后中括号
#……秒反应从头开始匹配

"""
*:匹配前一个字符0次或者无限次
+:匹配前一个字符1次或者无限次
?:匹配前一个字符0次或者1次
{m}/{m,n}:匹配前一个字符m次或者n次
*?/+?/??:匹配模式变为非贪婪(尽可能少匹配字符)
"""

#匹配0至99
mf = re.match(r'[1-9]?[0-9]','90')
print mf.group()

mg = re.match(r'[a-zA-Z0-9]{6}','abc123')
print mg.group()

mg = re.match(r'[a-zA-Z0-9]{6}','abc12')
try:
	print mg.group()
except:
	print 'error'

mg = re.match(r'[a-zA-Z0-9]{6}','abc1234')
print mg.group()

#在不定次数后面加上?，变为懒惰模式，匹配到就好
mh = re.match(r'\w{6,10}','abc1234')
print mh.group()

mh = re.match(r'\w{6,10}?','abc1234')
print mh.group()

"""
^:匹配字符串开头
$:匹配字符串结尾
\A/\Z:指定的字符串必须出现在开头/结尾
"""
#想不通^和\A有什么区别

mi = re.match(r'bc1234$','abc1234')
#因为match()是从最开始匹配，匹配不到则返回none，应该要用search，尼玛……
mi = re.search(r'bc1234$','abc1234')
print mi.group()

#(ab)分组
"""
自己脑子里对分组的理解:
	a
	|
   / \
  b   c
   \ /
    |
	d
a可以通过b或c到达d，完成匹配
"""
mj = re.match(r'[\w]{4,6}@(163|126).com','imooc@126.com')
print mj.group()
mj = re.match(r'[\w]{4,6}@(163|126).com','imooc@163.com')
print mj.group()

#\<number>引用分组编号的字符串
#一开始不知道有啥用
#ex:匹配<html>python</html>

mk = re.match(r'<([\w]+>)','<html>')
print mk.group()
#上面匹配到的是book>

mk = re.match(r'<([\w]+>)\1','<html>html>')
print mk.group()

mk = re.match(r'<([\w]+>)[\w]+</\1','<html>python</html>')
print mk.group()

# (?P<name>):分组起一个别名
# (?P=name):引用别名为name的分组匹配字符串

mk = re.match(r'<(?P<mark>[\w]+>)[\w]+</(?P=mark)','<html>python</html>')
print mk.group()

#findall在一行内匹配所有
str2 = 'c++=100, java=90, python=80'
ml = re.findall(r'\d+',str2)
print ml

#sub替换
str3 = 'imooc videonum = 1000'
mm = re.sub(r'\d+','1001',str3)
print mm

def add1(match):
	val = match.group()
	num = int(val) + 1
	return str(num)

mm = re.sub(r'\d+',add1,str3)
print mm

str4 = 'imooc:C C++ Java Python'
print re.split(r':| ',str4)
str4 = 'imooc:C C++ Java Python,C#'
print re.split(r':| |,',str4)
