// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "webview/platform/linux/webview_linux.h"

namespace Webview::WebKitGTK {

[[nodiscard]] Available Availability();
[[nodiscard]] bool HiddenSupported();
[[nodiscard]] std::unique_ptr<Interface> CreateInstance(Config config);

int Exec();
void SetSocketPath(const std::string &socketPath);

} // namespace Webview::WebKitGTK
