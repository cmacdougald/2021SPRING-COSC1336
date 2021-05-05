#include <string>

class Address
{
    public:
        Address();
        ~Address();
        void print();
        std::string toString();
        void init();
        void setFirst(std::string strpFirst);
        void setLast(std::string strpLast);
        void setPhoneNumber(std::string strpPhoneNumber);
        std::string getFirst();
        std::string getLast();
        std::string getPhoneNumber();
        void input();
    private:
        std::string strFirst;
        std::string strLast;
        std::string strPhoneNumber;
};