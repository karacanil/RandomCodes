from matplotlib import pyplot as plt
from matplotlib import style
import numpy as np

style.use('ggplot')

#deneme.txt
x,y=np.loadtxt('test1.csv',
               unpack = True,
               delimiter = ',')

plt.plot(x,y)

plt.title('Epic Chart')
plt.ylabel('Y-axis')
plt.xlabel('X-axis')

plt.show()
