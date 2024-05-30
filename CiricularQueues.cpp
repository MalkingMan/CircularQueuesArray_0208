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

            // Cek apakah antrian kosong
            if ((FRONT == 0 && REAR = max - 1) || (FRONT == REAR + 1))
            {
                COUT << "\nQueue overvlow\n";
                return;
            }



            // Cek apakah antrian kosng
            if (FRONT == -1)
            {
                FRONT = 0;
                REAR = 0;
            }
        }