#!/bin/bash

# make sure to fail early if any single test exits with non-zero
set -e

./thing blahblah
./thing blahblahblah
./thing blahblahblah 1234


# we know we are returning non-zero and it's ok for this one test
set +e
./thing

# specifically we want to enforce error code 18 in this case
if [ $? -ne 18 ]
then
	echo "we are about to exit 2 because of exit code $?"
	exit 2
fi

# re-enable strict error codes (all commands must exit with 0)
set -e

for x in `find ./queue/ -type f`;
do
	echo "testing fuzzer generated file $x";
	./thing "$x";
done

