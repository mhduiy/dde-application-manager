/*
 * Copyright (c) 2020-2021. Uniontech Software Ltd. All rights reserved.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef LINGLONG_BOX_SRC_UTIL_PLATFORM_H_
#define LINGLONG_BOX_SRC_UTIL_PLATFORM_H_

#include "common.h"
#include <optional>

#define tl std

namespace linglong {

namespace util {

int PlatformClone(int (*callback)(void *), int flags, void *arg, ...);

int Exec(const util::str_vec &args, tl::optional<std::vector<std::string>> env_list);

} // namespace util

} // namespace linglong

#endif /* LINGLONG_BOX_SRC_UTIL_PLATFORM_H_ */
