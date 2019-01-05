gcc $1".c" -o $1
strace -f -e trace=process -s 1024 -o $1".pid"  "./"$1
strace -f -tt -e trace=process -s 1024 -o $1".time"  "./"$1
./strace-process-tree $1".pid"
./strace-graph $1".time"


