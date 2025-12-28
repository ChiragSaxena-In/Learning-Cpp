---

# Time and Space Complexity (Complete Theory)

---

## What is Time Complexity?

**Time Complexity** tells us **how the execution time of an algorithm grows** as the input size increases.

It does **NOT** measure time in seconds.
It measures **number of operations** relative to input size `n`.

Example idea:

* Small input → fast
* Large input → how fast does it slow down?

---

## Why Time Complexity is Important

1. Helps compare **two algorithms**
2. Predicts performance for **large inputs**
3. Avoids **TLE (Time Limit Exceeded)** in competitive programming
4. Essential for **interviews**

---

## What is Space Complexity?

**Space Complexity** tells us **how much extra memory** an algorithm uses as input size grows.

It includes:

* Variables
* Arrays
* Recursive stack memory

Important:

> Input memory is **not counted**, only **extra space used**.

---

## Asymptotic Notations

These notations describe **growth rate**, not exact values.

---

### Big-O Notation — *Worst Case*

**Big-O (O)** gives the **maximum time** an algorithm may take.

Most important notation (used everywhere).

Example:

```
for(int i = 0; i < n; i++)
    cout << i;
```

Time Complexity → **O(n)**

---

### Omega (Ω) — *Best Case*

Gives the **minimum time** required.

Example:

* Linear search
* Best case: element found at first index → **Ω(1)**

---

### Theta (Θ) — *Average Case*

Gives the **exact growth rate** (tight bound).

Used less in practice, more in theory.

---

## Common Time Complexities (Very Important)

| Complexity | Name         | Example                 |
| ---------- | ------------ | ----------------------- |
| O(1)       | Constant     | Accessing array element |
| O(log n)   | Logarithmic  | Binary Search           |
| O(n)       | Linear       | Loop through array      |
| O(n log n) | Linearithmic | Merge Sort              |
| O(n²)      | Quadratic    | Nested loops            |
| O(2ⁿ)      | Exponential  | Recursive subsets       |
| O(n!)      | Factorial    | Permutations            |

**Rule of Thumb**

> Slower → O(n²) ❌
> Faster → O(n log n) ✅

---

## Time Complexity of Loops

### Single Loop

```
for(int i = 0; i < n; i++)
```

➡ **O(n)**

---

### Nested Loop

```
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
```

➡ **O(n²)**

---

### Dependent Loop

```
for(int i = 0; i < n; i++)
    for(int j = 0; j < i; j++)
```

➡ **O(n²)** (not n³!)

---

### Loop with Halving

```
while(n > 1)
    n = n / 2;
```

➡ **O(log n)**

---

##  Time Complexity of Arrays (1D)

| Operation             | Complexity |
| --------------------- | ---------- |
| Access                | O(1)       |
| Traversal             | O(n)       |
| Search (Linear)       | O(n)       |
| Insertion (End)       | O(1)       |
| Insertion (Beginning) | O(n)       |
| Deletion              | O(n)       |

---

## Space Complexity Basics

### Constant Space

```
int a, b, c;
```

➡ **O(1)**

---

### Linear Space

```
int arr[n];
```

➡ **O(n)**

---

### Recursive Space

```
func(n-1);
```

➡ **O(n)** (call stack)

Recursion always adds **extra stack memory**.

---

## Auxiliary Space

**Auxiliary Space** = Extra space used by algorithm **excluding input**.

Example:

```
int temp[n];
```

➡ Auxiliary Space = **O(n)**

---

##  Best, Average & Worst Case

### Example: Linear Search

| Case    | Situation                | Time |
| ------- | ------------------------ | ---- |
| Best    | Found at start           | O(1) |
| Average | Found in middle          | O(n) |
| Worst   | Found at end / not found | O(n) |

---

##  How to Calculate Time Complexity (Steps)

1. Ignore constants
   `O(2n + 5)` → `O(n)`
2. Ignore lower order terms
   `O(n² + n)` → `O(n²)`
3. Focus on **highest power of n**

---

##  Important Interview Notes 

* Time complexity ≠ actual execution time
* Always mention **worst case**
* Space optimized solutions are preferred
* Avoid unnecessary nested loops

---

##  Summary

* **Time Complexity** → speed
* **Space Complexity** → memory
* Big-O is king 
* Arrays are fast for access, slow for insertion/deletion
* Understanding complexity = better coding decisions

---

