import numpy as np


ed = "\n-------------------------\n"
a = np.array([[1,-2,3],[4,5,-6]])
b = np.array([[3,0,2],[-7,1,8]])
c = np.add(a,b)
print("A+B=\n",c,end=ed)
d = np.subtract(2*a,b)
print("2A-B=\n",d,end=ed)
e = 3*b
print("3B=\n",e,end=ed)

#part 2
a = np.array([[1,3],[2,-1]])
b = np.array([[2,0,-4],[3,-2,6]])
c = np.matmul(a,b)
print("AB=\n",c,end=ed)
try:
    np.matmul(b,a)
except ValueError:
    print("BA multiplication cannot occur.",end=ed)

#part 3
a = np.array([[1,0,2],[2,-1,3],[4,1,8]])
b = np.array([[-11,2,2],[-4,0,1],[6,-1,-1]])
c = np.matmul(a,b)
d = np.matmul(b,a)
print("AB=\n",c,end=ed)
print("BA=\n",d,end=ed)

#part 4
a = np.array([[7,5,-3],[3,-5,2],[5,3,-7]])
b = np.array([[16],[-8],[0]])
c = np.linalg.solve(a,b)
check = np.matmul(a,c)
d = np.linalg.inv(a)
e = np.matmul(d,b)
print("the matrix with values for x, y, z, solved with numpy arrays' solve function =\n",c,end=ed)
print("checking Ax yields the matrix =\n",check,"\n,equivalent to the matrix B.",end=ed)
print("the inverse of A=\n",d,end="\n")
print("A^-1(B)=\n",e,end=ed)

#part 5
a = np.array([[2,-1,5,1],[3,2,2,-6],[1,3,3,-1],[5,-2,-3,3]])
b = np.array([[-3],[-32],[-47],[49]])
c = np.linalg.solve(a,b)
check = np.matmul(a,c)
d = np.linalg.inv(a)
e = np.matmul(d,b)
print("the matrix with values for w, x, y, z, solved with numpy arrays' solve function =\n",c,end=ed)
print("checking Ax yields the matrix =\n",check,"\n,equivalent to the matrix B.",end=ed)
print("the inverse of A=\n",d,end="\n")
print("A^-1(B)=\n",e,end=ed)