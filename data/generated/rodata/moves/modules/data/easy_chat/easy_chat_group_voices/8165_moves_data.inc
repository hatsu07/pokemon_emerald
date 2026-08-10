	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	@ pret/pokeemerald-jp direct xref for 0x08D9154C: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_08D9154C
gBerryBlenderData_08D9154C:
	.globl gUnknown_8D9154C
gUnknown_8D9154C: @ 0x08D9154C
	@ confirmed GBA LZ77 stream: compressed=0x820, decompressed=0x2000
sLz77Block_08D9154C:
	@ analyzed canonical ROM range 0x08D9154C-0x08D91D6B
sAnalyzedGfx_08D9154C: @ 0x08D9154C
	.incbin "build/graphics/analyzed/gunknown_8d9154c_08d9154c.4bpp.lz"
	.if (. - sAnalyzedGfx_08D9154C) != 0x820
	.error "gUnknown_8D9154C compressed size mismatch"
	.endif
