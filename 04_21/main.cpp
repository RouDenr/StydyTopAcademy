#include <iostream>
#include <fstream>
#include <sstream>
#include <ios>

void inpun_int() {
    int n;

    // ifstream - input file stream (поток файла для чтения)
    std::ifstream test("test.txt");
    test >> n;
    std::cout << n << "\n";
}

void output_int() {
    int n = 44;

    // ofstream - output file stream (поток файла для записи)
    // std::ios::app - флаг для дозаписи, иначе файл перезапишеться
    // std::ofstream test("test.txt", std::ios::app);
    std::ofstream test("test.txt");

    test << n << "\n";
    test << "Hello world!!\n";
}

void readline_file(const std::string &filename) {
    std::ifstream fin(filename);
    int n;
    std::string str;

    std::string line;
    std::getline(fin, line);
    std::cout << line << "\n";

    fin >> n;
    std::cout << n;
    std::getline(fin, str);
    std::cout << str << "\n";
    std::getline(fin, str);
    std::cout << str << "\n";
}

std::string inpun_line() {
    std::string line;
    std::getline(std::cin, line);
    return line;
}

void print_all_file(const std::string &filename) {
    std::ifstream fin(filename);

    if (not fin.good()) {
        std::cout << "file error\n";
        return;
    }

    while (not fin.eof()) {
        std::string line;
        std::getline(fin, line);
        std::cout << line << "\n";
    }
}

// void out_recd()

void read_all(std::istream &in,
              std::ostream &out) {
    if (not in.good()) {
        std::cout << "file error\n";
        return;
    }

    while (not in.eof()) {
        std::string line;
        std::getline(in, line);
        out << line << "\n";
    }
}

void test_string_stream() {
    std::stringstream sio;

    int n, m;
    std::string tmp = "4 5";

    sio << tmp;

    sio >> n >> m;
    std::cout << n + m << "\n";
}

void add_out_rect(std::ostream &out) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            out << "0";
        }
        out << "\n";
    }
}

int main(int argc, char const *argv[])
{
    // std::ofstream test("test.txt");
    // output_int();
    // readline_file("test.txt");
    // std::cout << "File: ";
    // print_all_file(inpun_line());

    // std::ifstream  in(inpun_line());

    std::stringstream sio;

    // sio << "Hello!!\nMy name is Ivan!\n";
    // sio << 42 << " " << 55 + 5 << "\n";

    // read_all();


    std::ofstream  out(inpun_line());


    add_out_rect(sio);
    read_all(sio);

    std::cout << "END!!\n";
    return 0;
}
