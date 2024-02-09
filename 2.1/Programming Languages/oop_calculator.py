class Calculator:
	def __init__(self, num1, operation ,num2) -> None:
		self.num1 = num1
		self.operation = operation
		self.num2 = num2
	
	def add(self):
		return self.num1 + self.num2
	
	def subtract(self):
		return self.num1 - self.num2
	
	def divide(self):
		return self.num1 / self.num2
	
	def multiply(self):
		return self.num1 * self.num2
	
	def evaluate(self):
		if self.operation == '+':
			return self.add()
		elif self.operation == '-':
			return self.subtract()
		elif self.operation == '*':
			return self.multiply()
		else:
			return self.divide()

def get_attrs():
	string = input("CASIO <CRTL+C>: ")
	
	if '+' in string:
		delim = '+'
	elif '-' in string:
		delim = '-'
	elif '*' in string:
		delim = '*'
	elif '/' in string:
		try:
			delim = '/'
		except ZeroDivisionError:
			print("Cannot divide by zero!")
	else:
		print("Invalid operation!")
		return ()

	attrs_tuple = string.partition(delim)
	try:
		num1 = int(attrs_tuple[0].replace(' ', ''))
		operation = attrs_tuple[1].replace(' ', '')
		num2 = int(attrs_tuple[2].replace(' ', ''))
	except Exception:
		print("Invalid input!")
		return ()
	return (num1, operation, num2)

def main():
	while True:
		if get_attrs():
			num1, operation, num2 = get_attrs()
			casio = Calculator(num1=num1, operation=operation, num2=num2)
			print(casio.evaluate())
		else:
			print("Syntax Error!")


if __name__ == "__main__":
	main()
