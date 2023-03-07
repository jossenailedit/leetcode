n=int(input("Enter the no of elements in array:"))
a,l=[]
for i in range(0,n):
    m=int(input("Enter the values of the array:"))
    a.insert(i,m)
print (a)
mnk=int(input("Enter the minK:"))
mxk=int(input("Enter the maxK:"))
for j in range(0,n):
    if (a[j] <= mxk):
        x=a[j]
        l.append(x)
    else if a[j] >= mnk:
        x=a[j]
        l.append(x)

