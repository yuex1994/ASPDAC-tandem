for i in $(seq 0.05 0.1 0.96)
do 
    ./tandem-riscv-exe ../tv.txt $i >> ../result; 
done
