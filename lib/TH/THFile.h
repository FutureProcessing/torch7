#ifndef TH_FILE_INC
#define TH_FILE_INC

#include "THStorage.h"

typedef struct THFile__ THFile;

TH_API int THFile_isOpened(THFile *self);
TH_API int THFile_isQuiet(THFile *self);
TH_API int THFile_isReadable(THFile *self);
TH_API int THFile_isWritable(THFile *self);
TH_API int THFile_isBinary(THFile *self);
TH_API int THFile_isAutoSpacing(THFile *self);
TH_API int THFile_hasError(THFile *self);

TH_API void THFile_binary(THFile *self);
TH_API void THFile_ascii(THFile *self);
TH_API void THFile_autoSpacing(THFile *self);
TH_API void THFile_noAutoSpacing(THFile *self);
TH_API void THFile_quiet(THFile *self);
TH_API void THFile_pedantic(THFile *self);
TH_API void THFile_clearError(THFile *self);

/* scalar */
TH_API unsigned char THFile_readByteScalar(THFile *self);
TH_API char THFile_readCharScalar(THFile *self);
TH_API short THFile_readShortScalar(THFile *self);
TH_API int THFile_readIntScalar(THFile *self);
TH_API LONG_PTR THFile_readLongScalar(THFile *self);
TH_API float THFile_readFloatScalar(THFile *self);
TH_API double THFile_readDoubleScalar(THFile *self);

TH_API void THFile_writeByteScalar(THFile *self, unsigned char scalar);
TH_API void THFile_writeCharScalar(THFile *self, char scalar);
TH_API void THFile_writeShortScalar(THFile *self, short scalar);
TH_API void THFile_writeIntScalar(THFile *self, int scalar);
TH_API void THFile_writeLongScalar(THFile *self, LONG_PTR scalar);
TH_API void THFile_writeFloatScalar(THFile *self, float scalar);
TH_API void THFile_writeDoubleScalar(THFile *self, double scalar);

/* storage */
TH_API LONG_PTR THFile_readByte(THFile *self, THByteStorage *storage);
TH_API LONG_PTR THFile_readChar(THFile *self, THCharStorage *storage);
TH_API LONG_PTR THFile_readShort(THFile *self, THShortStorage *storage);
TH_API LONG_PTR THFile_readInt(THFile *self, THIntStorage *storage);
TH_API LONG_PTR THFile_readLong(THFile *self, THLongStorage *storage);
TH_API LONG_PTR THFile_readFloat(THFile *self, THFloatStorage *storage);
TH_API LONG_PTR THFile_readDouble(THFile *self, THDoubleStorage *storage);

TH_API LONG_PTR THFile_writeByte(THFile *self, THByteStorage *storage);
TH_API LONG_PTR THFile_writeChar(THFile *self, THCharStorage *storage);
TH_API LONG_PTR THFile_writeShort(THFile *self, THShortStorage *storage);
TH_API LONG_PTR THFile_writeInt(THFile *self, THIntStorage *storage);
TH_API LONG_PTR THFile_writeLong(THFile *self, THLongStorage *storage);
TH_API LONG_PTR THFile_writeFloat(THFile *self, THFloatStorage *storage);
TH_API LONG_PTR THFile_writeDouble(THFile *self, THDoubleStorage *storage);

/* raw */
TH_API LONG_PTR THFile_readByteRaw(THFile *self, unsigned char *data, LONG_PTR n);
TH_API LONG_PTR THFile_readCharRaw(THFile *self, char *data, LONG_PTR n);
TH_API LONG_PTR THFile_readShortRaw(THFile *self, short *data, LONG_PTR n);
TH_API LONG_PTR THFile_readIntRaw(THFile *self, int *data, LONG_PTR n);
TH_API LONG_PTR THFile_readLongRaw(THFile *self, LONG_PTR *data, LONG_PTR n);
TH_API LONG_PTR THFile_readFloatRaw(THFile *self, float *data, LONG_PTR n);
TH_API LONG_PTR THFile_readDoubleRaw(THFile *self, double *data, LONG_PTR n);
TH_API LONG_PTR THFile_readStringRaw(THFile *self, const char *format, char **str_); /* you must deallocate str_ */

TH_API LONG_PTR THFile_writeByteRaw(THFile *self, unsigned char *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeCharRaw(THFile *self, char *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeShortRaw(THFile *self, short *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeIntRaw(THFile *self, int *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeLongRaw(THFile *self, LONG_PTR *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeFloatRaw(THFile *self, float *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeDoubleRaw(THFile *self, double *data, LONG_PTR n);
TH_API LONG_PTR THFile_writeStringRaw(THFile *self, const char *str, LONG_PTR size);

TH_API void THFile_synchronize(THFile *self);
TH_API void THFile_seek(THFile *self, LONG_PTR position);
TH_API void THFile_seekEnd(THFile *self);
TH_API LONG_PTR THFile_position(THFile *self);
TH_API void THFile_close(THFile *self);
TH_API void THFile_free(THFile *self);

#endif
