# JavaScript vs C++ — Basics for Product Designers Who Code

A side-by-side guide for learning how both languages work, why they feel different, and when each one matters for design + product work.

---

## Why this doc exists

As a product designer who codes, you will mostly **build and ship in JavaScript** (web apps, prototypes, React, Figma plugins, etc.). Learning **C++** teaches you how computers and programs actually work under the hood — memory, types, compilation, performance.

Think of it like this:

| Language | Best for | Designer analogy |
|----------|----------|------------------|
| **JavaScript** | Websites, apps, interactivity, quick prototypes | Figma components you can click and iterate on fast |
| **C++** | Systems, games, performance-critical software | Understanding the engineering constraints behind the design |

You do not need to master both. But comparing them makes **both** easier to learn.

---

## Big picture: how code runs

| | JavaScript | C++ |
|---|------------|-----|
| **Runs where** | Browser, Node.js | Your computer (compiled `.exe`) |
| **How it runs** | Interpreted / JIT at runtime | Compiled first, then executed |
| **Workflow** | Save file → refresh browser / run in terminal | Write `.cpp` → compile → run `.exe` |
| **Typical command** | `node app.js` | `g++ file.cpp -o file.exe` then `./file.exe` |
| **Errors** | Often show up when you run | Compiler catches many errors *before* you run |

**Designer takeaway:** JS lets you move fast and see results immediately. C++ forces you to be precise upfront — which builds good habits for thinking about edge cases and structure.

---

## Your first program

**C++**
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, world!";
    return 0;
}
```

**JavaScript**
```js
console.log("Hello, world!");
```

| Concept | C++ | JS |
|---------|-----|-----|
| Entry point | `main()` is required | Top of file runs automatically |
| Print | `std::cout << "text"` | `console.log("text")` |
| Semicolons | Usually required | Optional (but common) |
| Includes | `#include <iostream>` | No imports needed for `console.log` |

---

## Variables and types

### C++ — you declare the type explicitly

```cpp
int age = 25;
double price = 9.99;
std::string name = "Gowtham";
bool isActive = true;
char grade = 'A';
```

Types are **fixed**. The compiler checks them before the program runs.

### JavaScript — types are flexible

```js
let age = 25;
let price = 9.99;
let name = "Gowtham";
let isActive = true;
```

Same variable can change type (usually avoid this in real projects):

```js
let x = 5;
x = "hello";  // allowed, but confusing
```

| | C++ | JS |
|---|-----|-----|
| Declare | `int x = 5;` | `let x = 5;` or `const x = 5;` |
| Type checking | At compile time (strict) | At runtime (flexible) |
| Change type later | No | Yes (with `let`) |
| Constants | `const int x = 5;` | `const x = 5;` |

**Designer takeaway:** C++ types are like **design tokens with strict rules** — break them and the build fails. JS is more like **freeform layers** — faster to start, easier to accidentally break later.

---

## Functions: methods vs free functions

This is the concept you hit with `std::getline`.

### C++ has both

**Member function** (called on an object with `.`):
```cpp
std::string name = "Gowtham";
name.empty();    // asks that specific string if it's empty
name.length();   // length of that string
```

**Free function** (standalone, in a namespace like `std`):
```cpp
std::getline(std::cin, name);   // not name.getline(...)
std::sort(vec.begin(), vec.end());
```

### JavaScript mostly says "method" for object functions

**Method** (function on an object):
```js
const name = "Gowtham";
name.toUpperCase();
name.length;
```

**Standalone function**:
```js
function greet(name) {
  return "Hello " + name;
}

parseInt("42");
Math.max(1, 2, 3);
```

| C++ term | JS term | Example |
|----------|---------|---------|
| Member function | Method | `name.empty()` / `name.toUpperCase()` |
| Free function | Function (or built-in) | `std::getline(...)` / `parseInt(...)` |
| Namespace (`std::`) | Object namespace | `std::cout` / `Math.max` |

---

## Input and output

### Output

| C++ | JavaScript |
|-----|------------|
| `std::cout << "Hello";` | `console.log("Hello");` |
| `std::cout << name << "!";` | `` console.log(`Hello ${name}!`); `` |

