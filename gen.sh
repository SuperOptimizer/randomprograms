for i in {1..1000000}
do
   mkdir -p out/$i
   ./yarpgen --std=c -o out/${i}
done
