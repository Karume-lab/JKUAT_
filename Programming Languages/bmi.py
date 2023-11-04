"""
DANIEL KARUME
SCT211-0072/2022
"""

def get_bmi():
	weight = int(input('Enter your weight: '))
	height = int(input('Enter your height: '))
	bmi = (weight / height) ** 2

	if bmi < 18:
		return f'You are underweight with a BMI of {bmi}' 
	elif bmi > 24.5:
		return f'You are overweight with a BMI of {bmi}'
	else:
		return f'You have a normal weight with a BMI of {bmi}'

print(get_bmi())
