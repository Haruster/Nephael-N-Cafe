#ifndef XDEBUG_STACK_H
#define XDEBUG_STACK_H

#include "xdebug_str.h"

#define XDEBUG_STACK_NO_DESC 0x01

int xdebug_function_name_is_closure(char *fname);
char* xdebug_wrap_closure_location_around_function_name(zend_op_array *opa, char *fname);
void xdebug_func_dtor_by_ref(xdebug_func *elem); /* TODO: Remove this API */
void xdebug_func_dtor(xdebug_func *elem);
void xdebug_build_fname(xdebug_func *tmp, zend_execute_data *edata TSRMLS_DC);
function_stack_entry *xdebug_add_stack_frame(zend_execute_data *zdata, zend_op_array *op_array, int type TSRMLS_DC);
void xdebug_append_error_head(xdebug_str *str, int html, const char *error_type_str TSRMLS_DC);
void xdebug_append_error_description(xdebug_str *str, int html, const char *error_type_str, const char *buffer, const char *error_filename, const int error_lineno TSRMLS_DC);
void xdebug_append_printable_stack(xdebug_str *str, int html TSRMLS_DC);
void xdebug_append_error_footer(xdebug_str *str, int html TSRMLS_DC);
void xdebug_log_stack(const char *error_type_str, char *buffer, const char *error_filename, const int error_lineno TSRMLS_DC);
char *xdebug_strip_php_stack_trace(char *buffer);
char *xdebug_handle_stack_trace(int type, char *error_type_str, const char *error_filename, const uint error_lineno, char *buffer TSRMLS_DC);

#endif
