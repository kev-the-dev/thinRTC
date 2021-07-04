load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

http_archive(
     name = "amazon-kinesis-video-streams-pic",
     urls = ["https://github.com/awslabs/amazon-kinesis-video-streams-pic/archive/9ef93e5a41465ec0c847b8e1ee30ac9ba29fdb7f.zip"],
     sha256 = "09dd24911f99e1d4d65dd7c184e3d14b106244bc85bd1b123289699e9afcc308",
     build_file = "@//third_party/amazon-kinesis-video-streams-pic:BUILD.bazel",
     strip_prefix = "amazon-kinesis-video-streams-pic-9ef93e5a41465ec0c847b8e1ee30ac9ba29fdb7f",
)

http_archive(
     name = "amazon-kinesis-video-streams-producer-c",
     urls = ["https://github.com/awslabs/amazon-kinesis-video-streams-producer-c/archive/a8091d1a140fbdcb260ba3c8302aa2e4712d2d91.zip"],
     sha256 = "478b9163c4d6441742607b765d02c47e122e46f5a7a10c8d3d92b1d1facd6795",
     build_file = "@//third_party/amazon-kinesis-video-streams-producer-c:BUILD.bazel",
     strip_prefix = "amazon-kinesis-video-streams-producer-c-a8091d1a140fbdcb260ba3c8302aa2e4712d2d91",
)

http_archive(
     name = "amazon-kinesis-video-streams-webrtc-sdk-c",
     urls = ["https://github.com/awslabs/amazon-kinesis-video-streams-webrtc-sdk-c/archive/3af48f92b45d989b553ff17305a99f8e3dc40f7e.zip"],
     sha256 = "cda26dd280628e04cc57d96321fa25bb4ba64473d9979b5470a37f64bb3acc5a",
     build_file = "@//third_party/amazon-kinesis-video-streams-webrtc-sdk-c:BUILD.bazel",
     strip_prefix = "amazon-kinesis-video-streams-webrtc-sdk-c-3af48f92b45d989b553ff17305a99f8e3dc40f7e"
)

http_archive(
     name = "curl",
     urls = ["https://github.com/curl/curl/archive/6b951a6928811507d493303b2878e848c077b471.zip"],
     sha256 = "36c22fa62fed7807d489089fa24b05e01c48fcae3a85fa42e4f325e602f1a465",
     build_file = "@//third_party/curl:BUILD.bazel",
     strip_prefix = "curl-6b951a6928811507d493303b2878e848c077b471",
)


git_repository(
    name = "boringssl",
    commit = "38f2c0e84c67e778ce5db89b44660ea46d26f86c",
    remote = "https://boringssl.googlesource.com/boringssl",
)