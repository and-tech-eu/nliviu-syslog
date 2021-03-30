#pragma once

#include "common/platform.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void mgos_syslog_log_error(const char *app_name, const char *fmt, ...) PRINTF_LIKE(2, 3);
void mgos_syslog_log_warn(const char *app_name, const char *fmt, ...) PRINTF_LIKE(2, 3);
void mgos_syslog_log_info(const char *app_name, const char *fmt, ...) PRINTF_LIKE(2, 3);
void mgos_syslog_log_notice(const char *app_name, const char *fmt, ...) PRINTF_LIKE(2, 3);
void mgos_syslog_log_debug(const char *app_name, const char *fmt, ...) PRINTF_LIKE(2, 3);

#ifdef __cplusplus
}
#endif /* __cplusplus */
