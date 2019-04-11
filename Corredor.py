import os
import numpy as np
import matplotlib.pyplot as plt



var=os.system("g++ MiguelSanchez_Ejercicio22.cpp -o results.x")
var=os.system("./results.x > results.dat")
data = np.loadtxt("results.dat")



plt.figure()
plt.hist(data[0:],bins=100)
plt.savefig("Hist.png")
