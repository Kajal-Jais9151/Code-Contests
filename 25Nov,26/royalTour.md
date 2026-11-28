# Royal Tour

**Platform:** CodeChef  
**Topic:** Mathematics, Greedy, Implementation  
**Difficulty:** Easy

## Problem Description

Given an N × M chessboard, a king starts at position (r, c).

The king can move one cell in any of the eight directions (horizontal, vertical, and diagonal).

We need to find the minimum number of moves required to visit all four corners of the chessboard. The corners can be visited in any order.

## Approach: Mathematical Observation

Instead of trying every possible order of visiting the four corners, we use mathematical observations to find the minimum number of moves.

### 1. Understanding King Movement

A king can move diagonally, so it can change both its row and column by one in a single move.

Therefore, the minimum distance between two cells is calculated using Chebyshev distance:

`distance = max(abs(r1 - r2), abs(c1 - c2))`

We use `max()` because the king can cover the row and column differences simultaneously through diagonal moves.

### 2. Find the Minimum Distance to the First Corner

The four corners of the chessboard are:

- Top-left: (1, 1)
- Top-right: (1, M)
- Bottom-left: (N, 1)
- Bottom-right: (N, M)

Calculate the king's distance from its starting position (r, c) to each of these corners.

The distances are:

- `d1 = max(r - 1, c - 1)`
- `d2 = max(r - 1, M - c)`
- `d3 = max(N - r, c - 1)`
- `d4 = max(N - r, M - c)`

We take the minimum of these four distances because the king can visit the corners in any order.

`minDist = min(d1, d2, d3, d4)`

### 3. Calculate Moves Required to Visit the Remaining Three Corners

After reaching the first corner, we need to visit the other three corners.

We can travel along the boundary of the chessboard in two possible directions:

- Route 1: `2 * H + W`
- Route 2: `H + 2 * W`

Where:

- `H = N - 1` (vertical distance between the corners)
- `W = M - 1` (horizontal distance between the corners)

We choose the shorter route:

`remaining = H + W + min(H, W)`

### 4. Calculate the Final Answer

Add the minimum distance required to reach the first corner and the moves required to visit the remaining three corners.

**Final Formula:**

`ans = minDist + H + W + min(H, W)`

## Complexity Analysis

- **Time Complexity:** O(1) per test case, as we perform a fixed number of calculations.
- **Space Complexity:** O(1), as we use only a few variables.

## Key Learnings

- Understanding Chebyshev distance in chessboard movement.
- Using diagonal movement to calculate minimum distances.
- Finding the minimum among multiple possible starting corners.
- Using mathematical observations instead of checking every possible visiting order.
- Optimizing a problem using constant-time calculations.