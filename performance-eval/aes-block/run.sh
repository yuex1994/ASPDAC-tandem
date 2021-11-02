AES_DIR=$1

cp $AES_DIR/s1/app/main.cc $AES_DIR/build/s1/app/main.cc
cp $AES_DIR/s1/extern/uninterpreted_func.cc $AES_DIR/build/s1/src/uninterpreted_func.cc
cp $AES_DIR/s1/tv_verilog_only.csv $AES_DIR/build/s1/tv.csv

cd $AES_DIR/build/s1/
mkdir build
cd build
cmake ..
make -j$(nproc)
./tandem-AES-exe ./tv.csv
