import numpy
import matplotlib.pyplot as plt
from scipy import stats


#x = numpy.random.uniform(0.0,5.0,250)

#x = numpy.random.normal(5.0,1.0,1000)
#y = numpy.random.normal(10.0,2.0,1000)

#plt.hist(x,100)

x = [5,7,8,7,2,17,2,9,4,11,12,9,6]
y = [99,86,87,88,111,86,103,87,94,78,77,85,86]

slope, intercept, r, p, std_err = stats.linregress(x,y)

print(r)

def myfunc(x):
    return slope*x + intercept

speed = myfunc(10)
print(speed)

mymodel = list(map(myfunc,x))

plt.scatter(x,y)
plt.plot(x, mymodel)
plt.show()