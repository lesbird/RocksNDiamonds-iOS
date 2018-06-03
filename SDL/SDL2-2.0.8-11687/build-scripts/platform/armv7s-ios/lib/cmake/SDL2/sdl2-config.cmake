# sdl2 cmake project-config input for ./configure scripts

set(prefix "/Users/lesbird/Perforce/Les-MacBook-Pro/depot/RocksDiamonds4/SDL/SDL2-2.0.8-11687/build-scripts/platform/armv7s-ios") 
set(exec_prefix "${prefix}")
set(libdir "${exec_prefix}/lib")
set(SDL2_PREFIX "/Users/lesbird/Perforce/Les-MacBook-Pro/depot/RocksDiamonds4/SDL/SDL2-2.0.8-11687/build-scripts/platform/armv7s-ios")
set(SDL2_EXEC_PREFIX "/Users/lesbird/Perforce/Les-MacBook-Pro/depot/RocksDiamonds4/SDL/SDL2-2.0.8-11687/build-scripts/platform/armv7s-ios")
set(SDL2_LIBDIR "${exec_prefix}/lib")
set(SDL2_INCLUDE_DIRS "${prefix}/include/SDL2")
set(SDL2_LIBRARIES "-L${SDL2_LIBDIR}  -lSDL2 ")
string(STRIP "${SDL2_LIBRARIES}" SDL2_LIBRARIES)
