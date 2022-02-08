#!/bin/sh

test_substitution()
{
	echo "'$1|$2|$3'"
	./mysed $1 $2 $3
	sed "s/$2/$3/g" $1 > $1.sed
	diff $1.sed $1.replace
	rm $1.sed $1.replace
}

#test_substitution lorem_ipsum $1 $2
test_substitution lorem_ipsum olo olo
test_substitution lorem_ipsum olo o
test_substitution lorem_ipsum o oo
test_substitution lorem_ipsum r rr
test_substitution lorem_ipsum rr r
test_substitution small ol l

