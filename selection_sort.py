# Define a function to find the smallest number in an array
def find_smallest(arr):
	smallest = arr[0]
	smallest_index = 0

	for i in range(1, len(arr)):
		if arr[i] < smallest:
			smallest = arr[i]
			smallest_index = i

	return smallest_index

# Define a function to implement selection sort
def selection_sort_func(arr):
	new_arr = []

	for i in range(len(arr)):
		smallest = find_smallest(arr)

		new_arr.append(arr.pop(smallest))

	return new_arr
