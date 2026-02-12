CC := g++

CXXFLAGS := -g -Wall -fPIC -std=c++0x
#INCLUDE_PATH := ../include

SOURCES := common.cpp pg_db_access.cpp pg_db_access_mgr.cpp
OBJS := $(SOURCES:.cpp=.o)
LIB_PG_DB_ACCESS_HEADER := pg_db_access.h
# CONF_FOLDER := conf
# TEST_FOLDER := test

OUTPUT := libpg_db_access.so

build: $(OUTPUT)
#	cp $(OUTPUT) $(TEST_FOLDER)
#	cp $(LIB_PG_DB_ACCESS_HEADER) $(TEST_FOLDER)
# 	cp -r $(CONF_FOLDER) $(TEST_FOLDER)

$(OUTPUT): $(OBJS)
#	$(CC) $(CXXFLAGS) -shared -o $@ $^ -lpthread -L/usr/lib64 -lmysqlclient
	$(CC) $(CXXFLAGS) -shared -o $@ $^ -lpthread -L/usr/lib64

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) 2> /dev/null
	rm -f $(OUTPUT) 2> /dev/null
# 	rm -f $(TEST_FOLDER)/$(OUTPUT) 2> /dev/null
# 	rm -f $(TEST_FOLDER)/$(LIB_PG_DB_ACCESS_HEADER) 2> /dev/null
# 	rm -rf $(TEST_FOLDER)/$(CONF_FOLDER) 2> /dev/null
