# Algebra Matrix

---
- [Algebra Matrix](#algebra-matrix)
  - [User Documentation](#user-documentation)
    - [Overview](#overview)
    - [How to Use the Program](#how-to-use-the-program)
      - [Example Usage:](#example-usage)
        - [Input:](#input)
        - [Output:](#output)
      - [Notes:](#notes)
  - [Program Documentation](#program-documentation)
    - [Program Title: Merging Two Arrays](#program-title-merging-two-arrays)
      - [Problem:](#problem)
      - [Programming Language:](#programming-language)
      - [Author:](#author)
      - [Version:](#version)
      - [Program Flowchart](#program-flowchart)
      - [Program Structure:](#program-structure)
        - [2. User Input for Arrays A and B:](#2-user-input-for-arrays-a-and-b)
        - [3. Processing Elements of C to matrix\_algebra:](#3-processing-elements-of-c-to-matrix_algebra)
        - [4. Displaying the Arrays:](#4-displaying-the-arrays)
      - [Example Run:](#example-run)
        - [Input:](#input-1)
        - [Output:](#output-1)
      - [Enhancements and Notes:](#enhancements-and-notes)

---

## User Documentation

### Overview

This program allows the user to input three integers on one dimensional array, nine integers on multidimensional array with three rows and columns. Third array will add the product on two array.

### How to Use the Program

1. **Run the Program:** Execute the compiled program named **matrix_algebra**.

2. **Input Values:**
    1. **One Dimensional Array**
      - The program will prompt you to enter three integers for Array A.
    2. **Multidimensional Array**
      - Next Array will prompt you to enter nine integers for Array B which consists of 3 rows and 3 columns.

1. **Processing:**

   - The program will create additional Array which is the product of two other matrices with the following formula:

    ``` cpp
            C[0] = {(A[0] * B[0][0]) + (A[1] * B[0][1]) + (A[2] * B[0][2])}
            C[1] = {(A[0] * B[1][0]) + (A[1] * B[1][1]) + (A[2] * B[1][2])}
            C[2] = {(A[0] * B[2][0]) + (A[1] * B[2][1]) + (A[2] * B[1][2])}
    ```

2. **Output Display:**

   - Array N and Array B will be displayed.

   - The matrix algebra (matrix_algebra) will also be displayed.

#### Example Usage:

##### Input:

``` cpp
ARRAY A:
Enter element for A[0]: 1
Enter element for A[1]: 2
Enter element for A[2]: 3

ARRAY B:
Enter element for B[0][0]: 1
Enter element for B[0][1]: 2
Enter element for B[0][2]: 3
Enter element for B[1][0]: 4
Enter element for B[1][1]: 5
Enter element for B[1][2]: 6
Enter element for B[2][0]: 7
Enter element for B[2][1]: 8
Enter element for B[2][2]: 9
```

##### Output:

``` cpp
ARRAY A:
A[0] = 1    A[1] = 2    A[2] = 3

ARRAY B:
B[0][0] = 1    B[0][1] = 2    B[0][2] = 3
B[1][0] = 4    B[1][1] = 5    B[1][2] = 6
B[2][0] = 7    B[2][1] = 8    B[2][2] = 9

ARRAY C:
C[0] = 14    C[1] = 32    C[2] = 50
```

#### Notes:

1. Only integer values should be entered.

2. No sorting is applied to the final merged array.

---

## Program Documentation

### Program Title: Merging Two Arrays

#### Problem:

Write a program that will input 3 integers in an array A(*one dimensional - 3 digits*) and another 9 integers in an array B(*multidimensional - 3 rows and 3 columns*). After which process two arrays in one array called matrix_algebra such that on each elements of Array C are the products of two matrices:

``` cpp
    Formula for Array C: 
      C[0] = {(A[0] * B[0][0]) + (A[1] * B[0][1]) + (A[2] * B[0][2])}
      C[1] = {(A[0] * B[1][0]) + (A[1] * B[1][1]) + (A[2] * B[1][2])}
      C[2] = {(A[0] * B[2][0]) + (A[1] * B[2][1]) + (A[2] * B[1][2])}
 ```

#### Programming Language:

```cpp
C++ Programming
```

#### Author:

```
Ariel Rivera
```

#### Version:

```
================================================================
Author             Date            Description          Version
----------------------------------------------------------------
Ariel Rivera       2025-03-23      Initial Build        1.0.0
================================================================
```

---

#### Program Flowchart

Working...

---

#### Program Structure:

1. **Declaration:**
   **Constant Declaration:**

   - `_size = 3`: Defines the maximum array size to ensure sufficient storage space for merging.

   **Variable Declaration:**

   - `A[_size]`: Stores the one dimensional array.
   - `B[_size][_size]`: Stores the multidimensional array.
   - `C[_size]`: Stores the processed array.

2. **User Input:**

   - The user is prompted to enter `three` integers for array `A`.
   - The user is then prompted to enter `nine` integers for array `B`.
   - **No Error Validation added**. User must refrain from entering out-of-bound data from the array. **_Can be enhancement feature_**

3. **Process:**

   - Each element of `C` is the product of elements of `A[index]` and `B[rows][columns]`.
   ``` cpp
         C[0] = {(A[0] * B[0][0]) + (A[1] * B[0][1]) + (A[2] * B[0][2])}
         C[1] = {(A[0] * B[1][0]) + (A[1] * B[1][1]) + (A[2] * B[1][2])}
         C[2] = {(A[0] * B[2][0]) + (A[1] * B[2][1]) + (A[2] * B[1][2])}
    ```

4. **Output:**

   - The program prints the original `A` and `B` arrays.
   - The program then prints the `matrix_algebra` containing the product of two matrices.

5. **Error Handling:**
   - User input where separated on each line to prevent the user on entering out of bound data in an array.

---

#### Code Breakdown:

##### 1. Required Headers:

```cpp
#include <iostream>

using namespace std;
```

- using `iostream` library to handle input/output program.
- using `namespace std` to allow the developer to use standard library features (like `cout`, `cin`, and `endl`) without having to prefix them with `std::`.

##### 2. User Input for Arrays A and B:

```cpp 
// asking user to input data in one dimensional array
cout << "ARRAY A: " << endl;
for (int i = 0; i < _size; i++)
{
    cout << "Enter elements for A[" << i << "]: ";
    cin >> A[i];
}

// asking user to input data in multidimensional array
cout << endl
     << "ARRAY B: " << endl;
for (int rows = 0; rows < _size; rows++)
{
    for (int cols = 0; cols < _size; cols++)
    {
        cout << "Enter elements for B[" << rows << "][" << cols << "]: ";
        cin >> B[rows][cols];
    }
}
```

- The program will ask the user to input `3` elements on Array A.
- The program will ask the user to input `9` elements on Array B.

##### 3. Processing Elements of C to matrix_algebra:

```cpp
for (int rows = 0; rows < _size; rows++)
{
    C[rows] = 0; // initialize current element to 0 to prevent from adding unnecessary value
    for (int cols = 0; cols < _size; cols++)
    {
        C[rows] += (A[cols] * B[rows][cols]); // on each element of C, value of A[cols] * to value of B[rows][cols]
    }
}
```

- `C[rows] = 0` was define to initialize the value of C[rows] to `0`, preventing from adding unnecessary value.
- `C[rows] += (A[cols] * B[rows][cols])` to get product of two arrays on each repitition.


##### 4. Displaying the Arrays:

```cpp
// printing the one dimensional array
cout << endl
     << "ARRAY A: " << endl;
for (int i = 0; i < _size; i++)
{
    cout << "A[" << i << "] = " << A[i] << "\t";
}

// printing the multidimensional array
cout << endl
     << endl
     << "ARRAY B: " << endl;
for (int rows = 0; rows < _size; rows++)
{
    for (int cols = 0; cols < _size; cols++)
    {
        cout << "B[" << rows << "][" << cols << "] = " << B[rows][cols] << "\t";
    }

    cout << endl;
}

// printing the matrix algebra
cout << endl
     << "ARRAY C: " << endl;
for (int i = 0; i < _size; i++)
{
    cout << "C[" << i << "] = " << C[i] << "\t";
}
```

- `Array A`, `Array B`, and `Array C` were display to ensure the program captured the correct data and process.

---

#### Example Run:

##### Input:

``` cpp
ARRAY A:
Enter element for A[0]: 1
Enter element for A[1]: 2
Enter element for A[2]: 3

ARRAY B:
Enter element for B[0][0]: 1
Enter element for B[0][1]: 2
Enter element for B[0][2]: 3
Enter element for B[1][0]: 4
Enter element for B[1][1]: 5
Enter element for B[1][2]: 6
Enter element for B[2][0]: 7
Enter element for B[2][1]: 8
Enter element for B[2][2]: 9
```

##### Output:

``` cpp
ARRAY A:
A[0] = 1    A[1] = 2    A[2] = 3

ARRAY B:
B[0][0] = 1    B[0][1] = 2    B[0][2] = 3
B[1][0] = 4    B[1][1] = 5    B[1][2] = 6
B[2][0] = 7    B[2][1] = 8    B[2][2] = 9

ARRAY C:
C[0] = 14    C[1] = 32    C[2] = 50
```

---

#### Enhancements and Notes:

- The program ensures that `matrix_algebra` get the product of two matrices.
- **Future enhancements** could include sorting the merged array or allowing dynamic input sizes instead of fixed 5-element arrays.
- **Future enhancements** could include error handling when user input out-of-bound data in an array.
