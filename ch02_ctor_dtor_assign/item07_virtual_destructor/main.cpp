// item07 : 다형성 기본 클래스에는 가상 소멸자를 두자
//
// [책의 방식 (C++03)]
//   기본 클래스 소멸자를 virtual로 선언한다.
// [모던 C++]
//   virtual ~Base() = default; 파생 클래스에서는 override, 더 상속하지 않을 클래스는 final.
// [실험 아이디어]
//   가상 소멸자 없이 Base* 로 Derived 를 delete 하고 Derived 소멸자가 불리는지 출력해 보자.

#include <iostream>

int main()
{
    std::cout << "=== item07_virtual_destructor ===\n";
    // 여기에 실습 코드를 작성하세요.
}
