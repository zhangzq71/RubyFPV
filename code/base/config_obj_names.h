#pragma once

#define FIFO_RUBY_CAMERA1 "/tmp/ruby/fifocam1"
#define FIFO_RUBY_AUDIO1 "/tmp/ruby/fifoaudio1"

// Must be same name used by video player when it's using fifo pipes
#define FIFO_RUBY_STATION_VIDEO_STREAM "/tmp/ruby/fifovidstream"
#define FIFO_RUBY_STATION_ETH_VIDEO_STREAM "/tmp/ruby/fifovidstream_eth"

#define SEMAPHORE_RESTART_VIDEO_PLAYER "RUBY_SEM_RESTART_VIDEO_PLAYER"
#define SEMAPHORE_START_VIDEO_RECORD "RUBY_SEM_START_VIDEO_REC"
#define SEMAPHORE_STOP_VIDEO_RECORD "RUBY_SEM_STOP_VIDEO_REC"

#define SEMAPHORE_STOP_RX_RC "RUBY_SEM_STOP_RX_RC"
