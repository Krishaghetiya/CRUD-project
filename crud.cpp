#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}

main()
{

    int choice, size;

    cout << "Enter array size:";
    cin >> size;

    int arr[size];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int position;

    cout << "Enter Position:";
    cin >> position;

    do
    {
        cout << "Press 1 for Insert" << endl;
        cout << "Press 2 for Update" << endl;
        cout << "Press 3 for Delete" << endl;
        cout << "Press 0 for the exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            exit(1);
        }

        switch (choice)
        {
        case 1:
            int num;
            cout << "Enter number you want to insert:";
            cin >> num;
            size++;
            for (int i = size - 1; i > position; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[position] = num;

            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }

            cout << endl;

            break;
        case 2:
            int numb;
            cout << "Enter number you want to Update:";
            cin >> numb;

            arr[position] = numb;

            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }

            cout << endl;

            break;

            case 3:
            
            size--;
            for (int i = position; i < size; i++)
            {
                arr[i] = arr[i+1];
            }

            arr[position] = num;

            for (int i = 0; i < size ; i++)
        {
        cout << arr[i] << " " ;   

    }

            cout << endl;
            
            break;

        default:
        cout << "Invalid Choice" << endl;
            break;
        }

    } while (choice != 4);
    return 0;
}
