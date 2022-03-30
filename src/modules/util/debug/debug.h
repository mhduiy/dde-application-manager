/*
 * Copyright (c) 2020-2021. Uniontech Software Ltd. All rights reserved.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef LINGLONG_BOX_SRC_UTIL_DEBUG_DEBUG_H_
#define LINGLONG_BOX_SRC_UTIL_DEBUG_DEBUG_H_

#include <string>

namespace linglong {

#define DUMP_FILESYSTEM(path) DumpFilesystem(path, __FUNCTION__, __LINE__)

#define DUMP_FILE_INFO(path) DumpFileInfo1(path, __FUNCTION__, __LINE__)

void DumpIDMap();

void DumpUidGidGroup();

void DumpFilesystem(const std::string &path, const char *func = nullptr, int line = -1);

void DumpFileInfo(const std::string &path);

void DumpFileInfo1(const std::string &path, const char *func = nullptr, int line = -1);

} // namespace linglong

#endif /* LINGLONG_BOX_SRC_UTIL_DEBUG_DEBUG_H_ */
