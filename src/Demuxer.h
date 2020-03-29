#ifndef DEMUXER_H
#define DEMUXER_H

#include <string>

extern "C" {
#include <libavformat/avformat.h>
}

namespace av
{
    class Demuxer
    {
    private:
        AVFormatContext* fmt_ctx_ = nullptr;
    public:
        Demuxer(std::string fileName);
        ~Demuxer();
    };
    
    
} // namespace avcpp

#endif