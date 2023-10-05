def tip_calc():
	TIP_OPTIONS = (10, 12, 15)
	total = float(input('Enter the total bill amount: '))
	print('Pick the tip from the ones below:')
	print([tip for tip in TIP_OPTIONS])
	tip = int(input())
	if tip not in TIP_OPTIONS:
		raise ValueError('Enter a valid tip!')
	split = int(input('Enter the number of people splitting the bill: '))
	tip_amount = total * tip / 100
	total_amount = total + tip_amount
	each_amount = total_amount / split
	return f'Each person to pay: KSh {each_amount:.2f}'

print(tip_calc())
