// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int K=0,answer=0;
    stack<int> answers;

    collection;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int value;
        cin >> value;
        if (value != 0)
        {
            answers.push(value);
        }
        else
        {
            answers.pop();
        }
    }
    for (int i = answers.size(); i > 0; i--)
    {
        answer += answers.top();
        answers.pop();
    }
    cout << answer;
}

