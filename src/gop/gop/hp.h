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

#ifndef ACCRE_GOP_HOST_PORTAL_H_INCLUDED
#define ACCRE_GOP_HOST_PORTAL_H_INCLUDED

#include <apr_time.h>
#include <gop/visibility.h>
#include <gop/types.h>
#include <stdbool.h>
#include <tbx/network.h>

#ifdef __cplusplus
extern "C" {
#endif

// Typedefs
typedef struct gop_host_connection_t gop_host_connection_t;
typedef struct gop_host_portal_t gop_host_portal_t;

// Functions
GOP_API void gop_change_all_hportal_conn(gop_portal_context_t *hpc, int min_conn, int max_conn, apr_time_t dt_connect);
GOP_API gop_portal_context_t *gop_hp_context_create(gop_portal_fn_t *hpi);
GOP_API void gop_hp_context_destroy(gop_portal_context_t *hpc);
GOP_API int gop_hp_direct_submit(gop_portal_context_t *hpc, gop_op_generic_t *op);
GOP_API int gop_hp_que_op_submit(gop_portal_context_t *hpc, gop_op_generic_t *op);
GOP_API void gop_hp_shutdown(gop_portal_context_t *hpc);
GOP_API int gop_hp_submit(gop_host_portal_t *dp, gop_op_generic_t *op, bool addtotop, bool release_master);

// Preprocessor constants
#define HP_HOSTPORT_SEPARATOR "|"

// Globals
extern tbx_ns_timeout_t global_dt;

#ifdef __cplusplus
}
#endif

#endif /* ^ ACCRE_GOP_HOST_PORTAL_H_INCLUDED ^ */ 
