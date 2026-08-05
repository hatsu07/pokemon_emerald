	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CAE7B
gText_Rom_5CAE7B: @ 0x085CAE7B
	.string "ジャンプ$"
	.if (. - gText_Rom_5CAE7B) > 0x5
	.error "gText_Rom_5CAE7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE7B) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE7B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAE80, size=0x6
	.byte 0x95, 0xAE, 0x95, 0x78, 0x55, 0x19

	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE86
gText_Rom_5CAE86: @ 0x085CAE86
	.string "きのみどり$"
	.if (. - gText_Rom_5CAE86) != 0x6
	.error "gText_Rom_5CAE86 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAE88
	.set gText_Rom_5CAE88, gText_Rom_5CAE86 + 0x2

	@ src/data/script_menu.h:543 script_menu_line_543
	.globl gText_Rom_5CAE8C
gText_Rom_5CAE8C: @ 0x085CAE8C
	.string "リーダーになる$"
	.if (. - gText_Rom_5CAE8C) > 0x8
	.error "gText_Rom_5CAE8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE8C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAE8C)
	.endif

	@ src/data/script_menu.h:542 script_menu_line_542
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE94
gText_Rom_5CAE94: @ 0x085CAE94
	.string "グループにはいる$"
	.if (. - gText_Rom_5CAE94) != 0x9
	.error "gText_Rom_5CAE94 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAE99
	.set gText_Rom_5CAE99, gText_Rom_5CAE94 + 0x5
	@ Decoded text from ROM range: offset=0x5CAE9D, size=0x7
	.string "2つのコース$"

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5CAEA4
gText_Rom_5CAEA4: @ 0x085CAEA4
	.string "レベル50$"
	.if (. - gText_Rom_5CAEA4) > 0x6
	.error "gText_Rom_5CAEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEA4) < 0x6
	.space 0x6 - (. - gText_Rom_5CAEA4)
	.endif

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAEAA
gText_Rom_5CAEAA: @ 0x085CAEAA
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAEAA) != 0x8
	.error "gText_Rom_5CAEAA must retain its original byte length"
	.endif
	.globl gText_Rom_5CAEAE
	.set gText_Rom_5CAEAE, gText_Rom_5CAEAA + 0x4
	@ Replaced baserom.gba range: offset=0x5CAEB2, size=0x11
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x19, 0x0C, 0x35, 0x29, 0x02, 0x14, 0x06, 0x3E, 0xFF, 0x23, 0x10, 0x0E
	.byte 0x29

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAEC3
gText_Rom_5CAEC3: @ 0x085CAEC3
	.string "どうぐ$"
	.if (. - gText_Rom_5CAEC3) > 0x4
	.error "gText_Rom_5CAEC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC3) < 0x4
	.space 0x4 - (. - gText_Rom_5CAEC3)
	.endif

	@ src/data/script_menu.h:652 script_menu_line_652
	.globl gText_Rom_5CAEC7
gText_Rom_5CAEC7: @ 0x085CAEC7
	.string "シンボル$"
	.if (. - gText_Rom_5CAEC7) > 0x5
	.error "gText_Rom_5CAEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC7) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEC7)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAECC, size=0x5
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x19

	@ src/data/script_menu.h:450 gText_Record2 (+1 aliases)
	.globl gText_Rom_5CAED1
gText_Rom_5CAED1: @ 0x085CAED1
	.string "きろく$"
	.if (. - gText_Rom_5CAED1) > 0x4
	.error "gText_Rom_5CAED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAED1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAED1)
	.endif

	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAED5
gText_Rom_5CAED5: @ 0x085CAED5
	.string "バトルポイント$"
	.if (. - gText_Rom_5CAED5) != 0x8
	.error "gText_Rom_5CAED5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAED8
	.set gText_Rom_5CAED8, gText_Rom_5CAED5 + 0x3
	@ Replaced baserom.gba range: offset=0x5CAEDD, size=0xD
	.byte 0x60, 0x7C, 0xAE, 0x16, 0x12, 0x02, 0x13, 0xFF, 0x12, 0x2A, 0x13, 0x02, 0x08

