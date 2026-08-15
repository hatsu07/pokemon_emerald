@ Ruby/Sapphire PokéNav outline graphics retained in Pokémon Emerald JP.
@ Exact pokeruby semantic correspondence:
@   outline palette -> graphics/pokenav/outline palette
@   outline tiles   -> first-occurrence dedup of outline tiles (43 unique)
@   outline tilemap -> graphics/pokenav/outline_map.bin
@ Exact ROM range including stream alignment: 0x085C052C-0x085C08C3.

	.globl gLegacyPokenavOutline_Pal
gLegacyPokenavOutline_Pal: @ 0x085C052C
	.incbin "build/graphics/pokenav/legacy/outline.gbapal"
	.if (. - gLegacyPokenavOutline_Pal) != 0x20
	.error "gLegacyPokenavOutline_Pal size mismatch"
	.endif

	.globl gLegacyPokenavOutline_Gfx
gLegacyPokenavOutline_Gfx: @ 0x085C054C
	.incbin "build/graphics/pokenav/legacy/outline.4bpp.lz"
	.if (. - gLegacyPokenavOutline_Gfx) != 0x20F
	.error "gLegacyPokenavOutline_Gfx stream size mismatch"
	.endif
	.byte 0x00 @ align next object to 0x085C075C

	.globl gLegacyPokenavOutline_Tilemap
gLegacyPokenavOutline_Tilemap: @ 0x085C075C
	.incbin "build/graphics/pokenav/legacy/outline.bin.lz"
	.if (. - gLegacyPokenavOutline_Tilemap) != 0x165
	.error "gLegacyPokenavOutline_Tilemap stream size mismatch"
	.endif
	.byte 0x00, 0x00, 0x00 @ align following unresolved data to 0x085C08C4

	.if (. - gLegacyPokenavOutline_Pal) != 0x398
	.error "legacy PokéNav outline asset block size mismatch"
	.endif
