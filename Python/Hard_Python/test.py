def f():
	print 'call f()...'
	def g():
		print 'call g()...'
	return g

f = calc_prod([1, 2, 3, 4])
print f()
