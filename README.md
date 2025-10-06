# 🔹 Iterative Complete Search (Brute Force)

> 🧠 **Concept:**  
> Iterative complete search means trying **every possible option** using loops (`for` or `while`).  
> It’s also called **brute force**, because we test *all* possibilities until we find what we need.

---

## 📘 Example 1 — Maximum Pair Sum

**🧩 Problem:**  
Given an array of numbers, find the **pair** that gives the **maximum sum**.

**Example Input:**  
cpp
[3, 7, 2, 9, 5]
💡 Idea:
Try all pairs (i, j) → find which has the largest sum.

🧱 Code:

cpp
Copy code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 7, 2, 9, 5};
    int maxSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int sum = arr[i] + arr[j];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    cout << "Maximum Pair Sum = " << maxSum << endl;
}
✅ Output:

java
Copy code
Maximum Pair Sum = 16
📘 Example 2 — Find All Pairs with a Given Sum
🧩 Problem:
Find all pairs whose sum equals a target value.

Example Input:

cpp
Copy code
arr = [1, 3, 2, 4, 5]
target = 6
🧱 Code:

cpp
Copy code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 4, 5};
    int target = 6;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";
            }
        }
    }
}
✅ Output:

scss
Copy code
(1, 5)
(2, 4)
💡 Key Notes
Concept	Description
Definition	Try all possibilities using loops
Type	Brute Force
When to Use	When the input size is small (N ≤ 10⁴)
Time Complexity	O(n²) or higher, depending on the loops
Advantages	Simple to implement, guarantees finding the answer
Disadvantages	Very slow for large inputs

🧠 Summary
🌀 Iterative Complete Search = Try Everything
⚙️ Useful for small datasets or when no better algorithm exists.
🪄 Master it first — optimization comes later!

🌿 Next Step:
👉 Recursive Complete Search ➜

Created by: Hussin Hesham
💻 Learning Problem Solving Paradigms in C++

yaml
Copy code

---

Would you like me to make a **second README** for the next topic — “Recursive Complete Search” — in the same 