### Input

**C++** (from your `arithmetic.cpp`):
```cpp
int oranges;
std::cin >> oranges;              // reads one number/word (stops at space)

std::string name;
std::getline(std::cin, name);     // reads full line including spaces
```

**JavaScript** (browser — no built-in keyboard input):
```js
// Browser: use HTML + events
const input = document.querySelector("input");
const name = input.value;

// Node.js: need readline module
import readline from "readline";
// ... setup, then ask user in terminal
```

**Designer takeaway:** In web/product work, input almost always comes from **UI elements** (text fields, buttons, forms) — not the terminal. C++ terminal input teaches the *logic* (validate, loop until valid); JS applies that logic to real interfaces.

---

## Conditionals

**C++**
```cpp
int age = 18;

if (age >= 18) {
    std::cout << "Eligible to vote";
} else {
    std::cout << "Not eligible";
}

// Ternary
age >= 18 ? std::cout << "Yes" : std::cout << "No";
```

**JavaScript**
```js
let age = 18;

if (age >= 18) {
  console.log("Eligible to vote");
} else {
  console.log("Not eligible");
}

// Ternary
age >= 18 ? console.log("Yes") : console.log("No");
```

Same logic. JS uses `===` for strict equality (prefer this over `==`).

---

## Loops

**C++** (from your while loop):
```cpp
std::string name;

while (name.empty()) {
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
}
std::cout << "Hello " << name << "!";
```

**JavaScript**
```js
let name = "";

while (name === "") {
  name = prompt("Enter your name:") ?? "";
}
console.log(`Hello ${name}!`);
```

| Loop type | C++ | JS |
|-----------|-----|-----|
| While | `while (condition) { }` | `while (condition) { }` |
| For | `for (int i = 0; i < 10; i++)` | `for (let i = 0; i < 10; i++)` |
| For-each | `for (auto x : list)` | `for (const x of list)` or `.forEach()` |

---

## Arrays / lists

**C++**
```cpp
#include <vector>
std::vector<std::string> fruits = {"apple", "orange", "banana"};
fruits.push_back("mango");
std::cout << fruits[0];  // apple
```

**JavaScript**
```js
const fruits = ["apple", "orange", "banana"];
fruits.push("mango");
console.log(fruits[0]);  // apple
```

JS arrays are more flexible and have many built-in methods:

```js
fruits.map(f => f.toUpperCase());
fruits.filter(f => f.startsWith("a"));
fruits.find(f => f === "orange");
```

---

## Objects vs classes

**JavaScript object** (most common in product/UI code):
```js
const user = {
  name: "Gowtham",
  role: "Product Designer",
  skills: ["Figma", "JS", "C++"],
  greet() {
    return `Hi, I'm ${this.name}`;
  }
};

user.greet();
```

**JavaScript class** (modern, similar to other languages):
```js
class User {
  constructor(name, role) {
    this.name = name;
    this.role = role;
  }

  greet() {
    return `Hi, I'm ${this.name}`;
  }
}

const user = new User("Gowtham", "Product Designer");
```

**C++ class**:
```cpp
class User {
public:
    std::string name;
    std::string role;

    User(std::string n, std::string r) : name(n), role(r) {}

    std::string greet() {
        return "Hi, I'm " + name;
    }
};

User user("Gowtham", "Product Designer");
user.greet();
```

**Designer takeaway:** JS objects map naturally to **component props**, **user profiles**, **design system tokens**. C++ classes teach **structure and encapsulation** — useful mental model even in JS.

---

## Comments

| | C++ | JS |
|---|-----|-----|
| Single line | `// comment` | `// comment` |
| Multi-line | `/* comment */` | `/* comment */` |

Same syntax. You already use these in `arithmetic.cpp`.

---

## Common operators (same in both)

