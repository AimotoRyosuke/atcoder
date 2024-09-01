# ex: make start No=337
start:
	./script/start.sh $(q)

# ex: make run Q=337_A.cpp
run:
	./script/run.sh $(q).cpp

# ex: make exam Q=370
exam:
	./script/exam.sh $(q)
