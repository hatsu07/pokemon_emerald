@ Pokémon Emerald JP intro copyright assets.
@
@ Proven by intro.s consumers and pret/pokeemerald semantic declarations.
@ The palette is also reused by credits.s.
@
@ Exact ROM range owned here: 0x085C0C74-0x085C1041.
@ 0x085C1042 onward is intentionally outside this include.

	.globl gIntroCopyright_Pal
gIntroCopyright_Pal: @ 0x085C0C74
	.incbin "build/graphics/intro/copyright.gbapal"
	.if (. - gIntroCopyright_Pal) != 0x20
	.error "gIntroCopyright_Pal size mismatch"
	.endif

	.globl gIntroCopyright_Gfx
gIntroCopyright_Gfx: @ 0x085C0C94
	@ LZ stream 0x263 bytes + exact 1-byte ROM-slot tail = 0x264.
	.incbin "build/graphics/intro/copyright.4bpp.lz"
	.if (. - gIntroCopyright_Gfx) != 0x264
	.error "gIntroCopyright_Gfx slot size mismatch"
	.endif

	.globl gIntroCopyright_Tilemap
gIntroCopyright_Tilemap: @ 0x085C0EF8
	.incbin "build/graphics/intro/copyright.bin.lz"
	.if (. - gIntroCopyright_Tilemap) != 0x14A
	.error "gIntroCopyright_Tilemap compressed size mismatch"
	.endif

	.if (. - gIntroCopyright_Pal) != 0x3CE
	.error "Intro copyright asset block size mismatch"
	.endif
