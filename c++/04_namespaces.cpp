// TOPIC: Namespaces
// Namespaces prevent naming conflicts when different libraries have
// functions/variables with the same name. std:: is the standard namespace.

#include <iostream>

// You can create your own namespaces
namespace first {
    int x = 1;
    void greet() {
        std::cout << "Hello from first namespace\n";
    }
}

namespace second {
    int x = 2;
    void greet() {
        std::cout << "Hello from second namespace\n";
    }
}

int main()
{
    // Without namespaces, both 'x' and 'greet' would conflict

    // Access with namespace:: prefix
    std::cout << first::x << "\n";   // 1
    std::cout << second::x << "\n";  // 2

    first::greet();   // "Hello from first namespace"
    second::greet();  // "Hello from second namespace"

    // "using namespace" lets you skip the prefix (use carefully)
    using namespace first;
    std::cout << x << "\n";  // 1 — uses first::x
    greet();                  // uses first::greet()

    // This is why some people write:
    //   using namespace std;
    // Then you can write cout instead of std::cout
    // But it's better practice to keep std:: — avoids hidden conflicts

    return 0;
}
