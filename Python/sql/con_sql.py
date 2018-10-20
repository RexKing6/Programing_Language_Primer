#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: connectsql.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/28 - 18:56:58
#	***************************************************

import MySQLdb

conn = MySQLdb.Connect(
					host = '127.0.0.1',
					port = 3306,
					user = 'root',
					passwd = '123456',
					db = 'test',
					charset = 'utf8'
					)

cursor = conn.cursor()

sql = "select *from pet"
cursor.execute(sql)

print cursor.rowcount

rs = cursor.fetchone()
print rs

rs = cursor.fetchmany(3)
print rs

rs = cursor.fetchall()
print rs

for row in rs:
	print "pet=%s, owner=%s" % (row[0],row[1])


cursor.close()
conn.close()

