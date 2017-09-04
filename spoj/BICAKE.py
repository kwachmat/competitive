from math import ceil, sqrt

while 1:
	try:
		g = float(raw_input())
		if g < 2.0:
			print '0'
		else:
			c = (-2.0)*(g-1)
			x1 = (-1.0 - sqrt(1.0 - 4.0*c))/2.0
			x2 = (-1.0 + sqrt(1.0 - 4.0*c))/2.0
		
			print int(ceil(x1)) if x1>0.0 else int(ceil(x2))
	except:
		break
