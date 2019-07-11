# Main source file
SET(MAINSRC main.cpp)

ADD_EXECUTABLE(app ${MAINSRC})

TARGET_LINK_LIBRARIES(app LINK_PUBLIC libname)
