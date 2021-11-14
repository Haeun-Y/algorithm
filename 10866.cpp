#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    int numOfCommand = 0;
    scanf_s("%d", &numOfCommand);

    deque<int> dq;
    string command;
    int numToPush = 0;

    for (int i = 0; i < numOfCommand; i++)
    {
        cin >> command;

        if (command == "push_front")
        {
            cin >> numToPush;
            dq.push_front(numToPush);
        }
        else if (command == "push_back")
        {
            cin >> numToPush;
            dq.push_back(numToPush);
        }
        else if (command == "pop_front")
        {
            if (dq.empty())//덱이 비어있을 때 
            {
                printf("-1\n");
            }
            else//덱이 비어있지 않을 때 
            {
                printf("%d\n", dq.front());
                dq.pop_front();

            }

        }
        else if (command == "pop_back")
        {
            if (dq.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", dq.back());
                dq.pop_back();
            }

        }
        else if (command == "size")
        {
            cout << dq.size();
            printf("\n");
        }
        else if (command == "empty")
        {
            if (dq.empty())
                printf("1\n");

            else
                printf("0\n");

        }
        else if (command == "front")
        {
            if (dq.empty())
                printf("-1\n");
            else
                printf("%d\n", dq.front());

        }
        else if (command == "back")
        {
            if (dq.empty())
                printf("-1\n");

            else
                printf("%d\n", dq.back());

        }

    }
}