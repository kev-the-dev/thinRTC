load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

http_archive(
     name = "amazon-kinesis-video-streams-pic",
     urls = ["https://github.com/awslabs/amazon-kinesis-video-streams-pic/archive/c8325887faa3a4a296c4367b281c778be69875b6.zip"],
     sha256 = "cce794ed0fed97534c7dcf4d5d9abac307eab3355a282518701c478f7bf7c66f",
     build_file = "@//third_party/amazon-kinesis-video-streams-pic:BUILD.bazel",
     strip_prefix = "amazon-kinesis-video-streams-pic-c8325887faa3a4a296c4367b281c778be69875b6",
)

http_archive(
     name = "amazon-kinesis-video-streams-producer-c",
     urls = ["https://github.com/awslabs/amazon-kinesis-video-streams-producer-c/archive/c7fce9e06021452ff3c42dc70c8360606b22ad53.zip"],
     sha256 = "a17ff981b75f02998518dac3056db2ac5dc1c275a0daa5fbe8300a8720093963",
     build_file = "@//third_party/amazon-kinesis-video-streams-producer-c:BUILD.bazel",
     strip_prefix = "amazon-kinesis-video-streams-producer-c-c7fce9e06021452ff3c42dc70c8360606b22ad53",
)

http_archive(
     name = "amazon-kinesis-video-streams-webrtc-sdk-c",
     urls = ["https://github.com/awslabs/amazon-kinesis-video-streams-webrtc-sdk-c/archive/ced19d02ed6fbc1e59dd63bc19d847c5ec5ebf47.zip"],
     sha256 = "afd1fa20a80884d8bd7150c3b1072e7038c1cec6f936b9a585a935c26890d6c8",
     build_file = "@//third_party/amazon-kinesis-video-streams-webrtc-sdk-c:BUILD.bazel",
     strip_prefix = "amazon-kinesis-video-streams-webrtc-sdk-c-ced19d02ed6fbc1e59dd63bc19d847c5ec5ebf47",
     patches = [
          "@//third_party/amazon-kinesis-video-streams-webrtc-sdk-c:flag-no-signaling.diff"
     ],
     patch_args = ["-p1"]
)

http_archive(
     name = "curl",
     urls = ["https://github.com/curl/curl/archive/6b951a6928811507d493303b2878e848c077b471.zip"],
     sha256 = "36c22fa62fed7807d489089fa24b05e01c48fcae3a85fa42e4f325e602f1a465",
     build_file = "@//third_party/curl:BUILD.bazel",
     strip_prefix = "curl-6b951a6928811507d493303b2878e848c077b471",
)

http_archive(
     name = "libsrtp",
     urls = ["https://github.com/cisco/libsrtp/archive/bd0f27ec0e299ad101a396dde3f7c90d48efc8fc.zip"],
     sha256 = "2d0cf55df09edbc7397f82577e50dfd61df7c1587504d95c4911da46b356a562",
     build_file = "@//third_party/libsrtp:BUILD.bazel",
     strip_prefix = "libsrtp-bd0f27ec0e299ad101a396dde3f7c90d48efc8fc",
)

http_archive(
     name = "usrsctp",
     urls = ["https://github.com/sctplab/usrsctp/archive/965b19a8636bbcd9617c1658cfe874a10cedb15d.zip"],
     sha256 = "e51c54c044ee14997ec935c0bf64e12c65c19cb8dc201eb02b155d3ce116f501",
     build_file = "@//third_party/usrsctp:BUILD.bazel",
     strip_prefix = "usrsctp-965b19a8636bbcd9617c1658cfe874a10cedb15d",
)


# Upgrading: use latest commit from https://github.com/google/boringssl/commits/master-with-bazel
git_repository(
    name = "boringssl",
    commit = "1f849f2accd2b12c53fd9963f957f2acb80a9d2d",
    remote = "https://boringssl.googlesource.com/boringssl",
)