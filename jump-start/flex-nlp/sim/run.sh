for i in $(seq 0.05 0.1 0.96)
do 
    ./sim_test $i >> ../result; 
done
