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
	.incbin "baserom.gba", 0x5cae80, 0x6

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
	.incbin "baserom.gba", 0x5cae9d, 0x7

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
	.incbin "baserom.gba", 0x5caeb2, 0x11

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
	.incbin "baserom.gba", 0x5caecc, 0x5

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
	.incbin "baserom.gba", 0x5caedd, 0xd

