# What does srand() do? Can I pass anything?

**srand = "seed random"** — sets the starting point for `rand()`.

## You can pass any integer

```cpp
srand(42);           // fixed seed — same numbers every run
srand(100);          // different fixed seed
srand(time(NULL));   // current time — different each run
```

## What the seed does

| Seed | Result |
|------|--------|
| Same seed every run | Same "random" numbers |
| Different seed each run | Different numbers |

## Why people use time(NULL)

`time(NULL)` changes every second, so the seed is different each run.

## Rules

- Call `srand` **once** at the start of `main` — not inside a loop
- Use a fixed number for testing/debugging
- Use `time(NULL)` when you want variety
