#counts from 1 to 100, outputting "Fizz" for multiples of 3, "Buzz" for multiples of 5, and "FizzBuzz" for multiples of both

for i in range(1,101):
    output = ""
    if i % 3 == 0:
        output += "Fizz"   
    if i % 5 == 0:
        output += "Buzz"
    
    if output == "":
        print i
    else:
        print output
