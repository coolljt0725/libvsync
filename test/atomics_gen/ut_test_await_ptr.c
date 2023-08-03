/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2023. All rights reserved.
 * SPDX-License-Identifier: MIT
 * Warning: File generated by tmpl; DO NOT EDIT.
 */
#include <vsync/atomic.h>
#include <vsync/common/assert.h>
#include <vsync/common/dbg.h>
#include <test/thread_launcher.h>
/*****************************************************************************
 * UnitTest: vatomicptr_await_eq
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq(void)
{
	vatomicptr_t obj = {NULL};
	void *val		 = vatomicptr_await_eq(&obj, NULL);
	ASSERT(val == NULL);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq(void)
{
	vatomicptr_t obj = {NULL};
	void *val		 = vatomicptr_await_neq(&obj, (void *)VUINTPTR_MAX);
	ASSERT(val == NULL);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_eq_acq
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq_acq(void)
{
	vatomicptr_t obj = {NULL};
	void *val		 = vatomicptr_await_eq_acq(&obj, NULL);
	ASSERT(val == NULL);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq_acq
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq_acq(void)
{
	vatomicptr_t obj = {NULL};
	void *val		 = vatomicptr_await_neq_acq(&obj, (void *)VUINTPTR_MAX);
	ASSERT(val == NULL);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_eq_rlx
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq_rlx(void)
{
	vatomicptr_t obj = {NULL};
	void *val		 = vatomicptr_await_eq_rlx(&obj, NULL);
	ASSERT(val == NULL);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq_rlx
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq_rlx(void)
{
	vatomicptr_t obj = {NULL};
	void *val		 = vatomicptr_await_neq_rlx(&obj, (void *)VUINTPTR_MAX);
	ASSERT(val == NULL);
	V_UNUSED(val);
}

/*****************************************************************************
 * UnitTest: vatomicptr_await_eq_set
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq_set(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val		 = vatomicptr_await_eq_set(&obj, NULL, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq_set
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq_set(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val = vatomicptr_await_neq_set(&obj, (void *)VUINTPTR_MAX, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_eq_set_rel
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq_set_rel(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val		 = vatomicptr_await_eq_set_rel(&obj, NULL, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq_set_rel
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq_set_rel(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val = vatomicptr_await_neq_set_rel(&obj, (void *)VUINTPTR_MAX, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_eq_set_acq
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq_set_acq(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val		 = vatomicptr_await_eq_set_acq(&obj, NULL, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq_set_acq
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq_set_acq(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val = vatomicptr_await_neq_set_acq(&obj, (void *)VUINTPTR_MAX, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_eq_set_rlx
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_eq_set_rlx(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val		 = vatomicptr_await_eq_set_rlx(&obj, NULL, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}
/*****************************************************************************
 * UnitTest: vatomicptr_await_neq_set_rlx
 *****************************************************************************/
static inline void
ut_atomic_ptr_await_neq_set_rlx(void)
{
	vatomicptr_t obj = {NULL};
	void *n_val		 = (void *)0xFF;
	void *val = vatomicptr_await_neq_set_rlx(&obj, (void *)VUINTPTR_MAX, n_val);
	ASSERT(val == NULL);
	val = vatomicptr_read(&obj);
	ASSERT(val == n_val);
	V_UNUSED(val);
}

/*****************************************************************************
 * Entry point
 *****************************************************************************/
int
main(void)
{
	ut_atomic_ptr_await_eq();
	ut_atomic_ptr_await_neq();
	ut_atomic_ptr_await_eq_acq();
	ut_atomic_ptr_await_neq_acq();
	ut_atomic_ptr_await_eq_rlx();
	ut_atomic_ptr_await_neq_rlx();

	ut_atomic_ptr_await_eq_set();
	ut_atomic_ptr_await_neq_set();
	ut_atomic_ptr_await_eq_set_rel();
	ut_atomic_ptr_await_neq_set_rel();
	ut_atomic_ptr_await_eq_set_acq();
	ut_atomic_ptr_await_neq_set_acq();
	ut_atomic_ptr_await_eq_set_rlx();
	ut_atomic_ptr_await_neq_set_rlx();

	return 0;
}