t= int(input())
for t in range(t):
    dp = [0]*13
    money = list(map(int, input().split()))
    month = list(map(int, input().split()))
    month.insert(0,0) 
     
    for i in range(13):
           
          if money[0]*month[i] > money[1]:
              dp[i] = dp[i-1] + money[1]
 
          else:
              dp[i] = dp[i-1] + money[0]*month[i]
 
          if i > 2:
              if dp[i] > money[2]+dp[i-3]:
                  dp[i] = money[2]+dp[i-3]
 
 
    #print(dp)
    
    if dp[12] > money[3]:
        print(f'#{t+1} {money[3]}')
    else:
        print(f'#{t+1} {dp[12]}')