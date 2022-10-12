# Python3 program to find compound
# interest for given values.


def compound_interest(principle, rate, time):
	Amount = principle * (pow((1 + rate / 100), time))
	CI = Amount - principle
	print("Compound interest is", CI)

compound_interest(23424, 8.25, 3)
