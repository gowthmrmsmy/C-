# Why do we use return 0 at the end?

`return 0;` tells the operating system: **"This program finished successfully."**

## What the number means

| Return value | Meaning |
|-------------|---------|
| `0` | Program ran fine |
| `1`, `-1`, etc. | Something went wrong |

## Do you have to write it?

In C++, if you omit `return 0;` in `main`, the compiler adds it automatically. But writing it is good practice — clear and explicit.

## Simple way to think about it

The program waving goodbye saying "I finished successfully!"

## JS comparison

JavaScript has no `return 0` — the runtime just stops. C++ is closer to the machine, so it reports an exit status.
