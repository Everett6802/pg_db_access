#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
// #include "common.h"
#include "pg_db_access.h"
#include "pg_db_access_mgr.h"


static PgDBAccessMgr pg_db_access_mgr;
static unsigned short last_error = DB_ACCESS_SUCCESS;

unsigned short pg_db_access_initialize()
{
//	WRITE_DEBUG_FORMAT_SYSLOG(pg_db_access_STRING_SIZE, "%s() called", __func__);
	fprintf(stderr, "%s() called\n", __func__);
	last_error = pg_db_access_mgr.initialize();
	return last_error;
}

unsigned short pg_db_access_write()
{
//	WRITE_DEBUG_FORMAT_SYSLOG(pg_db_access_STRING_SIZE, "%s() called", __func__);
	fprintf(stderr, "%s() called\n", __func__);
	last_error = pg_db_access_mgr.write();
	return last_error;
}

unsigned short pg_db_access_read()
{
//	WRITE_DEBUG_FORMAT_SYSLOG(pg_db_access_STRING_SIZE, "%s() called", __func__);
	fprintf(stderr, "%s() called\n", __func__);
	last_error = pg_db_access_mgr.read();
	return last_error;
}

unsigned short pg_db_access_deinitialize()
{
//	WRITE_DEBUG_FORMAT_SYSLOG(pg_db_access_STRING_SIZE, "%s() called", __func__);
	fprintf(stderr, "%s() called\n", __func__);
	last_error = pg_db_access_mgr.deinitialize();
	return last_error;
}

const char* pg_db_access_get_error_description()
{
	return error_description[last_error];
}
