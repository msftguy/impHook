/*
 *  impHookApi.h
 *  impHook
 *
 *  Created by msftguy on 6/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef __IMPHOOK_API
#define __IMPHOOK_API

#include <mach-o/loader.h>


#if __LP64__
typedef struct mach_header_64		macho_header;
#else
typedef struct mach_header		macho_header;
#endif

#ifdef __cplusplus
extern "C" {
#endif
	extern int import_api_verbose;
	
uintptr_t* get_import_ptr(const macho_header* mh, const char* importName);

#ifdef __cplusplus
}
#endif

#endif // __IMPHOOK_API
