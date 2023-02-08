#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int N;
multiset<string> books;
int maxBooks;
string maxBook;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        string book;
        cin >> book;
        books.insert(book);
    }

    for (string book : books) {
        if (books.count(book) > maxBooks) {
            maxBook = book;
            maxBooks = books.count(book);
        }
        else if (books.count(book) == maxBooks) {
            if (book < maxBook) maxBook = book;
        }
    }

    cout << maxBook << '\n';

    return 0;
}   