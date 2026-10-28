// item05 : 컴파일러가 몰래 만드는 함수를 알아두자
//
// [책의 방식 (C++03)]
//   선언하지 않으면 기본 생성자, 복사 생성자, 복사 대입 연산자, 소멸자를 컴파일러가 만든다.
// [모던 C++]
//   C++11부터 이동 생성자, 이동 대입 연산자도 자동 생성 대상이다. (Rule of 0/3/5)
// [실험 아이디어]
//   어떤 문장이 어떤 함수를 호출하는지 출력으로 확인해 보자.

#include <iostream>
#include <string>

// 자기가 불릴 때마다 출력하는 멤버용 클래스
struct Tracer
{
    Tracer() { std::cout << "  Tracer: 기본 생성자\n"; }
    Tracer(const Tracer&) { std::cout << "  Tracer: 복사 생성자\n"; }
    Tracer& operator=(const Tracer&)
    {
        std::cout << "  Tracer: 복사 대입 연산자\n";
        return *this;
    }
    ~Tracer() { std::cout << "  Tracer: 소멸자\n"; }
};

// 아무 특수 멤버 함수도 선언하지 않았다.
// 컴파일러가 만든 Widget 의 함수들은 멤버 Tracer 의 같은 함수를 호출한다.
class Widget
{
    std::string name;
    Tracer tracer;
};

int main()
{
    std::cout << "=== item05_compiler_generated_functions ===\n";

    // TODO(human): Widget 을 사용해서 기본 생성자, 복사 생성자, 복사 대입 연산자가
    // 각각 한 번 이상 불리도록 코드를 작성하세요. 각 문장 앞에 std::cout 으로
    // 어떤 함수를 기대하는지 적어두면 실제 출력과 비교하기 좋아요.
}
