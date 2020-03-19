import math

# Suppose we are comparing implementations of insertion sort and merge sort on the
# same machine. For inputs of size n, insertion sort runs in 8n^2 steps, while merge
# sort runs in 64nlgn steps. For which values of n does insertion sort beat merge
# sort?

n = 2
insertion = 8 * (n ** 2)
merge = 64 * n * math.log2(n)
while (insertion <= merge):
	print("n: {}, insertion rt: {}, merge rt: {}".format(n, insertion, merge))
	n += 1
	insertion = 8 * (n ** 2)
	merge = 64 * n * math.log2(n)

# Answer: insertion sort beats merge sort from values of n 2 to 43.