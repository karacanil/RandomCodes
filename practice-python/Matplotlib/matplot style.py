from matplotlib import pyplot as plt
from matplotlib import style

#style.use('ggplot')
#dark_background
#grayscale

x = [5,6,7,8]

y = [7,3,8,3]

x2 = [4,5,7]

y2 = [8,9,7]

plt.plot(x,y,'g',linewidth=6)
plt.plot(x2,y2,'c',linewidth=10)

plt.title('This is epic!')

plt.ylabel('Y axes')

plt.xlabel('X axes')

plt.show()
