t=int(input());
for i in range(t) :
 n=int(input());
 d=int(input());
 h=int(input());
 sum=0
 for j in range(n):
  ele = int(input());
  if ele<=0:
   sum=sum-d
  else:
   sum=sum+ele;
  if(sum>h):
   break
 if(sum>h):
  print("YES",end="")
 else:
  print("NO",end="")