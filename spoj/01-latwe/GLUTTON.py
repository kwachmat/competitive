seconds_per_day = 86400
tests = int(raw_input())

for _ in range (tests):
	total_donuts = 0
	settings = map(int, raw_input().split(' '))
	while settings[0] > 0:
		glutton = int(raw_input())
		total_donuts += seconds_per_day/glutton
		settings[0] -= 1
	
	if total_donuts % settings[1] == 0:
		print total_donuts/settings[1]
	else:
		print total_donuts/settings[1] + 1
