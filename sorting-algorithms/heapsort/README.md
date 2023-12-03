# Heapsort

`Running time: O(n log n)`
## Binary Heaps
There are 2 kinds of binary heaps:
-  max heap: where $A[parent(i)] >= A[i]$ or where each parent node is larger than the child node(s).
- min heap: where $A[parent(i)] <= A[i]$ or where each parent node is smaller than the child node(s).

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221220165711/MinHeapAndMaxHeap1.png)

The heapsort algorithm uses max-heaps.  min-heaps are typically used in priority queues.

## Procedures

- `max-heapify` is the key to maintain the max-heap property.
- `build-max-heap` produces a max-heap from an unordered input array.
- `heapsort` sorts an array in place
