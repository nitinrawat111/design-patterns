cmake_minimum_required(VERSION 3.10)

project(Command)
add_executable(
	${PROJECT_NAME}
	AppLogic.h
	Command.h
	GUI.h
	main.cpp
)