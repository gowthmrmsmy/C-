# What does getline() do?

`std::getline(std::cin, name)` reads a **full line of text** from the keyboard (until you press Enter) and stores it in a string.

## Why use getline instead of cin >>?

| | `std::cin >> name` | `std::getline(std::cin, name)` |
|---|---|---|
| Stops at | First whitespace | Enter |
| `"John Doe"` | Only reads `"John"` | Reads full `"John Doe"` |
| Empty input | Hangs/waits | Reads empty string `""` |

## Example

```cpp
std::string name;
std::getline(std::cin, name);  // type "John Doe" → name = "John Doe"
```

## Important

- `getline` is a **free function** (not a member function) — you call `std::getline(...)`, not `name.getline(...)`
- If you mix `cin >>` and `getline`, add `std::cin.ignore()` between them to clear the leftover newline
