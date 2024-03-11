cmake_minimum_required(VERSION 3.10)

project(Factory)
add_executable(
	${PROJECT_NAME}
	shapeClasses.h
	shapeFactory.h
	main.cpp
)