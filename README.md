### `most_frequent` Code

This function takes a vector of integers as input and returns the number that appears most frequently. If multiple numbers share the same highest frequency, the function will return one of them arbitrarily.

#### Key Features:
- **Input**: A vector of integers.
- **Output**: The integer that appears the most frequently.
- **Handling ties**: In case of multiple numbers with the same frequency, the function will return any one of them.

#### Example:
For the input vector `[1, 3, 2, 3, 4, 1, 3]`, the function returns `3`, as it appears most frequently in the vector.

---

### all_frequent_number code

This is an extended version of the previous function. It returns all the numbers that have the highest frequency, instead of just one. The return type is a vector of integers containing all such numbers.

#### Key Features:
- **Input**: A vector of integers.
- **Output**: A vector of integers containing all numbers that have the highest frequency.
- **Handling ties**: If multiple numbers share the highest frequency, all of them will be returned.

#### Example:
For the input vector `[1, 3, 2, 3, 1, 4, 1]`, the function returns `[1, 3]`, since both numbers appear the most frequently.

---

These two code are useful for finding the most frequent elements in a list of numbers, with the flexibility of handling ties in different ways.
