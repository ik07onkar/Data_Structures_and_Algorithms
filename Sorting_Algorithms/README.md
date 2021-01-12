# Sorting Algorithms
It contains all sorting algorithms and related problems.

## Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

### Time Complexity
* Worst Case: O(n^2)
* Best Case: O(n) - If array is already sorted.

### Space Complexity
* Auxiliary Space: O(1)

## Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and putting it at the beginning.\
The algorithm maintains two subarrays in a given array.

* The subarray which is already sorted.
* Remaining subarray which is unsorted.

### Time Complexity
* Worst Case:  O(n^2) as there are two nested loops.
* Best Case: O(n^2)

### Space Complexity
* Auxiliary Space: O(1)

## Insertion Sort
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.The array is virtually split into a\
sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

### Time Complexity
* Worst Case: O(n^2)
* Best Case: O(n) 

### Space Complexity
* Auxiliary Space: O(1)

## Counting Sort
Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct\
key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.

### Time Complexity
* Worst Case: O(n+k) where n is the number of elements in input array and k is the range of input.
* Best Case: O(n+k) 

### Space Complexity
* Auxiliary Space: O(n+k)

## Radix Sort
The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit.\
Radix sort uses counting sort as a subroutine to sort.

### Time Complexity
* Worst Case: O(n * k) where n is the number of elements in input array and k is the number of bits required to represent largest element in the array
* Best Case: O(n+k) 

### Space Complexity
* Auxiliary Space: O(n+k)
