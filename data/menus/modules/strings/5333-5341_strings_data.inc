	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_OpenLevel3
sScriptMenuText_OpenLevel3: @ 0x085CAF64
	.string "オープンレベル{EOS}"
	.if (. - sScriptMenuText_OpenLevel3) != 0x8
	.error "sScriptMenuText_OpenLevel3 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF68
	.set gText_Rom_5CAF68, sScriptMenuText_OpenLevel3 + 0x4
	@ Decoded text from ROM range: offset=0x5CAF6C, size=0x9
	.string "たたかいのきほん{EOS}"
	@ src/strings.c:506 gText_PokemonNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_PokemonNature
sScriptMenuText_PokemonNature: @ 0x085CAF75
	.string "ポケモンのせいかく{EOS}"
	.if (. - sScriptMenuText_PokemonNature) != 0xa
	.error "sScriptMenuText_PokemonNature must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF7A
	.set gText_Rom_5CAF7A, sScriptMenuText_PokemonNature + 0x5
	.globl gText_Rom_5CAF7B
	.set gText_Rom_5CAF7B, sScriptMenuText_PokemonNature + 0x6

	@ src/strings.c:507 gText_PokemonMoves
	.globl sScriptMenuText_PokemonMoves
sScriptMenuText_PokemonMoves: @ 0x085CAF7F
	.string "ポケモンのわざ{EOS}"
	.if (. - sScriptMenuText_PokemonMoves) > 0x8
	.error "sScriptMenuText_PokemonMoves may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_PokemonMoves) < 0x8
	.space 0x8 - (. - sScriptMenuText_PokemonMoves)
	.endif

	@ src/strings.c:508 gText_Underpowered
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_Underpowered
sScriptMenuText_Underpowered: @ 0x085CAF87
	.string "ちからをはっきできない{EOS}"
	.if (. - sScriptMenuText_Underpowered) != 0xc
	.error "sScriptMenuText_Underpowered must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF8E
	.set gText_Rom_5CAF8E, sScriptMenuText_Underpowered + 0x7

	@ src/strings.c:509 gText_WhenInDanger
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_WhenInDanger
sScriptMenuText_WhenInDanger: @ 0x085CAF93
	.string "ピンチになったら{EOS}"
	.if (. - sScriptMenuText_WhenInDanger) != 0x9
	.error "sScriptMenuText_WhenInDanger must retain its original byte length"
	.endif
