#include <iostream>
using namespace std;

class queues
{
    private:
        static const int max = 3;
        int FRONT, REAR;
        int queue_array[max];

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
            if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1))
            {
                cout << "\nQueue overvlow\n";
                return;
            }

            // Cek apakah antrian kosng
            if (FRONT == -1)
            {
                FRONT = 0;
                REAR = 0;
            }

            else
            {
                // Jika REAR berapa di posisi terakhir array, kembali ke awal array
                if (REAR == max - 1)
                    REAR = 0;
                else
                    REAR = REAR + 1;
            }
            queue_array[REAR] = num;     
        }
    
    void remove()
    {
        // Cek apakah antrian kosong
        if (FRONT == -1)
        {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe element delete from the queue is :" << queue_array[FRONT] << "\n";
        
        // Cek jika antrian hanya memiliki satu elemen
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }

        else
        {
			// Jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array
			if (FRONT == max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
    }

    void display()
    {
        int FRONT_Position = FRONT;
        int REAR_Position = REAR;

        // Cek apakah antrian kosong
        if (FRONT_Position == -1)
        {
            cout <<"Queue is empty\n";
            return;
        }
    }



};