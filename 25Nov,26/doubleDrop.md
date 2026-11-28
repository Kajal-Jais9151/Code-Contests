# Double and Drop (Easy)

**Platform:** CodeChef

**Topic:** Arrays, Brute Force, Implementation

## Problem Description

Given an array of N positive integers, we can choose at most one element and double its value.

After performing the operation (or skipping it), we need to maximize the following expression:

`Score = Sum of all elements - Maximum element`

The task is to find the maximum possible score.

## Approach: Brute Force

We try every possible choice of the element to be doubled and calculate the resulting score.

### Step 1: Calculate the Original Score
- Calculate the sum of all array elements.
- Find the maximum element in the array.
- Calculate the original score as `sum - maxi`.
- Store this score in `MAX1` (the score without performing the operation).

### Step 2: Try Doubling Each Element
- Iterate through the array and select one element at a time.
- Double the selected element using `a[i] *= 2`.
- Recalculate the sum and maximum element of the modified array.
- Calculate the new score as `sum - maxi`.
- Update `MAX2` whenever a larger score is found.

### Step 3: Restore the Original Array
- After calculating the score, divide the selected element by 2.
- This restores the original array before trying the next element.
- This ensures that only one element is doubled at a time.

### Step 4: Find the Final Answer
- Compare `MAX1` (without doubling) and `MAX2` (after doubling one element).
- Print the maximum of these two values.

## Complexity Analysis

- **Time Complexity:** O(N²)
  - Calculating the original score takes O(N).
  - For each of the N elements, we recalculate the sum and maximum using another O(N) loop.
  - Therefore, the overall complexity is O(N²) per test case.

- **Space Complexity:** O(N)
  - We use an array of N elements to store the input.

## Key Learnings

- Applying brute force by trying every possible choice.
- Finding the maximum element and sum of an array.
- Understanding how to modify and restore an array.
- Comparing results to find the maximum possible score.

## Important Note

The original array is restored after every iteration, ensuring that only one element is doubled during each attempt.