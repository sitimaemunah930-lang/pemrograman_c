/*
* Contoh 08 - break dan continue
* break : keluar dari loop seketika.
* continue : melompati sisa badan loop, lanjut ke iterasi berikutnya.
* Keduanya hanya memengaruhi loop terdekat (yang melingkupinya).
*/
#include <iostream>

int main() {
    std::cout << "Loop tanpa break/continue : ";
    for (int i = 1; i <= 5; ++i)
        std::cout << i << ' ';
    std::cout << "\n";

    std::cout << "continue pada i == 3 : ";
    for (int i = 1; i <= 5; ++i) {
        if (i == 3)
            continue; // lewati pencetakan angka 3
        std::cout << i << ' ';
    }
    std::cout << "\n";

    std::cout << "break pada i == 3 : ";
    for (int i = 1; i <= 5; ++i) {
        if (i == 3)
            break; // berhenti total di i == 3
        std::cout << i << ' ';
    }
    std::cout << "\n\n";

    // Pada nested loop, continue hanya melewati iterasi loop DALAM
    std::cout << "Nested loop, continue di loop dalam:\n";
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (j == 2)
                continue; // hanya melewati j == 2
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << '\n';
    }

    return 0;
}