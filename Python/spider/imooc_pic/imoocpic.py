#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: imoocpic.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/28 - 08:00:11
#	***************************************************

import urllib2,re

req = urllib2.urlopen('http://www.imooc.com/course/list')

buf = req.read()

listurl = re.findall(r'http.+\.jpg',buf)

i = 0

for url in listurl:
	 f = open(str(i)+'.jpg','w')
	 req = urllib2.urlopen(url)
	 buf = req.read()
	 f.write(buf)
	 i += 1


