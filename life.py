t = int(input())

for c in range(0,t):
    n, h , y1, y2, l = [int(o) for o in input().split()]
    i =0 
    arr= []
    while i <n:
        a,b = input().split()
        a= int(a)
        b= int(b)
        arr.append(a)
        arr.append(b)
        i =i+1
    j=0 
    count= 0
    while j<2*n :
        if l==0:
            break
        if arr[j]==1:
            if h-y1 <= arr[j+1]:
                j =j+2
                count= count+1
            else:
                l = l-1
                j= j+2
                count= count+1
        if arr[j] == 2:
            if y2>=arr[j+1]:
                j= j+2
                count= count+1
            else:
                l=l-1
                j=j+2
                count= count+1
    print(count)    



