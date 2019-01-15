#Number 2
#Andrew Beechko
#Due 1-25-19

from Number1 import *       #importing all elements from Mumber 1 library


joe = ProductionWorker("Joe", 10, "Saw", 1, "$20")
bob = ProductionWorker("Bob", 11, "Hammer", 1, "$20")
steve = ProductionWorker("Steve", 12, "Files", 2, "$25")

myList = [joe, bob, steve]
j = joe.get_id()
b = bob.get_id()
s = steve.get_id()
mykey = [j, b, s]
search = input("Search ID:")
val = int(search)       #turning string input into an int
i = 0
for x in mykey:         #loops through mykey and compares values in it to the input value
    if x == val:
        print(myList[i])
    i +=1               #increments counter
