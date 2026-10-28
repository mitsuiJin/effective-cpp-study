// item15 : 원시 자원에 접근할 방법을 열어두자
//
// [책의 방식 (C++03)]
//   명시적 get() 함수 또는 암시적 변환 연산자를 제공한다.
// [모던 C++]
//   unique_ptr::get() 처럼 명시적 접근이 기본. 변환이 필요하면 explicit operator 를 쓴다.
// [실험 아이디어]
//   암시적 변환 연산자를 넣었을 때 의도치 않은 변환이 일어나는 예를 만들어 보자.

#include <iostream>

int main()
{
    std::cout << "=== item15_raw_resource_access ===\n";
    // 여기에 실습 코드를 작성하세요.
}
