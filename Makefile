LIB := lib_out/libcommon_cla_op.so

HDR := hdr_out/common_cla_op.h

all: $(LIB) $(HDR)
# pass

$(LIB) : lib_out/lib%.so : src/%.c
	gcc -I inc/ -shared -fPIC -o $@ $^

$(HDR) : hdr_out/% : inc/%
	cp $^ $@


