# 📌 C++ Vector – Basic Concepts

## 1. What is a Vector?

A **vector** is a dynamic array in C++.

Normal array ka size fixed hota hai, lekin **vector ka size runtime par increase/decrease ho sakta hai.**

```cpp
#include <iostream>
#include <vector>
using namespace std;
```

Vector banane ke liye:

```cpp
vector<int> v;
```

Yahan:
- `vector` → data structure
- `int` → vector me integer values store hongi
- `v` → vector ka naam

---

# 2. Vector with Initial Size

```cpp
vector<int> v(7);
```

Iska matlab:

> 7 elements ka vector banao aur sabhi elements ko `0` se initialize karo.

```text
v = [0, 0, 0, 0, 0, 0, 0]
```

```cpp
cout << v.size();
```

Output:

```text
7
```

---

# 3. Vector with Values

Direct values bhi de sakte hain:

```cpp
vector<int> v = {10, 20, 30, 40};
```

Vector:

```text
[10, 20, 30, 40]
```

---

# 4. `size()` – Kitne Elements Hain?

`size()` batata hai ki vector ke andar **currently kitne elements** hain.

```cpp
vector<int> v = {10, 20, 30};

cout << v.size();
```

Output:

```text
3
```

### Remember:

```text
size = actual elements
```

---

# 5. `capacity()` – Kitni Space Available Hai?

`capacity()` batata hai ki vector currently **kitne elements tak space hold kar sakta hai without reallocation**.

Example:

```cpp
vector<int> v(7);

cout << v.size() << " " << v.capacity();
```

Output generally:

```text
7 7
```

### Important:

`capacity()` ko exact fixed value assume mat karo.

Vector implementation ke according capacity grow ho sakti hai.

---

# 6. `push_back()` – Element Add Karna

Vector ke **end me element add** karne ke liye:

```cpp
v.push_back(10);
```

Example:

```cpp
vector<int> v = {1, 2, 3};

v.push_back(4);
```

Now:

```text
[1, 2, 3, 4]
```

`size()`:

```text
4
```

---

# 7. `push_back()` ke Saath Size & Capacity

Example:

```cpp
vector<int> v(7);

cout << v.size() << " " << v.capacity() << endl;

v.push_back(-6);

cout << v.size() << " " << v.capacity() << endl;
```

Pehle:

```text
size = 7
capacity = 7
```

`push_back(-6)` ke baad:

```text
size = 8
```

Lekin capacity ko vector automatically increase kar sakta hai.

Conceptually:

```text
Before:
[0, 0, 0, 0, 0, 0, 0]
 size = 7
 capacity = 7

After push_back(-6):
[0, 0, 0, 0, 0, 0, 0, -6]
 size = 8
 capacity = increased
```

> ⚠️ Exact new capacity ko assume nahi karna chahiye.

---

# 8. `pop_back()` – Last Element Remove

Last element ko remove karne ke liye:

```cpp
v.pop_back();
```

Example:

```cpp
vector<int> v = {10, 20, 30, 40};

v.pop_back();
```

Now:

```text
[10, 20, 30]
```

`size()` becomes:

```text
3
```

---

# 9. Accessing Elements

Vector ke elements ko array ki tarah access kar sakte hain.

```cpp
vector<int> v = {10, 20, 30, 40};

cout << v[0];
```

Output:

```text
10
```

Indexing:

```text
Index:   0    1    2    3
         ↓    ↓    ↓    ↓
Vector: [10, 20, 30, 40]
```

### Important:

Index always **0 se start** hota hai.

---

# 10. `at()` – Safe Element Access

```cpp
cout << v.at(2);
```

Ye bhi index `2` ka element return karega.

Difference:

```cpp
v[2]
```

vs

```cpp
v.at(2)
```

`at()` bounds checking karta hai.

Beginner ke liye:

```cpp
v[index]
```

aur

```cpp
v.at(index)
```

dono important hain.

---

# 11. `front()` – First Element

```cpp
cout << v.front();
```

First element return karega.

Example:

```text
[10, 20, 30, 40]
 ↑
front()
```

Output:

```text
10
```

---

# 12. `back()` – Last Element

```cpp
cout << v.back();
```

Last element return karega.

```text
[10, 20, 30, 40]
             ↑
           back()
```

Output:

```text
40
```

---

# 13. `empty()` – Vector Empty Hai Ya Nahi?

