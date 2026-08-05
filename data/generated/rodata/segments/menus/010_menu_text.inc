	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D8C
gText_Rom_2C1D8C: @ 0x082C1D8C
	.string "マルチバトル$"
	.if (. - gText_Rom_2C1D8C) != 0x7
	.error "gText_Rom_2C1D8C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D8F
	.set gText_Rom_2C1D8F, gText_Rom_2C1D8C + 0x3
	.space 0x1, 0x00

	@ src/data/union_room.h:548 sText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D94
gText_Rom_2C1D94: @ 0x082C1D94
	.string "ポケモンこうかん$"
	.if (. - gText_Rom_2C1D94) != 0x9
	.error "gText_Rom_2C1D94 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D98
	.set gText_Rom_2C1D98, gText_Rom_2C1D94 + 0x4
	.space 0x3, 0x00

	@ src/data/union_room.h:539 sText_Chat2 (+1 aliases)
	.globl gText_Rom_2C1DA0
gText_Rom_2C1DA0: @ 0x082C1DA0
	.string "チャット$"
	.if (. - gText_Rom_2C1DA0) > 0x5
	.error "gText_Rom_2C1DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DA0) < 0x5
	.space 0x5 - (. - gText_Rom_2C1DA0)
	.endif
	.space 0x3, 0x00

	@ src/data/easy_chat/easy_chat_group_hobbies.h:58 easy_chat_group_hobbies_line_58 (+1 aliases)
	.globl gText_Rom_2C1DA8
gText_Rom_2C1DA8: @ 0x082C1DA8
	.string "カード$"
	.if (. - gText_Rom_2C1DA8) > 0x4
	.error "gText_Rom_2C1DA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DA8) < 0x4
	.space 0x4 - (. - gText_Rom_2C1DA8)
	.endif

	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DAC
gText_Rom_2C1DAC: @ 0x082C1DAC
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C1DAC) != 0x8
	.error "gText_Rom_2C1DAC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DB0
	.set gText_Rom_2C1DB0, gText_Rom_2C1DAC + 0x4

	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DB4
gText_Rom_2C1DB4: @ 0x082C1DB4
	.string "ふしぎなニュース$"
	.if (. - gText_Rom_2C1DB4) != 0x9
	.error "gText_Rom_2C1DB4 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DB8
	.set gText_Rom_2C1DB8, gText_Rom_2C1DB4 + 0x4
	.space 0x3, 0x00

	@ src/data/script_menu.h:535 script_menu_line_535 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DC0
gText_Rom_2C1DC0: @ 0x082C1DC0
	.string "ポケモンジャンプ$"
	.if (. - gText_Rom_2C1DC0) != 0x9
	.error "gText_Rom_2C1DC0 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DC4
	.set gText_Rom_2C1DC4, gText_Rom_2C1DC0 + 0x4
	.space 0x3, 0x00

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DCC
gText_Rom_2C1DCC: @ 0x082C1DCC
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_2C1DCC) != 0x9
	.error "gText_Rom_2C1DCC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DCF
	.set gText_Rom_2C1DCF, gText_Rom_2C1DCC + 0x3
	.space 0x3, 0x00

	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DD8
gText_Rom_2C1DD8: @ 0x082C1DD8
	.string "きのみどり$"
	.if (. - gText_Rom_2C1DD8) != 0x6
	.error "gText_Rom_2C1DD8 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DDA
	.set gText_Rom_2C1DDA, gText_Rom_2C1DD8 + 0x2
	@ Replaced baserom.gba range: offset=0x2C1DDE, size=0x6
	.byte 0x00, 0x00, 0x5B, 0xAE, 0x61, 0xFF

	@ src/data/union_room.h:557 sText_BerryBlender
	.globl gText_Rom_2C1DE4
gText_Rom_2C1DE4: @ 0x082C1DE4
	.string "きのみブレンダー$"
	.if (. - gText_Rom_2C1DE4) > 0x9
	.error "gText_Rom_2C1DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DE4) < 0x9
	.space 0x9 - (. - gText_Rom_2C1DE4)
	.endif
	@ Replaced baserom.gba range: offset=0x2C1DED, size=0xF
	.byte 0x00, 0x00, 0x00, 0x7A, 0x5A, 0xAE, 0x95, 0x5A, 0xAE, 0x65, 0xAE, 0xFF, 0x00, 0x00, 0x00

