# cook your dish here
for t in range(int(input())):
    x,y,r=map(int,input().split())
    eaten = x + (r//30)
    
    plates = eaten//y 
    if(eaten%y !=0):
        plates+= 1 
    print(plates)
