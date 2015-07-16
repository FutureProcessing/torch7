struct THFile__
{
    struct THFileVTable *vtable;

    int isQuiet;
    int isReadable;
    int isWritable;
    int isBinary;
    int isAutoSpacing;
    int hasError;
};

/* virtual table definition */

struct THFileVTable
{
    int (*isOpened)(THFile *self);

    LONG_PTR (*readByte)(THFile *self, unsigned char *data, LONG_PTR n);
    LONG_PTR (*readChar)(THFile *self, char *data, LONG_PTR n);
    LONG_PTR (*readShort)(THFile *self, short *data, LONG_PTR n);
    LONG_PTR (*readInt)(THFile *self, int *data, LONG_PTR n);
    LONG_PTR (*readLong)(THFile *self, LONG_PTR *data, LONG_PTR n);
    LONG_PTR (*readFloat)(THFile *self, float *data, LONG_PTR n);
    LONG_PTR (*readDouble)(THFile *self, double *data, LONG_PTR n);
    LONG_PTR (*readString)(THFile *self, const char *format, char **str_);

    LONG_PTR (*writeByte)(THFile *self, unsigned char *data, LONG_PTR n);
    LONG_PTR (*writeChar)(THFile *self, char *data, LONG_PTR n);
    LONG_PTR (*writeShort)(THFile *self, short *data, LONG_PTR n);
    LONG_PTR (*writeInt)(THFile *self, int *data, LONG_PTR n);
    LONG_PTR (*writeLong)(THFile *self, LONG_PTR *data, LONG_PTR n);
    LONG_PTR (*writeFloat)(THFile *self, float *data, LONG_PTR n);
    LONG_PTR (*writeDouble)(THFile *self, double *data, LONG_PTR n);
    LONG_PTR (*writeString)(THFile *self, const char *str, LONG_PTR size);

    void (*synchronize)(THFile *self);
    void (*seek)(THFile *self, LONG_PTR position);
    void (*seekEnd)(THFile *self);
    LONG_PTR (*position)(THFile *self);
    void (*close)(THFile *self);
    void (*free)(THFile *self);
};
