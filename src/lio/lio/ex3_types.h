/*
Copyright 2016 Vanderbilt University

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/** \file
* Autogenerated public API
*/

#ifndef ACCRE_LIO_EX3_TYPES_H_INCLUDED
#define ACCRE_LIO_EX3_TYPES_H_INCLUDED

#include <ibp/ibp.h>
#include <lio/lio_visibility.h>
#include <tbx/iniparse.h>

#ifdef __cplusplus
extern "C" {
#endif

// Typedefs
typedef struct exnode_exchange_t exnode_exchange_t;
typedef struct exnode_text_t exnode_text_t;
typedef int64_t ex_off_t;
typedef uint64_t ex_id_t;
typedef ibp_tbx_iovec_t ex_tbx_iovec_t;

// Functions

// Exported types. To be obscured
struct exnode_text_t {
    char *text;
    tbx_inip_file_t *fd;
};

struct exnode_exchange_t {
    int type;
    exnode_text_t text;
};

// Preprocessor constants
#define XIDT "%" PRIu64    //uint64_t
#define XOT  "%" PRId64    //int64_t
#define PXOT     PRId64    // Drop the % for formatting ..int64_t
#define XOTC PRId64

// Preproessor constants
#define ex_iovec_single(iov, oset, nbytes) (iov)->offset = oset; (iov)->len = nbytes

#ifdef __cplusplus
}
#endif

#endif /* ^ ACCRE_LIO_EX3_TYPES_H_INCLUDED ^ */ 
