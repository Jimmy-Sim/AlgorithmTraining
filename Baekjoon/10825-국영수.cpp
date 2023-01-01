#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100005;

struct Student
{
    string name;
    int koreanScore, englishScore, mathScore;
};

bool cmp(Student x, Student y)
{
    if (x.koreanScore != y.koreanScore) return x.koreanScore > y.koreanScore;
    else if (x.englishScore != y.englishScore) return x.englishScore < y.englishScore;
    else if (x.mathScore != y.mathScore) return x.mathScore > y.mathScore;
    else return x.name < y.name;
}

int N;
Student studentInfo[MAX];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> studentInfo[i].name >> studentInfo[i].koreanScore >> studentInfo[i].englishScore >> studentInfo[i].mathScore;

    sort(&studentInfo[0], &studentInfo[N], cmp);

    for (int i = 0; i < N; i++) cout << studentInfo[i].name << '\n';

    return 0;
}