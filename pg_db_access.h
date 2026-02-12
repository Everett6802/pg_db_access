#ifndef PG_DB_ACCESS_H
#define PG_DB_ACCESS_H

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Return values
static const unsigned short DB_ACCESS_SUCCESS = 0;

static const unsigned short DB_ACCESS_FAILURE_UNKNOWN = 1;
static const unsigned short DB_ACCESS_FAILURE_INVALID_ARGUMENT = 2;
static const unsigned short DB_ACCESS_FAILURE_INVALID_POINTER = 3;
static const unsigned short DB_ACCESS_FAILURE_INSUFFICIENT_MEMORY = 4;
static const unsigned short DB_ACCESS_FAILURE_SYSTEM_API = 5;
static const unsigned short DB_ACCESS_FAILURE_NOT_FOUND = 6;
static const unsigned short DB_ACCESS_FAILURE_OUT_OF_RANGE = 7;
static const unsigned short DB_ACCESS_FAILURE_INCORRECT_CONFIG = 8;
static const unsigned short DB_ACCESS_FAILURE_INCORRECT_OPERATION = 9;
static const unsigned short DB_ACCESS_FAILURE_LOAD_LIBRARY = 10;
static const unsigned short DB_ACCESS_FAILURE_EXPORT_API = 11;

// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// // Constants

// static const unsigned short DB_ACCESS_SEVIRITY_ERROR = 0;
// static const unsigned short DB_ACCESS_SEVIRITY_WARN = 1;
// static const unsigned short DB_ACCESS_SEVIRITY_INFO = 2;
// static const unsigned short DB_ACCESS_SEVIRITY_DEBUG = 3;
// static const unsigned short DB_ACCESS_SEVIRITY_LIST[] = {DB_ACCESS_SEVIRITY_ERROR, DB_ACCESS_SEVIRITY_WARN, DB_ACCESS_SEVIRITY_INFO, DB_ACCESS_SEVIRITY_DEBUG};
// static const unsigned short DB_ACCESS_SEVIRITY_LIST_SIZE = sizeof(DB_ACCESS_SEVIRITY_LIST) / sizeof(DB_ACCESS_SEVIRITY_LIST[0]);

// static const unsigned short DB_ACCESS_FACILITY_LOG = 0x1;
// static const unsigned short DB_ACCESS_FACILITY_COM = 0x1 << 1;
// static const unsigned short DB_ACCESS_FACILITY_SQL = 0x1 << 2;
// static const unsigned short DB_ACCESS_FACILITY_REMOTE = 0x1 << 3;
// static const unsigned short DB_ACCESS_FACILITY_SYSLOG = 0x1 << 4;
// static const unsigned short DB_ACCESS_FACILITY_ALL = (DB_ACCESS_FACILITY_LOG | DB_ACCESS_FACILITY_COM | DB_ACCESS_FACILITY_SQL | DB_ACCESS_FACILITY_REMOTE | DB_ACCESS_FACILITY_SYSLOG);
// // static const unsigned short DB_ACCESS_FACILITY_LIST[] = {DB_ACCESS_FACILITY_LOG, DB_ACCESS_FACILITY_COM, DB_ACCESS_FACILITY_SQL, DB_ACCESS_FACILITY_REMOTE, DB_ACCESS_FACILITY_SYSLOG, DB_ACCESS_FACILITY_ALL};
// // static const unsigned short DB_ACCESS_FACILITY_LIST_SIZE = sizeof(DB_ACCESS_FACILITY_LIST) / sizeof(DB_ACCESS_FACILITY_LIST[0]);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// APIs

extern "C"
{

unsigned short pg_db_access_initialize();
unsigned short pg_db_access_write();
unsigned short pg_db_access_read();
unsigned short pg_db_access_deinitialize();
}

typedef unsigned short (*FP_pg_db_access_initialize)();
typedef unsigned short (*FP_pg_db_access_write)();
typedef unsigned short (*FP_pg_db_access_read)();
typedef unsigned short (*FP_pg_db_access_deinitialize)();

#endif
