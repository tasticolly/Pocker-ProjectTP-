project(library)
set(SOURCE_EXE card.cpp player.cpp state.cpp strategy.cpp )
set(SOURCE_LIB ../include/card.h ../include/player.h ../include/state.h ../include/strategy.h)
add_library(libr SHARED ${SOURCE_LIB} ${SOURCE_EXE})
