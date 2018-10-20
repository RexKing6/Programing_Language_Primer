#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: iud_sql.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/28 - 19:41:51
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
conn.autocommit(False)

sql_insert = "insert into pet(name, owner) values('aa', 'bb')"
sql_update = "update pet set name='cc' where owner='bb'"
sql_delete = "delete from pet where ownerr='Diane'"

try:
	cursor.execute(sql_insert)
	print cursor.rowcount
	cursor.execute(sql_update)
	print cursor.rowcount
	cursor.execute(sql_delete)
	print cursor.rowcount

	conn.commit()
except Exception as e:
	print e
	conn.rollback()
	#出错便回滚至上一个单元块
	#不太懂单元块的定义，四个性质在这里也不能完全对应上
	#难道是因为用try所以看成同一个

cursor.close()
conn.close()

