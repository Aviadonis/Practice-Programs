import sympy 
from sympy.abc import pi
def divide42by(divideBy):
  try:
    return 42/divideBy
  except ZeroDivisionError:
    print('\n\n\n\nSee the division by zero is not a problem if you are not really looking for a solution.\n Since, division by zero leads to the formation of a non-terminating number which tends to infinity\n So you see it\'s really a hopeless endeavour but since you\'re so hellbent on finding it, My choice of answer for you is \n %s'% sympy.pretty(pi))
    sympy.pretty(pi)

print (divide42by(5))
print (divide42by(2)) 
print ('Dividing by 0'+ str(divide42by(0)))