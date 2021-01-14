../cgen test.seal
gcc test.seal -no-pie -o main
../main
