#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: html_outputer.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/25 - 15:51:38
#	***************************************************

class HtmlOutputer(object):
	def __init__(self):
		self.datas = []

	def collect_data(self,data):
		if data is None:
			return
		self.datas.append(data)

	def output_html(self):
		fout = open('output.html','w')

		fout.write("<html>")
		fout.write("<body>")
		fout.write("</body>")
		fout.write("<table>")
		
		for data in self.datas:
			fout.write("<tr>")
			fout.write("<td>%s</td>" %data['url'])
			fout.write("<td>%s</td>" %data['title'].encode('utf-8'))
			fout.write("<td>%s</td>" %data['summary'].encode('utf-8'))
			fout.write("</tr>")

		fout.write("</table>")
		fout.write("</html>")
		fout.close()
