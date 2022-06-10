# Copyright (c) 2022 Kevin Allen
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

load("@rules_cc//cc:defs.bzl", "cc_library")
load("@bazel_skylib//lib:paths.bzl", "paths")

def kinesis_library(name, path, visibility=["//visibility:public"], deps=[]):
    srcs_c = paths.join(path, "src/**/*.c")
    srcs_tmpl = paths.join(path, "src/**/*.h")
    hdrs_path = paths.join(path, "include")
    hdrs_h = paths.join(hdrs_path, "**/*.h")
    cc_library(
        name = name,
        srcs = native.glob([
            srcs_c,
        ]),
        hdrs = native.glob([
            hdrs_h,
        ]),
        textual_hdrs = native.glob([
            srcs_tmpl, 
        ]),
        deps = deps,
        strip_include_prefix = hdrs_path,
        visibility = visibility,
    )