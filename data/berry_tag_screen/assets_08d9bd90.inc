	.globl gBerryCheck_Gfx
gBerryCheck_Gfx: @ 0x08D9BD90
	@ Semantic exact-LZ Berry Tag screen asset.
	.incbin "build/graphics/bag/check_berry.4bpp.lz"
	.if (. - gBerryCheck_Gfx) != 0x41C
	.error "gBerryCheck_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9C1AC: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryCheck_Pal
gBerryCheck_Pal: @ 0x08D9C1AC
	@ Semantic exact-LZ Berry Tag screen asset.
	.incbin "build/graphics/bag/check_berry.gbapal.lz"
	.if (. - gBerryCheck_Pal) != 0xA8
	.error "gBerryCheck_Pal compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9C254: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryTag_Gfx
gBerryTag_Gfx: @ 0x08D9C254
	@ Semantic exact-LZ Berry Tag screen asset.
	.incbin "build/graphics/bag/berry_tag.bin.lz"
	.if (. - gBerryTag_Gfx) != 0x190
	.error "gBerryTag_Gfx compressed size mismatch"
	.endif
