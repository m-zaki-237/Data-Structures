# Data Structures — C++

Lab work and assignments from my Data Structures course at COMSATS University Islamabad, Attock Campus. Implemented in C++ from scratch — no STL containers.

## Topics Covered

### Array Lists (Week 1 + Assignment 01)
Custom array-backed list implemented as a struct with manual bounds checking.

| Operation | Description |
|---|---|
| `insertEnd` | Append to the back |
| `insertStart` | Prepend, shifting all elements right |
| `insertAfter` / `insertBefore` | Insert relative to a target value |
| `deleteEnd` / `deleteStart` | Remove from either end |
| `deleteSpecific` | Remove by value |
| `linearSearch` | Find index of a target element |

**Assignment 01** extends this with raw pointer traversal to compute:
- Min, max, sum, median
- General average vs. special average (min + median + max / 3)
- Closest value to the special average
- Final score combining all three distances
- Deletion of the closest element and re-insertion of the rounded special average

### Singly Linked Lists (Week 2)

| File | What it does |
|---|---|
| `task1.cpp` | Build a linked list; display forward, reverse (recursive), and reverse (iterative) |
| `task2.cpp` | Build two separate linked lists; merge them into a third |
| `task3.cpp` | Search a linked list for all positions where a value occurs; count occurrences |

---

## How to Compile & Run

Requires a C++ compiler (g++ recommended).

```bash
# Example — compile and run any file
g++ -o out "Week 1/Lab 1/task2.cpp" && ./out
```

---

## Course Info

**Subject:** Data Structures  
**University:** COMSATS University Islamabad, Attock Campus  
**Language:** C++ (no STL containers — manual implementations only)