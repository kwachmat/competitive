# file for compilation log
LOG_FILE="compile_log.tmp"

# compile solution
g++ $1.cpp -o $1 -Wall -O2 -pedantic -std=c++11 &> $LOG_FILE

if [[ -s $LOG_FILE ]] ; then
	cat $LOG_FILE
else
	echo "Compiled successfully, running..."
	echo
	if [ -z "$2" ] ; then
		./$1		# no input file specified
	else
		./$1 < $2 	# passing input file
	fi
	echo
fi

# delete log
rm $LOG_FILE
