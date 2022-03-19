#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> data{};
    int add_num{};
    int avrg{};
    int vec_sum{};
    int smallest{};
    int largest{};

    char selection{};
    do
    {
        //Display menu
        cout << "\n--------------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the number" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter a code: ";
        cin >> selection;

        //P button - display vector
        if (selection == 'p' || selection == 'P')
        {
            if (data.size() == 0)
                cout << "[] - the list is empty";
            else
            {
                cout << "[";
                //Displaying vector
                for (auto num : data)
                    cout << num << ", ";
                cout << "]";
            }
        }

        //A button - add a number
        else if (selection == 'a' || selection == 'A')
        {
            cout << "Enter a number: ";
            cin >> add_num;
            data.push_back(add_num);
            cout << add_num << " added" << endl;
        }

        //M button - average of the elements
        else if (selection == 'm' || selection == 'M')
        {
            if (data.size() == 0)
                cout << "Unable to calculate the mean - no data";
            else
            {
                for (int i{ 0 }; i < data.size(); i++)
                {
                    vec_sum = data.at(i) + vec_sum;
                }
                avrg = vec_sum / data.size();
                cout << "The mean = " << avrg;
            }
        }

        //S button - smallest number
        else if (selection == 's' || selection == 'S')
        {
            if (data.size() == 0)
                cout << "Unable to determine the smallest number - list is empty";
            else
            {
                smallest = data.at(0);
                for (auto num : data)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }


        }

        //L button - largest number
        else if (selection == 'l' || selection == 'L')
        {
            if (data.size() == 0)
                cout << "Unable to determine the largest number - list is empty";
            else
            {
                largest = data.at(0);
                for (auto num : data)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        }

        //Q button - quitting program
        else if (selection == 'q' || selection == 'Q')
            cout << "Goodbye";

        //Other inputs
        else
            cout << "Unknown selection, please try again";

    } while (selection != 'q' && selection != 'Q');

    return 0;
}

