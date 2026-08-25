@ Pokémon Emerald JP - use Pokéblock screen assets
@ Exact ROM layout: 0x085BE9A0-0x085BED53.

	.globl gUsePokeblockUpDown_Pal
gUsePokeblockUpDown_Pal: @ 0x085BE9A0
	.incbin "build/graphics/pokeblock/use_screen/updown.gbapal"
	.if (. - gUsePokeblockUpDown_Pal) != 0x20
	.error "gUsePokeblockUpDown_Pal size mismatch"
	.endif

	.globl gUsePokeblockUpDown_Gfx
gUsePokeblockUpDown_Gfx: @ 0x085BE9C0
	.incbin "build/graphics/pokeblock/use_screen/updown.4bpp"
	.if (. - gUsePokeblockUpDown_Gfx) != 0x200
	.error "gUsePokeblockUpDown_Gfx size mismatch"
	.endif

	.globl gUsePokeblockCondition_Gfx
gUsePokeblockCondition_Gfx: @ 0x085BEBC0
	@ GBA LZ77: decompressed size 0x800, encoded size 0x173.
	.incbin "build/graphics/pokeblock/use_screen/condition.4bpp.lz"
	.if (. - gUsePokeblockCondition_Gfx) != 0x173
	.error "gUsePokeblockCondition_Gfx compressed size mismatch"
	.endif
	.align 2, 0 @ one ROM padding byte at 0x085BED33

	.globl gUsePokeblockCondition_Pal
gUsePokeblockCondition_Pal: @ 0x085BED34
	.incbin "build/graphics/pokeblock/use_screen/condition.gbapal"
	.if (. - gUsePokeblockCondition_Pal) != 0x20
	.error "gUsePokeblockCondition_Pal size mismatch"
	.endif
