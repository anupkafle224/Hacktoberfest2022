# Python3 program to find compound
# interest for given values.


def compound_interest(principle, rate, time):
	Amount = principle * (pow((1 + rate / 100), time))
	CI = Amount - principle
	print("Compound interest is", CI)


P = input("Enter your principle amount:")
R = input("Enter your rate:")
T = input("Enter your time:")

compound_interest(float(P), float(R), float(T))
