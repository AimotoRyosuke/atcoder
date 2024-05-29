# ex: make start No=337
start:
	./script/start.sh $(Q)

# ex: make run Q=337_A.cpp
run:
	./script/run.sh $(Q).cpp
