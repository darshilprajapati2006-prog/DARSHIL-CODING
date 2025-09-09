name = "darshil"
print("hello "+name)
print(name[0])
print(name[1])
print(name[2])
print(name[3])
print(name[4])
print(name[5])
print(name[6])

apple = '''he said,
hii darshil
hey i am a good
"i want to eat an apple'''
print("lets use for loop\n")
for char in apple:
    print(char)

name = "darshil"
darshilLen = len(name)
print("the length of name is",darshilLen)
print(name[0:4])
print(name[0:7])
print(name[:5])
print(name[-3:-1])
print(name.upper())

a = "!!!darshl!!! !!! DARSHIL!!!"
print(len(a))
print(a.upper())
print(a.lower())
print(a.rstrip("!"))
print(a.replace("darshl","darshil"))
print(a.split(" "))

blogHeading = "this is my blog"
print(blogHeading.title())
print(blogHeading.capitalize())
print(blogHeading.find("my"))

str1 = "welcome to the world of python"
print(str1.center(100,'*'))
print(str1.count("o"))
print(str1.endswith("on"))
print(str1.startswith("wel"))
print(str1.isalnum())
print(str1.isalpha())
print(str1.islower())
print(str1.isspace())
print(str1.istitle())
print(str1.isupper())
print(str1.swapcase())
print(str1.index("python"))