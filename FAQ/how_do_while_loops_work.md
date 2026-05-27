# How do while and do-while loops work?

## while — check FIRST

```cpp
while (condition) {
    // runs 0 or more times
}
```

Checks the condition **before** running. Might never run if condition is false from the start.

## do-while — check LAST

```cpp
do {
    // runs at least once
} while (condition);
```

Runs the body **first**, then checks. Always runs **at least once**.

## The one real difference

| | `while` | `do-while` |
|---|---------|------------|
| Condition checked | Before body | After body |
| Minimum runs | 0 | 1 |

## Example where they differ

```cpp
int x = 100;
while (x < 5) { ... }     // never runs
do { ... } while (x < 5); // runs once
```

## For input validation, both work

```cpp
// do-while reads more naturally for "ask until valid"
do {
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
} while (name.empty());
```
