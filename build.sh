source="main.cpp"



clear
echo COMPILING $source...
g++ -std=c++0x -o $source.app $source #-lSDL
	if ([ $? == 0 ]); then
./$source.app
#echo RUNNING UNIT TESTS...
#valgrind ./$unitFile.app #>& $outFile
	fi

<<MULTICOMMENT
MULTICOMMENT