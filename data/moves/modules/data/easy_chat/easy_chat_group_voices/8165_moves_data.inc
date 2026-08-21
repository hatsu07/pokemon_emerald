	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	@ pret/pokeemerald-jp direct xref for 0x08D9154C: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderCenter_Gfx
gBerryBlenderCenter_Gfx: @ 0x08D9154C
	@ Semantic exact-LZ asset; source: graphics/berry_blender/center.png.
	.incbin "build/graphics/final_remaining/berry_blender_center.bin.lz"
	.if (. - gBerryBlenderCenter_Gfx) != 0x820
	.error "gBerryBlenderCenter_Gfx compressed size mismatch"
	.endif
