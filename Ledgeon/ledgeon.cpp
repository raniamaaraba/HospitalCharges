/* This program was designed by Rania Maaraba on 23.1.24
 * the program will reviece four bits of user input and then use
 * that data to correctly calculate percentage increase
 * and the total average charity cost per year.
*/

#include <iostream>
using namespace std;

int main() {

    int year1, year2, patients1, patients2;
    float acy1, acy2;
    double acc, nv, pc;

    cout << "Enter the first year: ";
    cin >> year1;
    cout << "Enter the number of patients we saw that year: ";
    cin >> patients1;
    cout << "Enter the second year: ";
    cin >> year2;
    cout << "Enter the number of patients we saw that year: ";
    cin >> patients2;

    nv = (patients2-patients1)/static_cast<double>(patients1);
    pc = nv*100;

    acc = 1008.97;
    acy1 = patients1 * acc;
    acy2 = patients2 * acc;

    cout << "In year " << year1 << ", our hospital issued " << acy1 << 
    " dollars of charity charges.\n";
    cout << "In year " << year2 << ", our hospital issued " << acy2 << 
    " dollars of charity charges.\n";
    cout << "Between " << year1 << " and " << year2 << ", there was a " <<
    pc << "% increase in patients seen at our hospital.\n";

    return 0; 

}