```cpp
if(v.empty())
    cout << "Vector is empty";
else
    cout << "Vector is not empty";
```

`empty()`:

```text
true  → vector empty hai
false → vector empty nahi hai
```

---

# 14. `clear()` – Saare Elements Remove

```cpp
v.clear();
```

Example:

```cpp
vector<int> v = {10, 20, 30};

v.clear();
```

Now:

```text
size = 0
```

⚠️ `clear()` elements ko remove karta hai, lekin capacity generally automatically zero nahi hoti.

---

# 15. Loop Se Vector Print Karna

### Normal `for` loop

```cpp
for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}
```

### Range-based `for` loop

```cpp
for(int x : v){
    cout << x << " ";
}
```

Ye beginners ke liye kaafi useful hai.

---

# 16. Vector Initialization – Important Forms

### Empty vector

```cpp
vector<int> v;
```

### Fixed initial size

```cpp
vector<int> v(5);
```

Result:

```text
[0, 0, 0, 0, 0]
```

### Size + same value

```cpp
vector<int> v(5, 10);
```

Result:

```text
[10, 10, 10, 10, 10]
```

### Direct values

```cpp
vector<int> v = {1, 2, 3, 4};
```

---

# 17. Array vs Vector

| Feature | Array | Vector |
|---|---|---|
| Size | Fixed | Dynamic |
| Add element | Difficult | `push_back()` |
| Remove last | Manual | `pop_back()` |
| Size checking | Manual | `size()` |
| Capacity | No separate concept | `capacity()` |
| STL | No | Yes |

### Simple Rule:

```text
Array  → fixed size
Vector → dynamic size
```

---

# 18. Most Important Vector Functions

| Function | Work |
|---|---|
| `size()` | Number of elements |
| `capacity()` | Current allocated capacity |
| `push_back(x)` | Add element at end |
| `pop_back()` | Remove last element |
| `front()` | First element |
| `back()` | Last element |
| `empty()` | Check whether empty |
| `clear()` | Remove all elements |
| `at(i)` | Access element with bounds checking |

---

# 🧠 Most Important Concept: `size()` vs `capacity()`

Suppose:

```cpp
vector<int> v;
```

Initially:

```text
size     = 0
capacity = 0 (commonly)
```

After:

```cpp
v.push_back(10);
```

Conceptually:

```text
size = 1
capacity >= 1
```

After more `push_back()` operations:

```text
size       → actual elements
capacity   → allocated storage
```

### Remember this line:

> **Size tells "kitne elements hain", capacity tells "kitni storage currently allocated hai".**

---

# ⚠️ Common Beginner Mistakes

### Mistake 1

```cpp
vector<int> v(5);

v.push_back(10);
```

Beginners often think vector becomes:

```text
[10, 0, 0, 0, 0]
```

❌ Wrong.

Actually:

```text
[0, 0, 0, 0, 0, 10]
```

Because `vector<int> v(5)` already created **5 elements**.

---

### Mistake 2: `size()` ko capacity samajhna

```cpp
v.size()
```

means:

> Current number of elements.

```cpp
v.capacity()
```

means:

> Currently allocated storage capacity.

---

### Mistake 3: Empty vector me `front()` / `back()`

```cpp
vector<int> v;

cout << v.front();
```

❌ Avoid this because vector empty hai.

Better:

```cpp
if(!v.empty()){
    cout << v.front();
}
```

---

# 🚀 Basic Vector Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "First: " << v.front() << endl;
    cout << "Last: " << v.back() << endl;

    cout << "Elements: ";

    for(int x : v){
        cout << x << " ";
    }

    return 0;
}
```

Output conceptually:

```text
Size: 3
Capacity: >= 3
First: 10
Last: 30
Elements: 10 20 30
```

---

# 🧠 Quick Revision

```text
vector<int> v;       → empty vector

vector<int> v(5);    → 5 elements, all 0

v.push_back(x);      → add x at end

v.pop_back();        → remove last element

v.size();            → number of elements

v.capacity();        → allocated capacity

v[0];                → access first element

v.at(0);             → bounds-checked access

v.front();           → first element

v.back();            → last element

v.empty();           → check empty

v.clear();           → remove all elements
```

## ⭐ One-Line Rule

**Vector = Dynamic Array + Useful STL Functions**

```text
Array  → fixed size
Vector → dynamic size
```