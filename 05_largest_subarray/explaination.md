### **Explanation of the `max_length` Function**

The function `max_length` calculates the maximum length of a subarray within the given array `arr` where the number of `0`s and `1`s is equal. 

---

#### **Parameters**
- **`n`**: The size of the array.
- **`arr`**: A vector of integers containing only `0`s and `1`s.

---

### **Logic Overview**

The problem is reduced to finding the longest subarray with a sum of `0` in a modified array, where:
- Replace `0` with `-1`.  
- Keep `1` as `1`.

---

### **Step-by-Step Breakdown**
#### 1. **Setup**
```cpp
unordered_map<int, int> mp;
mp[0] = -1;

int prefix_sum = 0;
int length = 0;
```
- **`mp`**: A hash map (`unordered_map`) to store the first occurrence of each `prefix_sum`.  
  - Initially, it is set to `{0: -1}` to handle cases where a valid subarray starts at index `0`.  
- **`prefix_sum`**: Tracks the cumulative sum as we iterate through the array.
- **`length`**: Stores the maximum length of a subarray with equal `0`s and `1`s.

---

#### 2. **Iterating Through the Array**
```cpp
for (int j = 0; j < n; j++) {
    prefix_sum += (arr[j] == 1 ? 1 : -1);
```
- Each element in the array contributes to the `prefix_sum`:
  - Add `1` if the element is `1`.
  - Subtract `1` if the element is `0` (treated as `-1`).

---

#### 3. **Check for a Matching `prefix_sum`**
```cpp
if (mp.count(prefix_sum)) {
    int i = mp[prefix_sum];
    length = max(length, j - i);
}
```
- If `prefix_sum` has been seen before:
  - A subarray exists between the first occurrence (`i`) and the current index (`j`) where the cumulative sum is `0`.
  - This means the number of `0`s and `1`s in that subarray are equal.
  - Calculate the length of this subarray as `j - i`.
  - Update `length` with the maximum of its current value and `j - i`.

---

#### 4. **Store New `prefix_sum`**
```cpp
else {
    mp[prefix_sum] = j;
}
```
- If `prefix_sum` is not in the map:
  - Store the current index (`j`) as the first occurrence of this sum.

---

### **Return the Maximum Length**
```cpp
return length;
```
After iterating through the array, the variable `length` will hold the maximum length of a subarray with equal `0`s and `1`s.

---

### **Example Walkthrough**

#### Input:
`arr = [0, 1, 0, 1, 0, 1, 1]`

#### Execution:

1. **Initialization:**
   - `mp = {0: -1}`
   - `prefix_sum = 0`
   - `length = 0`

2. **Iterate Through the Array:**
   - `j = 0, arr[0] = 0`:  
     - `prefix_sum = -1`
     - Add `-1` to `mp`: `mp = {0: -1, -1: 0}`
   - `j = 1, arr[1] = 1`:  
     - `prefix_sum = 0`
     - Found in `mp`: `length = max(0, 1 - (-1)) = 2`
   - `j = 2, arr[2] = 0`:  
     - `prefix_sum = -1`
     - Found in `mp`: `length = max(2, 2 - 0) = 2`
   - `j = 3, arr[3] = 1`:  
     - `prefix_sum = 0`
     - Found in `mp`: `length = max(2, 3 - (-1)) = 4`
   - `j = 4, arr[4] = 0`:  
     - `prefix_sum = -1`
     - Found in `mp`: `length = max(4, 4 - 0) = 4`
   - `j = 5, arr[5] = 1`:  
     - `prefix_sum = 0`
     - Found in `mp`: `length = max(4, 5 - (-1)) = 6`
   - `j = 6, arr[6] = 1`:  
     - `prefix_sum = 1`
     - Add `1` to `mp`: `mp = {0: -1, -1: 0, 1: 6}`

3. **Return Result:**
   - `length = 6`

#### Output:
```
6
```
