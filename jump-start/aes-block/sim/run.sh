for i in $(seq 0.05 0.1 0.96)
do 
    ./tandem-AES-exe ../tv_verilog_only.csv $i >> ../result; 
done