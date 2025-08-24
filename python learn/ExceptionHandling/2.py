try: 
   file = open('/Users/Rishabh sharma/OneDrive/Desktop/Random_practice/python learn/ExceptionHandling/error.txt')
   content = file.read()
   print(content)

except FileNotFoundError:
   print("File not found! Please check the file path.")

finally: 
   file.close()
   print("File closed.")