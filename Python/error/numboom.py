#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: numboom.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/28 - 09:11:35
#	***************************************************

import random

num = random.randint(0,100)

while True:
	try:
		guess = int(raw_input("Enter 1~100:"))
	except ValueError:
		print "Enter 1~100!"
		continue
	if guess > num:
		print "guess Bigger:",guess
	elif guess < num:
		print "guess Smaller:",guess
	else:
		print "Your mama boom!"
		break
