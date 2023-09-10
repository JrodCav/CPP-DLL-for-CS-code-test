//DatabaseLink.h : Specification File --> Declares class for the DLL

/*
#ifndef _DEFINED_DATABASELINK
#define _DEFINED_DATABASELINK

#if _MSC_VER > 1000 
#pragma once 
#endif 

#ifdef __cplusplus 
extern "C" { 
#endif // __cplusplus  

#ifdef _COMPILING_DATABASELINK
#define DBLINK_API __declspec(dllexport) 
#else 
#define DBLINK_API __declspec(dllimport) 
#endif // _COMPILING_DATABASELINK

    //DBLINK_API linkagetype resulttype name(parameters); 
    DBLINK_API class Connection {
    private:
        char* database_type;
        char* src_location;
        char* password;

    public:
        Connection(char*);
        Connection(char*, char*);
        Connection(char*, char*, char*);

        char* getType();
        char* getSource();
        void setSource(char*);
        char* getPassword();
        void setPassword(char*);
    };
    // ... more declarations as needed  
#undef DBLINK_API 

#ifdef __cplusplus 
} 
#endif // __cplusplus  
#endif // _DEFINED_DATABASELINK
*/

#ifndef _DEFINED_DATABASELINK
#define _DEFINED_DATABASELINK

    class Connection {
    private:
        char* database_type;
        char* src_location;
        char* password;

    public:
        Connection(char*);
        Connection(char*, char*);
        Connection(char*, char*, char*);

        char* getType();
        char* getSource();
        void setSource(char*);
        char* getPassword();
        void setPassword(char*);
    };

    extern "C" __declspec(dllexport) void* Create1(char* x) {
        return (void*) new Connection(x);
    }
    extern "C" __declspec(dllexport) void* Create2(char* x, char* y) {
        return (void*) new Connection(x, y);
    }

    extern "C" __declspec(dllexport) void* Create3(char* x, char* y, char* z) {
        return (void*) new Connection(x, y, z);
    }

    extern "C" __declspec(dllexport) void* getType(Connection * c) {
        return c->getType();
    }

    extern "C" __declspec(dllexport) void* getSource(Connection * c) {
        return c->getSource();
    }

    extern "C" __declspec(dllexport) void setSource(Connection * c, char* x) {
        return c->setSource(x);
    }

    extern "C" __declspec(dllexport) void* getPassword(Connection * c) {
        return c->getPassword();
    }

    extern "C" __declspec(dllexport) void setPassword(Connection * c, char* x) {
        return c->setPassword(x);
    }

#endif