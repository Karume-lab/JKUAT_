from datetime import datetime


def get_age():
	current_date = datetime.now()
	dob = input('Enter your date of birth(DD/MM/YY): ')
	dys, mnths, yrs = [int(num) for num in dob.split('/')]
	try:
		dob_ = datetime(year=yrs, month=mnths, day=dys)
		years = current_date.year - int(yrs)
		months = current_date.month - int(mnths)
		days = current_date.day - int(dys)
	except ValueError:
		return 'Invalid Date!'
	return f'You are {days} {months} {years} old'
