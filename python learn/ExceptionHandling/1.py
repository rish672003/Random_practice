try: 
    num = int(input("Enter a number: "))
    result = 10 / num
    print(f"Result is {result}")

except ValueError:
    prinft("Invalid input! Please enter a valid number.")