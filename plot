import matplotlib.pyplot as plt
import numpy as np 
x=np.arange(0,20,0.1)
y=np.sin(x)
z=np.tan(x)
fig=plt.figure(figsize=(10,10))
plt.scatter(x,y,
s=20,
marker="*",
edgecolor="blue",
color="white")
plt.scatter(x,z,
s=20,
marker="o",
edgecolor="red",
color="white")
plot.show()

