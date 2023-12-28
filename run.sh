[[ -d build ]] && rm -rf build
meson setup build
ninja -C build
GI_TYPELIB_PATH=$PWD/build LD_LIBRARY_PATH=$PWD/build python3 test.py