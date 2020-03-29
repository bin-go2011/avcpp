#include "Demuxer.h"

namespace av
{
    Demuxer::Demuxer(std::string fileName)
    {
		// open input file, and allocate format context
		int ret;
		if ((ret = avformat_open_input(&fmt_ctx_, fileName.c_str(), nullptr, nullptr)) < 0)
		{
		}

		// retrieve stream information
		if (ret = (avformat_find_stream_info(fmt_ctx_, NULL)) < 0)
		{
		}

    }
    
    Demuxer::~Demuxer()
    {
		if (fmt_ctx_ != nullptr)
		{
			avformat_close_input(&fmt_ctx_);
			fmt_ctx_ = nullptr;
		}
    }

} // namespace avcpp

