ini=int(input("donner val initial: "))
cycle=int(input("donner les cycles: "))
year=0
for i in range(0,cycle):
    ini=int(((ini/0.25)*0.03)+ini)
    year=year+0.5
print("you get: " + str(ini))
print("over the periode of: "+str(year) + " years")
print("with number of capsules: "+str(int(ini/0.25)))
input()