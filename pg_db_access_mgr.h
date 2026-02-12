#ifndef PG_DB_ACCESS_MGR_H
#define PG_DB_ACCESS_MGR_H

#include <assert.h>
#include <map>
#include <string>
#include <stdexcept>
#include "common.h"
#include "pg_db_access.h"
// #include "msg_dumper_timer_thread.h"


class PgDBAccessMgr
{
private:

public:
	PgDBAccessMgr();
	~PgDBAccessMgr();

	unsigned short initialize();
	unsigned short write();
	unsigned short read();
	unsigned short deinitialize();
};

#endif
