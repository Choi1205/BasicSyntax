#include <iostream>

int main()
{
    std::cout << "Hello C++\n";
    std::cout << "Hello C++" << std::endl;
    std::cout << "Hello World!\n";
    std::cout << 21345 << std::endl;

    /*
        정수형 타입 : int(integer)
        실수형 타입 : float
        문자형 타입 : char(character)
        bool형 타입 : bool 데이터 - true(1)/false(0)
    */

    int Number1;
    Number1 = 10;
    int Number2 = 20;
    int Number3 = 0;
    float PointNumber = 1.234f;
    char Word = 'A';
    bool Condition = true;

    std::string LongWord = "A";


    Number3 = Number1 + 10;
    Number1 = Number1 + 10; //Number1 = 20
    Number1 = Number1 + 10; //Number1 = 30
    Number1 += 10; // Number1 = 40 //증가식
    Number1 -= 10; // Number1 = 30 //감소식

    //논리연산 : bool타입 데이터 연산
    //&& : And(& : Ampersand)
    //|| : Or(| : pipe)
    //! : Not
    

    int Number4 = 10;
    if (Number4 > 5) {
        std::cout << "참일때 실행 하는 부분" << std::endl;
    }

    if (true) std::cout << "참이라서 무조건 실행되는 부분" << std::endl;

    char Number5 = 'a';
    const char asdf = 'a';

    switch (Number5) {
        case asdf:
            std::cout << "case 1 : " << Number5 << std::endl;
            break;
        case 'b':
            std::cout << "case 2 : " << Number5 << std::endl;
            break;
        case 'c':
            std::cout << "case 2 : " << Number5 << std::endl;
            break;
        default :
            std::cout << "default" << std::endl;
    }
    
    std::cout << std::endl;

    int Sum = 0;
    for (int i = 1; i <= 10; i++) {
        Sum += i;
        std::cout << "Sum " << i + 1 << " : " << Sum << std::endl;
    }
    std::cout << "Sum result: " << Sum << std::endl;

    std::cout << std::endl;

    int Total = 0;
    int Count = 0;
    while (Count < 10) {
        Total += Count;
        std::cout << "Total " << Count << " : " << Total << std::endl;

        Count++;
    }

    Count = 0;
    while (true) {
        std::cout << "Unlimited Count : " << Count << std::endl;
        if (Count == 10) break;
        Count++;
    }


    std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        if (i == 7) continue;
        std::cout << "Continue i : " << i << std::endl;
    }

}