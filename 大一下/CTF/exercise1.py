import random
x = random.randint(1,100)
y = int(input("请输入："))
while x!=y:    
    if x<y:
        print("输入太大，重新输入\n")
    else:
        print("输入太小，重新输入\n")
    y = int(input("重新输入:"))
print("恭喜你，猜对了！")