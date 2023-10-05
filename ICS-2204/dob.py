from datetime import datetime


def get_age():
	"""
	Summary:
		Calculate the age
	Args:
		None
	Returns:
		str: Final computation of the age
	Raises:
		ValueError: For invalid date formats
	"""
	current_date = datetime.now()
	dob = input('Enter your date of birth(DD/MM/YY): ')
	dys, mnths, yrs = [int(num) for num in dob.split('/')]
	try:
		dob_ = datetime(year=yrs, month=mnths, day=dys)
		years = current_date.year - int(yrs)
		months = current_date.month - int(mnths)
		days = current_date.day - int(dys)
	except ValueError:
		raise ValueError('Invalid Date!')
	return f'You are {days} {months} {years} old'
