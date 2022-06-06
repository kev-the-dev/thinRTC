# thinRTC
A C++ WebRTC library, with minimal dependencies and a low footprint.

## Getting Started

* [Install Bazel](https://docs.bazel.build/versions/4.0.0/install.html)
* Run the demo `bazel run //demos:hello-world`

## Upgrading dependencies

thinRTC leverages several libraries, most of which do not provide bazel rules, so
bazel rules for these repos are included.


```
git diff origin/master  -p > ../thinRTC/third_party/amazon-kinesis-video-streams-webrtc-sdk-c/flag-no-signaling.diff
```