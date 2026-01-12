# Two Pointer Technique – Core Concept (with Reverse Array Example)

## 📌 What is Two Pointer Technique?
The **Two Pointer Technique** is a problem-solving approach where **two indices (pointers)** are used to traverse a data structure in a **coordinated and intelligent way** to reduce time complexity.

> Instead of using nested loops, two pointers move based on conditions and solve problems efficiently in a single pass.

---

## 🧠 Core Idea (Intuition)
- Place two pointers at specific positions in the data structure
- Compare or process elements using both pointers
- Move one or both pointers based on a condition
- Stop when the pointers meet or cross

This avoids unnecessary comparisons and improves performance.

---

## 🎯 Why Use Two Pointers?
- Converts **O(n²)** brute force solutions into **O(n)** solutions
- Eliminates extra space in many problems
- Improves readability and logic clarity
- Commonly asked in **coding interviews**

---

## 🧱 The 3 Pillars of Two Pointer Technique

### 1️⃣ Pointer Position
Decide where the pointers start:
- Start & End → Reverse array, Palindrome
- Same direction → Fast & Slow pointer problems
- Different arrays → Merge problems

---

### 2️⃣ Stopping Condition
Defines when to stop moving pointers:
- `left < right`
- `slow < fast`
- `sum == target`

This ensures correctness and prevents infinite loops.

---

### 3️⃣ Movement Rule
The most important part.

Examples:
- Move both pointers → Reverse array
- Move one pointer → Target sum problems
- Move pointers at different speeds → Cycle detection

---

## 🔁 Common Two Pointer Patterns

### 🔹 Pattern 1: Opposite Direction
left → ← right

yaml
Copy code
Used in:
- Reverse array
- Palindrome check
- Two sum (sorted array)

---

### 🔹 Pattern 2: Same Direction (Fast & Slow)
slow → fast →

yaml
Copy code
Used in:
- Remove duplicates
- Detect cycles in linked list
- Sliding window problems

---

### 🔹 Pattern 3: Conditional Shrinking
Move pointers based on condition

yaml
Copy code
Used in:
- Partition problems
- Subarray sum
- Window-based problems

---

## 🧪 Example: Reverse an Array (Two Pointer)

### Algorithm:
1. Initialize `left = 0` and `right = n - 1`
2. While `left < right`:
   - Swap `arr[left]` and `arr[right]`
   - Increment `left`
   - Decrement `right`
3. Stop when pointers meet or cross

This works for both **odd and even sized arrays**.

---

## 🕒 Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## 💡 When to Think of Two Pointers?
Ask yourself:
> “Am I comparing elements from both ends or controlling a range?”

If yes → Two Pointer Technique is likely the solution.

---

## 🗣 Interview One-Liner
> *“I used the two pointer technique to reduce unnecessary comparisons and solve the problem in linear time.”*

---

## 🚀 Next Steps
Practice these problems to master two pointers:
- Reverse String
- Valid Palindrome
- Two Sum (sorted)
- Remove Duplicates
- Container With Most Water

---

## 📎 Summary
The Two Pointer Technique is a **foundational DSA pattern** that replaces brute force logic with intelligent pointer movement, making solutions faster, cleaner, and interview-ready.

---

Happy Coding 🚀