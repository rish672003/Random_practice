#yield statemenet
def count_down(num):
    
    while num > 0:
        yield num
        num -= 1

    for i in count_down(5):
        print(i)