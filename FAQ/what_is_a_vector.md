# What does vector do?

A **vector** is a **resizable array**. Unlike regular arrays, vectors can grow and shrink.

## Array vs vector

| | Array | Vector |
|---|-------|--------|
| Size | Fixed at creation | Can grow/shrink |
| Syntax | `int arr[5]` | `std::vector<int> vec` |
| Add item | Can't | `vec.push_back(6)` |
| Get size | `sizeof` trick | `vec.size()` |
| Header | None | `#include <vector>` |

## Common operations

```cpp
std::vector<int> nums = {2, 7, 11, 15};

nums[0];             // access by index → 2
nums.size();         // → 4
nums.push_back(20);  // add to end → {2, 7, 11, 15, 20}
```

## The <int> part

Specifies what type the vector holds:

```cpp
std::vector<int> numbers;        // list of ints
std::vector<std::string> names;  // list of strings
```

## Returning a vector

```cpp
return {0, 1};  // returns a vector containing 0 and 1
return {};      // returns an empty vector
```

LeetCode uses vectors instead of plain arrays because they're more flexible.
