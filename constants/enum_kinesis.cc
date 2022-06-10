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

#include "constants/enum_kinesis.hh"
#include "com/amazonaws/kinesis/video/webrtcclient/Include.h"

namespace thinrtc {

RtcPeerConnectionState from_kinesis(int state) {
    switch (state) {
        case RTC_PEER_CONNECTION_STATE_NONE: {
            return RtcPeerConnectionState::NONE;
        }
        case RTC_PEER_CONNECTION_STATE_NEW: {
            return RtcPeerConnectionState::NEW;
        }
        case RTC_PEER_CONNECTION_STATE_CONNECTING: {
            return RtcPeerConnectionState::CONNECTING;
        }
        case RTC_PEER_CONNECTION_STATE_CONNECTED: {
            return RtcPeerConnectionState::CONNECTED;
        }
        case RTC_PEER_CONNECTION_STATE_DISCONNECTED: {
            return RtcPeerConnectionState::DISCONNECTED;
        }
        case RTC_PEER_CONNECTION_STATE_FAILED: {
            return RtcPeerConnectionState::FAILED;
        }
        case RTC_PEER_CONNECTION_STATE_CLOSED: {
            return RtcPeerConnectionState::CLOSED;
        }
    }
    return RtcPeerConnectionState::INVALID;
}
int to_kinesis(RtcPeerConnectionState state) {
    switch (state) {
        case RtcPeerConnectionState::INVALID: {
            return 0;
        }
        case RtcPeerConnectionState::NONE: {
            return RTC_PEER_CONNECTION_STATE_NONE;
        }
        case RtcPeerConnectionState::NEW: {
            return RTC_PEER_CONNECTION_STATE_NEW;
        }
        case RtcPeerConnectionState::CONNECTING: {
            return RTC_PEER_CONNECTION_STATE_CONNECTING;
        }
        case RtcPeerConnectionState::CONNECTED: {
            return RTC_PEER_CONNECTION_STATE_CONNECTED;
        }
        case RtcPeerConnectionState::DISCONNECTED: {
            return RTC_PEER_CONNECTION_STATE_DISCONNECTED;
        }
        case RtcPeerConnectionState::FAILED: {
            return RTC_PEER_CONNECTION_STATE_FAILED;
        }
        case RtcPeerConnectionState::CLOSED: {
            return RTC_PEER_CONNECTION_STATE_CLOSED;
        }
    }
    return 0;
}

}