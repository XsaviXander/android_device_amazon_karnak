#include <ui/GraphicBuffer.h>
#include <ui/GraphicBufferMapper.h>

using namespace android;
extern "C" status_t _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPvPiS9_(
		buffer_handle_t handle, uint32_t usage, const Rect& bounds,
                void** vaddr, int32_t* outBytesPerPixel,
                int32_t* outBytesPerStride);

extern "C" status_t _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(
	buffer_handle_t handle, uint32_t usage, const Rect& bounds, void** vaddr) {
	return _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPvPiS9_(handle, usage, bounds, vaddr, nullptr, nullptr);
}
