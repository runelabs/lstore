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

#ifndef ACCRE_GOP_MQ_ONGOING_H_INCLUDED
#define ACCRE_GOP_MQ_ONGOING_H_INCLUDED

#include <gop/visibility.h>
#include <gop/mq.h>
#include <gop/types.h>

#ifdef __cplusplus
extern "C" {
#endif

// Typedefs
typedef struct mq_ongoing_host_t mq_ongoing_host_t;
typedef struct mq_ongoing_object_t mq_ongoing_object_t;
typedef struct mq_ongoing_t mq_ongoing_t;
typedef struct ongoing_hb_t ongoing_hb_t;
typedef struct ongoing_table_t ongoing_table_t;
typedef op_generic_t *(mq_ongoing_fail_t)(void *arg, void *handle);

// Functions
GOP_API mq_ongoing_object_t *gop_mq_ongoing_add(mq_ongoing_t *mqon, int auto_clean, char *id, int id_len, void *handle, mq_ongoing_fail_t *on_fail, void *on_fail_arg);
GOP_API mq_ongoing_t *gop_mq_ongoing_create(mq_context_t *mqc, mq_portal_t *server_portal, int check_interval, int mode);
GOP_API void gop_mq_ongoing_destroy(mq_ongoing_t *mqon);
GOP_API void *gop_mq_ongoing_get(mq_ongoing_t *mqon, char *id, int id_len, intptr_t key);
GOP_API void gop_mq_ongoing_host_dec(mq_ongoing_t *on, mq_msg_t *remote_host, char *id, int id_len);
GOP_API void gop_mq_ongoing_host_inc(mq_ongoing_t *on, mq_msg_t *remote_host, char *id, int id_len, int heartbeat);
GOP_API void gop_mq_ongoing_release(mq_ongoing_t *mqon, char *id, int id_len, intptr_t key);
GOP_API void *gop_mq_ongoing_remove(mq_ongoing_t *mqon, char *id, int id_len, intptr_t key);

// Preprocessor constants

// FIXME: Don't open-code this, perform the actual strlen
#define ONGOING_KEY            "ongoing"
#define ONGOING_SIZE           7

#define ONGOING_SERVER 1
#define ONGOING_CLIENT 2

// Exported types. To be obscured
struct mq_ongoing_object_t {
    int type;
    int count;
    bool auto_clean;
    void *handle;
    intptr_t key;
    mq_ongoing_fail_t *on_fail;
    void *on_fail_arg;
};



#ifdef __cplusplus
}
#endif

#endif /* ^ ACCRE_GOP_MQ_ONGOING_H_INCLUDED ^ */ 
