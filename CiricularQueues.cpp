#include <iostream>
using namespace std;

class Queues
{
    private:
        static const int max = 3;
        int FRONT, REAR;
        int queue_array{max};

    public:
        queues() 
        {
            FRONT = -1;
            REAR = -1;
        }

    void insert()
        {
            int num;
            cout << "Enter a number:";
            cin >> num;
            cout << endl;

            // Cek apakah antrian penuh
            if (FRONT == -1)
            {
                FRONT = 0;
                REAR = 0;
            }
        }