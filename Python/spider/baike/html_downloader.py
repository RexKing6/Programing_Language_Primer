#!/bin/python
# -*- coding: utf-8 -*-
#	***************************************************
#		^> File Name: html_downloader.py
#		^> Author: T-Rex
#		^> Mail: 1010026261@qq.com
#		^> Created Time: 2016/08/25 - 15:50:40
#	***************************************************

import urllib2

class HtmlDownloader(object):
	def download(self,url):
		if url is None:
			return None

		response = urllib2.urlopen(url)

		if response.getcode() != 200:
			return None

		return response.read()
