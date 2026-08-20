	@ src/strings.c:506 gText_PokemonNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF75
gText_Rom_5CAF75: @ 0x085CAF75
	.string "ポケモンのせいかく{EOS}"
	.if (. - gText_Rom_5CAF75) != 0xa
	.error "gText_Rom_5CAF75 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF7A
	.set gText_Rom_5CAF7A, gText_Rom_5CAF75 + 0x5
	.globl gText_Rom_5CAF7B
	.set gText_Rom_5CAF7B, gText_Rom_5CAF75 + 0x6

	@ src/strings.c:507 gText_PokemonMoves
	.globl gText_Rom_5CAF7F
gText_Rom_5CAF7F: @ 0x085CAF7F
	.string "ポケモンのわざ{EOS}"
	.if (. - gText_Rom_5CAF7F) > 0x8
	.error "gText_Rom_5CAF7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF7F) < 0x8
	.space 0x8 - (. - gText_Rom_5CAF7F)
	.endif

	@ src/strings.c:508 gText_Underpowered
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF87
gText_Rom_5CAF87: @ 0x085CAF87
	.string "ちからをはっきできない{EOS}"
	.if (. - gText_Rom_5CAF87) != 0xc
	.error "gText_Rom_5CAF87 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF8E
	.set gText_Rom_5CAF8E, gText_Rom_5CAF87 + 0x7

	@ src/strings.c:509 gText_WhenInDanger
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF93
gText_Rom_5CAF93: @ 0x085CAF93
	.string "ピンチになったら{EOS}"
	.if (. - gText_Rom_5CAF93) != 0x9
	.error "gText_Rom_5CAF93 must retain its original byte length"
	.endif
