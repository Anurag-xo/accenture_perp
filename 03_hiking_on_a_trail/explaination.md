This program is designed to find a **peak element** in an array. A **peak element** is defined as an element that is greater than its neighbors (or the sole neighbor in the case of the first or last element).

---

### **Code Breakdown**

#### **1. `peakElement` Function**
```cpp
int peakElement(int n, vector<int> v) {
```
- **Input:** 
  - `n`: Size of the array.
  - `v`: Vector containing the elements of the array.
- **Output:** 
  - The value of a peak element in the array, or `-1` if no peak element exists.

---

#### **2. Base Cases**
```cpp
if (n == 0) return 0;
if (n == 1) return v[0];
```
- **Case 1:** If the array is empty (`n == 0`), the function returns `0` (no peak element can exist).
- **Case 2:** If the array contains only one element (`n == 1`), that element is the peak (since it has no neighbors).

---

#### **3. First and Last Elements**
```cpp
if (v[0] > v[1]) {
    return v[0];  // Descending array case
}

if (v[n - 1] > v[n - 2]) {
    return v[n - 1];  // Ascending array case
}
```
- If the **first element** is greater than the second, it is a peak (no left neighbor to check).
- Similarly, if the **last element** is greater than the second last, it is also a peak.

---

#### **4. Middle Elements**
```cpp
for (int i = 1; i < n - 1; i++) {
    if (v[i] > v[i - 1] && v[i] > v[i + 1]) return v[i];
}
```
- For elements between the first and last:
  - If the current element `v[i]` is greater than both its left neighbor `v[i-1]` and its right neighbor `v[i+1]`, it is a peak.

---

#### **5. No Peak Element**
```cpp
return -1;
```
- If no peak element is found after all checks, return `-1`.

---

### **`main` Function**
This function serves as the interface for the user to input data and obtain the result.

#### **1. Input the Array Size**
```cpp
cout << "Enter the size of the array: ";
cin >> n;
```
- Prompts the user to input the size of the array (`n`).

---

#### **2. Input the Array Elements**
```cpp
vector<int> v(n);
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
    cin >> v[i];
}
```
- A vector `v` of size `n` is declared.
- The user is prompted to input `n` elements, which are stored in the vector `v`.

---

#### **3. Call the `peakElement` Function**
```cpp
int result = peakElement(n, v);
```
- Passes the array size `n` and the vector `v` to the `peakElement` function.
- The result (either a peak element or `-1`) is stored in `result`.

---

#### **4. Output the Result**
```cpp
if (result != -1) {
    cout << "Peak Element: " << result << endl;
} else {
    cout << "No peak element found" << endl;
}
```
- If the `result` is not `-1`, it prints the peak element.
- Otherwise, it informs the user that no peak element exists.

---

### **Example Execution**

#### Input 1:
```
Enter the size of the array: 6
Enter the elements of the array: 1 3 20 4 1 0
```

**Steps:**
1. Base cases: Array has more than one element.
2. Check first and last elements:
   - `v[0] = 1` (not greater than `v[1]`).
   - `v[5] = 0` (not greater than `v[4]`).
3. Check middle elements:
   - `v[2] = 20` is greater than `v[1] = 3` and `v[3] = 4`.
   - Returns `20`.

**Output:**
```
Peak Element: 20
```

---

#### Input 2:
```
Enter the size of the array: 4
Enter the elements of the array: 10 20 15 25
```

**Steps:**
1. Base cases: Array has more than one element.
2. Check first and last elements:
   - `v[0] = 10` (not greater than `v[1]`).
   - `v[3] = 25` (greater than `v[2] = 15`).
   - Returns `25`.

**Output:**
```
Peak Element: 25
```

---

### **Complexity Analysis**

- **Time Complexity:**  
  - Base cases and first/last element checks: \(O(1)\).
  - Iterating through the array for middle elements: \(O(n)\).  
  - Total: \(O(n)\).

- **Space Complexity:**  
  - Uses a single vector `v` and a few variables.  
  - Total: \(O(n)\).
