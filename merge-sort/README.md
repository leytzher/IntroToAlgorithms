# Merge Sort

This is a sorting algorithm that uses the "Divide and Conquer" approach:

## Divide:
Divide the n-elements sequence to be sorted into 2 subsequences of $n/2$ elements each.

## Conquer:
Sort the 2 subsequences recursively using the `merge sort` algorithm.

## Combine:
Merge the 2 subsequences to prodcued the sorted answer.


This requires an operation called `merge` that combines 2 sequences. This operation takes the array (A) and indices p, q and r $(p <= q < r)$. This assumes that the subarrays $A[p..q]$ and $A[q+1..r]$ are in sorted order, so what it does is to merge them into a single sorted subarray.


![](https://www.101computing.net/wp/wp-content/uploads/Merge-Sort-Algorithm.png)
