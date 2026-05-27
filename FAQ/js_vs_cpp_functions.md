# How do JS functions compare to C++?

## C++ has

| Type | Example |
|------|---------|
| Member function | `name.empty()` |
| Free function | `std::getline(cin, name)` |
| Static member | `ClassName::method()` |
| Lambda | `[](int x){ return x * 2; }` |

## JavaScript has

| Type | Example |
|------|---------|
| Method | `name.toUpperCase()` |
| Regular function | `function greet(name) {}` |
| Arrow function | `const add = (a, b) => a + b` |
| Class method | `class Foo { bar() {} }` |
| Static method | `static create() {}` |
| Callback | `btn.addEventListener("click", () => {})` |

## Key difference

- JS does NOT have function overloading (same name, different params)
- C++ does — the compiler picks the right version based on arguments
- JS uses optional params or checks inside the function instead
