# Searching Algorithms

## What is Searching?

Searching is the process of finding whether an element exists in a collection
and determining its position if it does.

Example:
Array : 5 1 4 2 8
Key   : 4
Result: Found at index 2

---

## Why Searching is Important

* Core operation in almost every program
* Makes problem solving efficient
* Foundation for sorting and optimization
* Frequently asked in exams and interviews

---

## Types of Searching

* Linear Search
* Binary Search

---

## Linear Search

* Works on both sorted and unsorted data
* Checks elements one by one
* Simple but slower for large data

---

## Binary Search

* Works only on sorted data
* Eliminates half of the search space each step
* Much faster than linear search

⚠️ Array must be sorted before applying binary search

---

## Lower Bound & Upper Bound

* Variants of binary search
* Used to find first/last occurrence
* Helps determine insertion position

---

## Time & Space Complexity Overview

| Algorithm     | Best | Average  | Worst    | Space |
| ------------- | ---- | -------- | -------- | ----- |
| Linear Search | O(1) | O(n)     | O(n)     | O(1)  |
| Binary Search | O(1) | O(log n) | O(log n) | O(1)  |

---

## In-Place Searching

Searching algorithms typically require **constant extra space**,
making them space-efficient.

---

## Learning Goal

This section focuses on understanding **how searching works internally**
before moving to sorting and advanced algorithms.
