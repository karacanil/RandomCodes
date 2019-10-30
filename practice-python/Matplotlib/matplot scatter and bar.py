from matplotlib import pyplot as plt
from matplotlib import style

#style.use('ggplot')

x = [5,6,7,8]
y = [7,3,8,3]

x2 = [4,9,3]
y2 = [5,9,6]


plt.bar(x,y)
plt.bar(x2,y2)

plt.title('This is epic!')
plt.ylabel('Y axes')
plt.xlabel('X axes')

plt.show()
