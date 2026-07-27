	@ src/data/script_menu.h:676 script_menu_line_676
	.globl gText_Rom_5CAEEF
gText_Rom_5CAEEF: @ 0x085CAEEF
	.string "バトルサロン$"
	.if (. - gText_Rom_5CAEEF) > 0x7
	.error "gText_Rom_5CAEEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEF) < 0x7
	.space 0x7 - (. - gText_Rom_5CAEEF)
	.endif
	.incbin "baserom.gba", 0x5caef6, 0x4

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAEFA
gText_Rom_5CAEFA: @ 0x085CAEFA
	.string "マルチ$"
	.if (. - gText_Rom_5CAEFA) > 0x4
	.error "gText_Rom_5CAEFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEFA) < 0x4
	.space 0x4 - (. - gText_Rom_5CAEFA)
	.endif
	.incbin "baserom.gba", 0x5caefe, 0x3b

	@ src/strings.c:657 gText_Knockout
	.globl gText_Rom_5CAF39
gText_Rom_5CAF39: @ 0x085CAF39
	.string "ノックアウト$"
	.if (. - gText_Rom_5CAF39) > 0x7
	.error "gText_Rom_5CAF39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF39) < 0x7
	.space 0x7 - (. - gText_Rom_5CAF39)
	.endif

	@ src/data/script_menu.h:689 gText_BasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF40
gText_Rom_5CAF40: @ 0x085CAF40
	.string "きほんルール$"
	.if (. - gText_Rom_5CAF40) != 0x7
	.error "gText_Rom_5CAF40 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF43
	.set gText_Rom_5CAF43, gText_Rom_5CAF40 + 0x3
	.incbin "baserom.gba", 0x5caf47, 0x5

	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAF4C
gText_Rom_5CAF4C: @ 0x085CAF4C
	.string "あいて$"
	.if (. - gText_Rom_5CAF4C) > 0x4
	.error "gText_Rom_5CAF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF4C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAF4C)
	.endif
	.incbin "baserom.gba", 0x5caf50, 0x14

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF64
gText_Rom_5CAF64: @ 0x085CAF64
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAF64) != 0x8
	.error "gText_Rom_5CAF64 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF68
	.set gText_Rom_5CAF68, gText_Rom_5CAF64 + 0x4
	.incbin "baserom.gba", 0x5caf6c, 0x9

	@ src/strings.c:506 gText_PokemonNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF75
gText_Rom_5CAF75: @ 0x085CAF75
	.string "ポケモンのせいかく$"
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
	.string "ポケモンのわざ$"
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
	.string "ちからをはっきできない$"
	.if (. - gText_Rom_5CAF87) != 0xc
	.error "gText_Rom_5CAF87 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF8E
	.set gText_Rom_5CAF8E, gText_Rom_5CAF87 + 0x7

	@ src/strings.c:509 gText_WhenInDanger
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF93
gText_Rom_5CAF93: @ 0x085CAF93
	.string "ピンチになったら$"
	.if (. - gText_Rom_5CAF93) != 0x9
	.error "gText_Rom_5CAF93 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAF98
	.set gText_Rom_5CAF98, gText_Rom_5CAF93 + 0x5
	.incbin "baserom.gba", 0x5caf9c, 0x7

