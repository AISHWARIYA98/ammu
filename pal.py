x=int(input())
t=0
s=0
c=x
while x!=0 :
    t=x%10
    s=(s*10)+x
    x=x//10
if c==s :
   print("yes")
else :
   print("no")
 
    
  
