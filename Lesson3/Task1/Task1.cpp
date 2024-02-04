#include <iostream>
#include <fstream>
#include  <sstream>
#include <string> 


class Address {
private:
    std::string city;
    std::string street;
    int housenum;
    int flatnum;


public:
    Address() {
        this->city = "city";
        this->street = "street";
        this->housenum = 0;
        this->flatnum = 0;
    };
    Address(std::string city, std::string street, int housenum, int flatnum) {
        this->city = city;
        this->street = street;
        this->housenum = housenum;
        this->flatnum = flatnum;
    };

    std::string get_output_address() {

        std::string str_for_out;
        str_for_out = city + ", " + street + ", " + std::to_string(housenum) + ", " + std::to_string(flatnum) + "\0";
        return str_for_out;
    };

    static void two_address_convert(Address& adr1, Address& adr2) {
        std::string city1, street1;
        int hN, flN;

        city1 = adr2.city;
        street1 = adr2.street;
        hN = adr2.housenum;
        flN = adr2.flatnum;

        adr2.city = adr1.city;
        adr2.street = adr1.street;
        adr2.housenum = adr1.housenum;
        adr2.flatnum = adr1.flatnum;


        adr1.city = city1;
        adr1.street = street1;
        adr1.housenum = hN;
        adr1.flatnum = flN;

    };

};

// if C++ is not V11 stoi, atoi don't work
int string_to_int(std::string str) {

    std::stringstream geek;
    geek << str;
    int x = 0;
    geek >> x;
    return x;
}

 static void reversed(Address* arr, int size) {

    for (int i = 0, j = size - 1; i < j; i++, j--) {
    Address c;
    c = Address();
    c.two_address_convert(c, arr[i]);
    arr[i].two_address_convert(arr[i], arr[j]);
    arr[j].two_address_convert(arr[j], c);
     };
}




int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    std::ifstream  file_in("in.txt");
    std::ofstream  file_out("out.txt");
    std::string str;
    std::string city, street;
    int housenum, flatnum;
    int size;
    int i = 0, j = 0;

    if (!file_in.is_open())
    {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }

    file_in >> str;
    size = string_to_int(str);


    Address* strbook = new Address[size];

    while (!file_in.eof())
    {
        file_in >> city >> street >> housenum >> flatnum;
        strbook[i] = Address(city, street, housenum, flatnum);
        i++;
    };

     reversed(strbook, size);

    file_out << size << std::endl;

    for (int i = 0; i < size; i++) {
        file_out << strbook[i].get_output_address() << std::endl;
    };

    std::cout << "Done!" << std::endl;
     
    file_out.close();
    file_in.close();
    delete[] strbook;

}

