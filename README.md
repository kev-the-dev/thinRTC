# thinRTC

*webrtc + Bazel + C++*

A C++ WebRTC library, with minimal dependencies and a low footprint.

## Getting Started

* [Install Bazel](https://docs.bazel.build/versions/4.0.0/install.html)
* Run the demo `bazel run //demos:hello-world`

## Status

All the dependencies building (including the c webrtc library which will
be wrapped). Starting to implement the PeerConnection class.

## Dependencies

thinRTC leverages several libraries, most of which do not provide bazel rules, so
bazel rules for these repos are included.


### Patches

In some instances, the third party libraries are patched. To create, update the patch:

* Checkout the third party repo
* Make/merge/update your change
* Upload change to a git branch
* Create a PR if this is appropriate for a contribution
* `git diff origin/master  -p > <thinRTC>/third_party/<library>/<purpose>.diff`
* Update WORKSPACE file for patch, including a description of the patch and link to git commit / PR
