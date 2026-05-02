#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //file ko open karna 
    ofstream fout;
    fout.open("zoom.txt"); // create ker dega aut open kar dega
    //write kar sakta hun
    fout<<"Hello Indian";


    fout.close(); // resources release kar paauon
return 0;
}