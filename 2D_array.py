#  2D ARRAY
#    An array of arrays
#    Stores elements in rows and columns like a table or matrix

arr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# Accessing elements in a 2D array

# arr[row][column]

print(arr[0][0])
print(arr[1][2])
print(arr[2][2])

# Storage in memory
# NOTE: Even if the array is storing elements in tabular form
#        In the memory, the elements are stored linearly
#         i.e., as a SINGLE ROW OF ELEMENTS

#  There are 2 orders that dictate how
#   a 2D array can be stored in the memory
#   1) Row major order       2) Column major order
#   
#   1) Row major order
#      Elements are stored row by row(or row-wise)
#      Followed by most languages
#        eg. Python, C, C++, Java

A = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]  

#  If row major order is followed, then the elements 
#   would be stored in memory as

#  1 2 3 4 5 6 7 8 9

#  ADDRESS CALCULATION of i, jth element in
#   a 2D array which has 'm' rows and 'n' columns

# address(A[i][j]) = B + W*[(i-LR)*n + j-LC]
#   B: Base address
#   W: size of each element
#   i: row subset of element whose address is to be found
#   j: column subset of element whose address is to be found
#   LR: row start index of 2D array
#   LC: column start index of 2D array
#   n: no of columns


#  Column major order 
#   Elements are stored column by column(or column-wise)
#   MATLAB, FORTRAN 

C = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]  

#  If column major order is followed, then the elements 
#   would be stored as

#  1 4 7 2 5 8 3 6 9

# ADDRESS CALCULATION

# address(C[i][j]) = B + W*[(j-LC)*m + (i-LR)]
#   B: Base address
#   W: size of each element
#   i: row subset of element whose address is to be found
#   j: column subset of element whose address is to be found
#   LR: row start index of 2D array
#   LC: column start index of 2D array
#   m: no of rows
