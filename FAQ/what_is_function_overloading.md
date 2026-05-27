# What is function overloading?

**Multiple functions with the same name** but **different parameters**. The compiler picks the right one based on what you pass in.

## How it works

```cpp
void bakePizza();                    // 0 params
void bakePizza(std::string topping); // 1 param
```

```cpp
bakePizza();              // calls version with 0 params
bakePizza("pepperoni");   // calls version with 1 param
```

The compiler matches by:
- **Number** of arguments
- **Type** of arguments

## Cannot overload by return type alone

```cpp
int getValue();     // can't have both — compiler
double getValue();  // doesn't know which to call
```

## JS comparison

JavaScript does NOT have overloading. Same name twice = second replaces first. JS uses optional params or checks inside instead.
