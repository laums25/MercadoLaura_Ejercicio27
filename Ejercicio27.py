import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure(1)
plt.subplot(1,2,1)
data = np.loadtxt("Ejer.dat")

plt.plot(data[:401,0], data[:401,1])
plt.plot(data[403:4403,0], data[403:4403,1])
plt.plot(data[4403:4444,0], data[4403:4444,1])

plt.subplot(1,2,2)
plt.plot(data[4445:4845,0], data[4445:4845,1])
plt.plot(data[4846:8846,0], data[4846:8846,1])
plt.plot(data[8847:8867,0], data[8847:8867,1])




plt.axis('square')
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("Ejer.png")
