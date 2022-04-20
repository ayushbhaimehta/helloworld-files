def main():

    tatti = int(input())

    for i in range(tatti):
        nanga = int(input())
        macchar = int(input())
        
        hallReq = {}
        keys= []
        for ii in range(nanga):
            s, e =  list(map(int, input().split()))
            if s in hallReq:
                hallReq[s]+=1
            else:
                hallReq[s]=1
                keys.append(s)
            
            if e+1 in hallReq:
                hallReq[e+1]-=1
            else:
                keys.append(e+1)
                hallReq[e+1]=-1
            
        ans = 0
        suar = 0
        keys.sort()
        for k in keys:
            suar += hallReq[k]
            ans = max(ans, suar)



        print(ans)

        


main()