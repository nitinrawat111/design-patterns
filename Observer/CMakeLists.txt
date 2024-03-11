cmake_minimum_required(VERSION 3.10)

project(Observer)
add_executable(
	${PROJECT_NAME}
	listeners.h
	manager.h
	main.cpp
)