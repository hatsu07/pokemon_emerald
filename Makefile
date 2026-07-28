AS      := tools/binutils/bin/arm-none-eabi-as
LD      := tools/binutils/bin/arm-none-eabi-ld
OBJCOPY := tools/binutils/bin/arm-none-eabi-objcopy
SHA1SUM := sha1sum -c
GBAFIX := tools/gbafix/gbafix
PREPROC := tools/preproc/preproc

ASFLAGS := -mcpu=arm7tdmi

ASFILE := $(wildcard asm/*.s data/*.s)
OBJFILE := $(ASFILE:.s=.o)
NAME := pokeemerald_jp
ROM := $(NAME).gba
ELF := $(NAME).elf
TITLE := POKEMON EMER
GAMECODE := BPEJ

.PHONY: all compare clean

all: $(ROM)

compare: $(ROM)
	$(SHA1SUM) rom_jp.sha1

clean:
	rm -f $(ROM) $(ELF) $(OBJFILE)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(ELF): %.elf: $(OBJFILE) ld_script_jp.txt
	$(LD) -T ld_script_jp.txt -Map $*.map -o $@ $(OBJFILE) -L tools/agbcc/lib -lgcc -lc
	$(GBAFIX) -t"$(TITLE)" -c$(GAMECODE) -m01 --silent $@

# data/*.s は .string / data/charmap/charmap.txt を preproc 経由でアセンブル
CHARMAP_PARTS := \
	data/charmap/charmap.txt \
	data/charmap/charmap_extra.txt
CHARMAP := data/charmap/charmap_combined.txt
$(CHARMAP): $(CHARMAP_PARTS)
	cat $^ > $@

data/%.o: data/%.s $(CHARMAP)
	$(PREPROC) $< $(CHARMAP) | $(AS) $(ASFLAGS) -o $@ -

TEXT_SOURCES := $(wildcard data/text/*.inc data/text/generated/*.inc)

data/event_scripts.o data/data.o: $(TEXT_SOURCES)

asm/%.o: asm/%.s
	$(AS) $(ASFLAGS) -o $@ $<
