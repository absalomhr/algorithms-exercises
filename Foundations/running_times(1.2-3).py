import math

# What is the smallest value of n such that an algorithm whose running time is 100n^2
# runs faster than an algorithm whose running time is 2^n on the same machine?

n = 1
rt1 = 100 * (n ** 2)
rt2 = 2 ** n
while (rt1 >= rt2):
    print("n: {}, 100n^2 rt: {}, 2^2n rt: {}".format(n, rt1, rt2))
    n += 1
    rt1 = 100 * (n ** 2)
    rt2 = 2 ** n

# Answer: The answer is 14 after that it's the first algorithm always performs better than the second. 
