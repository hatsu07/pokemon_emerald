@ Ruby/Sapphire-era PokéNav Hoenn-map assets retained in Pokémon Emerald JP.
@
@ BED74 graphics are the localized counterpart of pokeruby map_misc2.
@ BF2EC decompresses to the exact pokeruby unknown_E99FB0.bin tilemap.
@ BF43C-BF627 is JP-specific extra tilemap data using palette bank 1 and
@ only graphics tile IDs 0x00..0x7E. It is intentionally not called
@ bottom_toolbar because the Ruby structural correspondence was weak.
@
@ Exact ROM range: 0x085BED54-0x085BF627.

	.globl gLegacyPokenavHoennMap_Pal_Jp
gLegacyPokenavHoennMap_Pal_Jp: @ 0x085BED54
	.incbin "build/graphics/pokenav/legacy/hoenn_map.gbapal"
	.if (. - gLegacyPokenavHoennMap_Pal_Jp) != 0x20
	.error "gLegacyPokenavHoennMap_Pal_Jp size mismatch"
	.endif

	.globl gLegacyPokenavHoennMapMisc_Gfx_Jp
gLegacyPokenavHoennMapMisc_Gfx_Jp: @ 0x085BED74
	.incbin "build/graphics/pokenav/legacy/hoenn_map.4bpp.lz"
	.if (. - gLegacyPokenavHoennMapMisc_Gfx_Jp) != 0x577
	.error "gLegacyPokenavHoennMapMisc_Gfx_Jp compressed size mismatch"
	.endif
	.byte 0x00 @ alignment at 0x085BF2EB

	.globl gLegacyPokenavHoennMap_Tilemap
gLegacyPokenavHoennMap_Tilemap: @ 0x085BF2EC
	.incbin "build/graphics/pokenav/legacy/hoenn_map.bin.lz"
	.if (. - gLegacyPokenavHoennMap_Tilemap) != 0x14E
	.error "gLegacyPokenavHoennMap_Tilemap compressed size mismatch"
	.endif
	.byte 0x00, 0x00 @ alignment at 0x085BF43A-0x085BF43B

	.globl gLegacyPokenavHoennMapExtraTilemap_Jp
gLegacyPokenavHoennMapExtraTilemap_Jp: @ 0x085BF43C
	.include "graphics/pokenav/legacy/hoenn_map_extra.tilemap.inc"
	.if (. - gLegacyPokenavHoennMapExtraTilemap_Jp) != 0x1EC
	.error "gLegacyPokenavHoennMapExtraTilemap_Jp size mismatch"
	.endif

	.if (. - gLegacyPokenavHoennMap_Pal_Jp) != 0x8D4
	.error "legacy PokéNav Hoenn-map asset block size mismatch"
	.endif
