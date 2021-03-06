// Copyright (c) 2022 Kevin Allen
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <memory>

#include "peer_connection/peer_connection.hh"
#include "com/amazonaws/kinesis/video/webrtcclient/Include.h"

namespace {

struct RtcPeerConnectionDeleter {
    void operator()(RtcPeerConnection* connection) {

    }
};

using RtcPeerConnectionUniquePtr = std::unique_ptr<RtcPeerConnection, RtcPeerConnectionDeleter>;

RtcPeerConnectionUniquePtr newRtcPeerConnection(PRtcConfiguration config) {
    RtcPeerConnection* peer = nullptr;
    createPeerConnection(config, &peer);
    return RtcPeerConnectionUniquePtr(peer);
}

}

namespace thinrtc {

class PeerConnectionImpl {
public:
    PeerConnectionImpl() {
        RtcConfiguration config;
        rtc_peer_connection_ = newRtcPeerConnection(&config);
    }
private:
    RtcPeerConnectionUniquePtr rtc_peer_connection_;
};

PeerConnection::PeerConnection() {
    impl_ = std::unique_ptr<PeerConnectionImpl>(new PeerConnectionImpl{});
}

PeerConnection::~PeerConnection() = default;

}