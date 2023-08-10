import time
import os
devnull = open(os.devnull, "w")


def program_with_no_io():
    start = time.time()
    x = 0
    for i in range(int(1e6)):
        x = x+1
    end = time.time()

    return end-start


def program_with_io():

    start = time.time()
    for i in range(int(1e6)):
        print(file=devnull)
    end = time.time()

    return end-start


print('Time with output:', program_with_io())
print('Time without output:', program_with_no_io())

devnull.close()
