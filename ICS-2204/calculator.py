name = input('Enter username: ')
print('\n\n')
print(f'Welcome {name} to our simple calculator!')
print('\n\n')
to_eval = input('Enter the operation you want to evaluate: ')

try:
	print(f'The answer for the computation is: {eval(to_eval)}')
except Exception:
	print('USAGE: [num1] [operator] [num2]...[num1]')
	print(f'{Exception}')
