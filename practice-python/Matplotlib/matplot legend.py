from matplotlib import pyplot as plt
from matplotlib import style

x = [5,6,7,8]

y = [7,3,8,3]

x2 = [4,5,7]

y2 = [8,9,7]

plt.grid(True,color='k')

plt.plot(x,y,'g',linewidth=3,label='Line 1')
plt.plot(x2,y2,'c',linewidth=6,label='Line 2')

plt.title('This is epic!')
plt.ylabel('Y axes')
plt.xlabel('X axes')

plt.legend()

plt.show()
