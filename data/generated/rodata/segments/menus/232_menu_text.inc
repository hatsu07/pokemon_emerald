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
	@ Replaced baserom.gba range: offset=0x5CAEF6, size=0x4
	.byte 0x12, 0x03, 0x0C, 0x2E

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
	@ Replaced baserom.gba range: offset=0x5CAEFE, size=0x3B
	.byte 0x96, 0x64, 0x79, 0x44, 0x19, 0x00, 0x11, 0x35, 0x03, 0x02, 0xFF, 0x1A, 0x2E, 0x13, 0x02, 0xB3
	.byte 0x0A, 0x0A, 0x2B, 0xB4, 0xFF, 0x1A, 0x2E, 0x13, 0x02, 0xB3, 0x2C, 0x3C, 0xB4, 0xFF, 0x1A, 0x2E
	.byte 0x13, 0x02, 0xB3, 0x06, 0x27, 0x41, 0xB4, 0xFF, 0x08, 0x20, 0x01, 0x2C, 0x0E, 0xFF, 0x64, 0xAE
	.byte 0x65, 0x72, 0x7E, 0x64, 0x1B, 0x36, 0x03, 0xFF, 0x91, 0x98, 0x79

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
	@ Replaced baserom.gba range: offset=0x5CAF47, size=0x5
	.byte 0x64, 0x7A, 0xAE, 0x95, 0x00

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
	@ Decoded text from ROM range: offset=0x5CAF50, size=0x14
	.string "トレード　かいすう$"
	.string "トレード　ちゅうい$"

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
	@ Decoded text from ROM range: offset=0x5CAF6C, size=0x9
	.string "たたかいのきほん$"

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
	@ Replaced baserom.gba range: offset=0x5CAF9C, size=0x7
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0x19, 0x00

