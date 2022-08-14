#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    while(true){
        int num;
        cout << "\n\nenter number to factorize(0 to end): ";
        cin >> num;
        if(num != 0){
            while(num % 2 == 0){
                cout << "2 ";
                num = num/2;
            }
            for(int i = 3; i <= sqrt(num); i+=2){
                if(num % i == 0){
                    while(num % i == 0){
                        cout << i << " ";
                        num = num/i;
                    }
                }
            }
            if(num > 2){
                cout << num << endl;
            }
        } else if(num == 0){
            exit(0);
        }
    }


    return 0;
}
