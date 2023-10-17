if [ "$1" = "clean" ]
then
	rm -rf build
elif [ "$1" = "build" ]
then
	cmake -S . -B build &&
	cmake --build build
elif [ ! -d "build" ]
then
	cmake -S . -B build &&
	cmake --build build &&
	cd build && ctest --rerun-failed --output-on-failure
else
	cd build && ctest --rerun-failed --output-on-failure
fi