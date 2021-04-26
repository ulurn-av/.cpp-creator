#include <iostream>
#include <fstream>
using namespace std;

void writting(ofstream& file)
{
    file << "#include <iostream>" << "\n"
        << "using namespace std;" << "\n\n"
        << "int main()" << "\n"
        << "{" << "\n\n"
        << "\t" << "return 0;" << "\n"
        << "}";

    file.close();

    cout << "The file has been created successfully!" << "\n";
}

int main()
{
    string name;
    cout << "Input a name for the file: ";
    cin >> name;
    
    if (name.find(".cpp") != name.npos)
    {
        ofstream main_file(name);
        writting(main_file);
    }
    else
    {
        ofstream main_file(name+".cpp");
        writting(main_file);
    }


    return 0;
}
