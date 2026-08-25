	@ pret/pokeemerald-jp direct xref for 0x085570CC: pokemon_icon.s: CreateMonIcon, sub_080D2618
	.globl sMonIconOamData
sMonIconOamData: @ 0x085570CC
	@ Mon icon OAM data (6-byte OamData plus linker alignment).
	.2byte 0x0000, 0x8000, 0x0400, 0x0000

	.globl sMonIconAnim_0
sMonIconAnim_0: @ 0x085570D4
	@ Mon icon animation 0, fastest-to-slowest order.
	.2byte 0x0000, 0x0006, 0x0001, 0x0006, 0xFFFE, 0x0000

	.globl sMonIconAnim_1
sMonIconAnim_1: @ 0x085570E0
	@ Mon icon animation 1, fastest-to-slowest order.
	.2byte 0x0000, 0x0008, 0x0001, 0x0008, 0xFFFE, 0x0000

	.globl sMonIconAnim_2
sMonIconAnim_2: @ 0x085570EC
	@ Mon icon animation 2, fastest-to-slowest order.
	.2byte 0x0000, 0x000E, 0x0001, 0x000E, 0xFFFE, 0x0000

	.globl sMonIconAnim_3
sMonIconAnim_3: @ 0x085570F8
	@ Mon icon animation 3, fastest-to-slowest order.
	.2byte 0x0000, 0x0016, 0x0001, 0x0016, 0xFFFE, 0x0000

	.globl sMonIconAnim_4
sMonIconAnim_4: @ 0x08557104
	@ Mon icon animation 4, fastest-to-slowest order.
	.2byte 0x0000, 0x001D, 0x0000, 0x001D, 0xFFFE, 0x0000

	.globl sMonIconAnims
sMonIconAnims: @ 0x08557110
	.4byte sMonIconAnim_0
	.4byte sMonIconAnim_1
	.4byte sMonIconAnim_2
	.4byte sMonIconAnim_3
	.4byte sMonIconAnim_4

	.globl sMonIconAffineAnim_0
sMonIconAffineAnim_0: @ 0x08557124
	@ Mon icon normal affine animation.
	.2byte 0x0000, 0x0000, 0x0A00, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sMonIconAffineAnim_1
sMonIconAffineAnim_1: @ 0x08557134
	@ Mon icon shrink affine animation.
	.2byte 0xFFFE, 0xFFFE, 0x7A00, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sMonIconAffineAnims
sMonIconAffineAnims: @ 0x08557144
	.4byte sMonIconAffineAnim_0
	.4byte sMonIconAffineAnim_1

	.globl sSpriteImageSizes
sSpriteImageSizes: @ 0x0855714C
	@ 3x4 sprite image byte-size table for square/horizontal/vertical OAM shapes.
	.2byte 0x0020, 0x0080, 0x0200, 0x0800, 0x0040, 0x0080, 0x0100, 0x0400
	.2byte 0x0040, 0x0080, 0x0100, 0x0400

	.globl gPokemonRecord_Rom_557164
gPokemonRecord_Rom_557164: @ 0x08557164
	.space 0x2, 0xFE
