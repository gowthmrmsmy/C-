# What are free functions?

A **free function** is a standalone function not attached to any object. You call it by name and pass arguments.

## Free function vs member function

| Type | How you call it | Example |
|------|----------------|---------|
| **Member function** | `object.method()` | `name.empty()`, `name.length()` |
| **Free function** | `functionName(args)` | `std::getline(std::cin, name)`, `std::sort(...)` |

## Common free functions in C++

| Function | What it does |
|----------|-------------|
| `std::getline(cin, str)` | Read a full line into a string |
| `std::swap(a, b)` | Swap two values |
| `std::sort(...)` | Sort a range |
| `std::min(a, b)` / `std::max(a, b)` | Smaller/larger of two values |

## `main()` is also a free function

```cpp
int main() { ... }  // not inside any class
```