| Operator | Meaning | Example |
|----------|---------|---------|
| `+ - * /` | Math | `5 + 3` → `8` |
| `%` | Remainder | `10 % 3` → `1` |
| `==` / `===` | Equal | JS: prefer `===` |
| `!=` / `!==` | Not equal | |
| `&&` | And | `age >= 18 && hasID` |
| `\|\|` | Or | `isGuest \|\| isAdmin` |
| `!` | Not | `!isEmpty` |
| `? :` | Ternary | `x > 0 ? "pos" : "neg"` |

---

## String comparison cheat sheet

| Task | C++ | JS |
|------|-----|-----|
| Concatenate | `"Hello " + name` or `<<` with cout | `` `Hello ${name}` `` or `"Hello " + name` |
| Length | `name.length()` | `name.length` |
| Empty check | `name.empty()` | `name === ""` or `!name` |
| Uppercase | loop or `<algorithm>` | `name.toUpperCase()` |
| Includes substring | `name.find("go")` | `name.includes("go")` |

---

## Compilation vs running (C++ workflow you are learning)

When you run:
```bash
g++ arithmetic.cpp -o arithmetic
./arithmetic
```

1. **Compile** — compiler translates your C++ into machine code
2. **Link** — creates the `.exe` file
3. **Run** — OS executes the binary

If the `.exe` is still running (waiting for input), the next compile can fail with **Permission denied** — because Windows locks the file. Stop the program first (Ctrl+C), then rebuild.

In JS, you just run the file — no separate compile step (unless using TypeScript or a bundler).

---

## What to learn for product design + code

### Learn deeply in JavaScript
- Variables, functions, conditionals, loops
- DOM manipulation (buttons, forms, modals)
- React or similar (components = reusable UI blocks)
- Fetching data (APIs)
- Basic CSS layout (Flexbox, Grid)

### Learn conceptually from C++
- Types and why they matter
- Input validation loops (like your `while(name.empty())`)
- How compilation and errors work
- Memory and performance basics (later)

### Concepts that transfer directly
| Concept | You learned in C++ | You will use in JS |
|---------|-------------------|-------------------|
| Validation loop | `while(name.empty())` | Disable submit until form is valid |
| Conditionals | `if/else`, ternary | Show/hide UI states |
| Variables | `int`, `string`, `bool` | Component state, user data |
| Functions | Reusable logic blocks | Event handlers, utilities |
| Comments | Document your thinking | Same |

---

## Quick reference: same idea, two languages

### Add two numbers from user input

**C++**
```cpp
int a, b;
std::cin >> a >> b;
std::cout << a + b;
```

**JavaScript (browser)**
```js
const a = Number(document.querySelector("#a").value);
const b = Number(document.querySelector("#b").value);
console.log(a + b);
```

### Greet user by name (your current exercise)

**C++**
```cpp
std::string name;
while (name.empty()) {
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
}
std::cout << "Hello " << name << "!";
```

**JavaScript**
```js
let name = "";
while (name.trim() === "") {
  name = prompt("Enter your name:") ?? "";
}
console.log(`Hello ${name}!`);
```

---

## Suggested learning path

1. **Finish C++ basics** — variables, I/O, if/else, loops, functions (you are here)
2. **Parallel JS in browser** — rebuild the same exercises as tiny web pages
3. **Pick one small product** — todo app, name greeter with form, quiz with score
4. **Add React** when comfortable with plain JS
5. **Keep C++ as fundamentals practice** — 15–20 min sessions, not your main stack

---

## Glossary

| Term | Meaning |
|------|---------|
| **Compile** | Translate source code into an executable (C++) |
| **Runtime** | When the program is actually running |
| **Method** | Function attached to an object (`obj.doThing()`) |
| **Free function** | Standalone function (`doThing(a, b)`) |
| **Member function** | C++ term for method |
| **Type** | What kind of data a variable holds (`int`, `string`, etc.) |
| **Scope** | Where a variable is visible (`let` block scope in JS) |
| **DOM** | Document Object Model — the webpage as JS objects |
| **API** | Interface for programs to talk to each other |
| **Component** | Reusable UI piece (React, Figma, design systems) |

---

*Created for your C++ Practice folder. Update this doc as you learn new topics — add a row to the tables when something clicks.*
