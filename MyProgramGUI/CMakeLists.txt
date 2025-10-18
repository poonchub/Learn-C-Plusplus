cmake_minimum_required(VERSION 3.22)
project(MyProgramGUI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# เปิดใช้ระบบ moc/uic/rcc ของ Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# ค้นหา Qt6 Widgets module
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# เพิ่ม executable หลัก
add_executable(MyProgramGUI
    src/main.cpp
    src/MainWindow.cpp
    src/MainWindow.h
)

# ลิงก์ Qt Widgets เข้ากับ target
target_link_libraries(MyProgramGUI PRIVATE Qt6::Widgets)