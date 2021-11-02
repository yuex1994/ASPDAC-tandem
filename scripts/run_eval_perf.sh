EVAL_PERF_DIR=$1

cd $EVAL_PERF_DIR/aes-block
mkdir $EVAL_PERF_DIR/aes-block/build
cd build
cmake ..
make -j$(nproc)
./AESTandemGenerator

source $EVAL_PERF_DIR/aes-block/run.sh $EVAL_PERF_DIR/aes-block

