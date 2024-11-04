# Linear Search Algorithm

## Problem Definition
Write a program to implement Linear Search.

## Algorithm

1. **Start**
2. Set `count` as zero, `flag` as zero, and `position` as zero.
3. Read the limit (`n`).
4. Read the elements into an array.
5. **Loop** through the elements to store them in the array:
   - **Step 5.1**: Read each element.
   - **Step 5.2**: Increment `i`.
6. **End** of the first loop.
7. **Loop** through the array to display the elements:
   - **Step 7.1**: Print each element.
8. **End** of the second loop.
9. Print "Enter the key element."
10. Read the key element.
11. **Loop** through the array to search for the key:
    - **Step 11.1**: If `a[i] == key`:
      - **Step 11.1.1**: Set `flag = 1`.
      - **Step 11.1.2**: Set `position = i + 1`.
      - **Step 11.1.3**: Increment `count`.
      - **Step 11.1.4**: Print "Key found at position".
    - **End** of if condition.
12. **End** of the third loop.
13. **If** `flag == 1`:
    - **Step 13.1**: Print the key found a certain number of times.
14. **End** of if condition.
15. **Else**:
    - **Step 15.1**: Print "Element not found".
16. **End** of else condition.
17. **Stop**