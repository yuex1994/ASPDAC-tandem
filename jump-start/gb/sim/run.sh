for i in $(seq 0.05 0.1 0.96)
do 
    ./tandem-GBHigh-exe ../tv_i.csv ../tv_v.csv $i >> ../result; 
done