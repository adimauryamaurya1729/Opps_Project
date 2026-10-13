#include <iostream>
#include <string>

class CatalogItem {
protected:
    std::string title;
public:
    CatalogItem(std::string t) : title(t) {}
    void formatCatalog() {
        std::cout << "Catalog Listing: [" << title << "]\n";
    }
};

class EBook : public CatalogItem {
    double fileSizeMB;
public:
    EBook(std::string t, double fs) : CatalogItem(t), fileSizeMB(fs) {}
    void displayEBook() {
        formatCatalog();
        std::cout << "Format: Digital | Size: " << fileSizeMB << " MB\n";
    }
};

int main() {
    EBook ebook("Data Structures in C++", 15.5);
    ebook.displayEBook();
    return 0;
}