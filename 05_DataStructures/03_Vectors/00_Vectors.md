# Vectors (C++ STL)

## What is Vector?
- Dynamic array
- Stored in contiguous memory
- Supports resizing

## Time Complexities
- Access: O(1)
- push_back(): O(1) amortized
- insert / erase: O(n)

## Common Mistakes
- Confusing size with capacity
- Passing vector by value instead of reference

## When NOT to use vector
- Frequent insert/delete at front → use deque/list
