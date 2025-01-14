# Contents

- [HashTable](#hash-table)
- [Hash Map](#hash-map)
- [map vs unordered_map](#map-vs-unordered_map)

# Hash Table

A Hash Table is a data structure that stores data in an associative manner, mapping keys to values. The main idea is to use a hash function to compute an index into an array of buckets or slots, from which the desired value can be fetched. Hash tables are efficient for **insert**, **search**, and **delete** operations.

C++ does not provide a direct `HashTable` class, but you can implement it manually or use `unordered_map`, which is based on hash tables.

## Key Concepts

1. **Hash Function:** Converts a key into a fixed-size integer, which serves as an index.
2. **Collision:**

- Occurs when two keys hash to the same index.
- Collision resolution strategies:
  - Chaining: Store multiple elements at the same index using a linked list or vector.
  - Open Addressing: Find the next available slot (linear probing, quadratic probing, or double hashing).

3. **Load Factor:** Ratio of the number of elements to the size of the hash table. Typically, if the load factor exceeds a threshold, the hash table resizes to maintain efficiency.

## Charecterstics

- **Time Complexity:** Insertion, Search, Deletion
  - Worst Case: O(n)
  - Average Case: O(1)
  - Best Case: O(1)
- **Space Complexity:**
  - Best Case: O(n) - The hash table contains n elements, with minimal overhead for unused buckets.
  - Average Case: O(n + m) - n elements stored and m buckets allocated, where m is proportional to the load factor.
  - Worst Case: O(n + m) - Same as the average case, but with additional overhead from excessive collisions.

# Hash Map

A HashMap is a data structure that maps keys to values for efficient retrieval. It uses a hash table internally, where the key is hashed to compute an index for storing the value. HashMaps provide average O(1) time complexity for insert, delete, and lookup operations due to direct indexing.

C++ provides `unordered_map`, which is an implementation of a HashMap. The keys are hashed using a hash function to compute indices.

# `map` vs `unordered_map`

| Feature                                | `map`                             | `unordered_map`                  |
| -------------------------------------- | --------------------------------- | -------------------------------- |
| **Implementation**                     | Self-balancing binary search tree | Hash table                       |
| **Key Order**                          | Sorted                            | Unordered                        |
| **Complexity (Insert, Search, Erase)** | \(O(\log n)\)                     | \(O(1)\) average, \(O(n)\) worst |
| **Memory Usage**                       | Higher (tree overhead)            | Higher (hash table overhead)     |
| **Best Use Case**                      | When sorted order is needed       | When fast access is required     |
