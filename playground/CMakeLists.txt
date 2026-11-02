# 연습장: 항목과 상관없이 자유롭게 끄적이는 곳
#
#   main.cpp    -> playground      (늘 쓰는 이면지)
#   <이름>.cpp  -> pg_<이름>       (저장해 둔 실험, 파일마다 실행 파일 하나)
#
# 새 .cpp 를 추가하면 CMake 가 다시 구성될 때 자동으로 실행 파일이 생긴다.
# 각 파일은 독립 프로그램이므로 저마다 main() 이 있어야 한다.

file(GLOB playground_sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(source ${playground_sources})
    get_filename_component(name ${source} NAME_WE)
    if(name STREQUAL "main")
        set(target playground)
    else()
        set(target pg_${name})
    endif()

    add_executable(${target} ${source})
    set_target_properties(${target} PROPERTIES FOLDER playground)
    apply_study_options(${target})
endforeach()
