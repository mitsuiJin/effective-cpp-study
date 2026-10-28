// item06 : 원치 않는 자동 생성 함수는 막아두자
//
// [책의 방식 (C++03)]
//   복사 생성자/대입 연산자를 private으로 선언만 하고 정의하지 않는다 (Uncopyable 기반 클래스).
// [모던 C++]
//   = delete 로 명시적으로 삭제한다. 에러가 링크 시점이 아니라 컴파일 시점에 난다.
// [실험 아이디어]
//   두 방식으로 각각 복사를 시도해 보고 컴파일러 에러 메시지를 비교해 보자.

#include <iostream>

int main()
{
    std::cout << "=== item06_disallow_generated_functions ===\n";
    // 여기에 실습 코드를 작성하세요.
}
