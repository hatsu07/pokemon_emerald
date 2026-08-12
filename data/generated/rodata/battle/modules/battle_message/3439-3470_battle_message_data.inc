	@ src/battle_message.c:170 battle_message_line_170
	.globl gText_Rom_5AB0AC
gText_Rom_5AB0AC: @ 0x085AB0AC
	.string "からすぎた！$"
	.if (. - gText_Rom_5AB0AC) > 0x7
	.error "gText_Rom_5AB0AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0AC) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0AC)
	.endif

	@ src/battle_message.c:171 battle_message_line_171
	.globl gText_Rom_5AB0B3
gText_Rom_5AB0B3: @ 0x085AB0B3
	.string "しぶすぎた！$"
	.if (. - gText_Rom_5AB0B3) > 0x7
	.error "gText_Rom_5AB0B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0B3) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0B3)
	.endif

	@ src/battle_message.c:172 battle_message_line_172
	.globl gText_Rom_5AB0BA
gText_Rom_5AB0BA: @ 0x085AB0BA
	.string "あますぎた！$"
	.if (. - gText_Rom_5AB0BA) > 0x7
	.error "gText_Rom_5AB0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0BA) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0BA)
	.endif

	@ src/battle_message.c:173 battle_message_line_173
	.globl gText_Rom_5AB0C1
gText_Rom_5AB0C1: @ 0x085AB0C1
	.string "にがすぎた！$"
	.if (. - gText_Rom_5AB0C1) > 0x7
	.error "gText_Rom_5AB0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C1) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0C1)
	.endif

	@ src/battle_message.c:174 battle_message_line_174
	.globl gText_Rom_5AB0C8
gText_Rom_5AB0C8: @ 0x085AB0C8
	.string "すっぱすぎた！$"
	.if (. - gText_Rom_5AB0C8) > 0x8
	.error "gText_Rom_5AB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C8) < 0x8
	.space 0x8 - (. - gText_Rom_5AB0C8)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AB0D0: battle_message.s: ExpandBattleTextBuffPlaceholders
	.globl gBattleMessageData_085AB0D0
gBattleMessageData_085AB0D0:
	.globl gUnknown_85AB0D0
gUnknown_85AB0D0: @ 0x085AB0D0
	@ confirmed contiguous ROM pointer table: 5 entries from this address
sPointerTable_085AB0D0:
	@ analyzed canonical ROM range 0x085AB0D0-0x085AB0E8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xAC, 0xB0, 0x5A, 0x08, 0xB3, 0xB0, 0x5A, 0x08, 0xBA, 0xB0, 0x5A, 0x08, 0xC1, 0xB0, 0x5A, 0x08
	.byte 0xC8, 0xB0, 0x5A, 0x08, 0xFD, 0x23, 0x1A, 0x00, 0xFE
	.globl gText_Rom_5AB0E9
gText_Rom_5AB0E9: @ 0x085AB0E9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0E9) != 0xa
	.error "gText_Rom_5AB0E9 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB0EB
	.set gText_Rom_5AB0EB, gText_Rom_5AB0E9 + 0x2
	.globl gText_Rom_5AB0EE
	.set gText_Rom_5AB0EE, gText_Rom_5AB0E9 + 0x5
	@ ANALYSIS: RAW_RANGE offset=0x5AB0F3, size=0x6
	.byte 0x70, 0x62, 0x79, 0x1A, 0x00, 0xFE

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0F9
gText_Rom_5AB0F9: @ 0x085AB0F9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0F9) != 0xa
	.error "gText_Rom_5AB0F9 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB0FB
	.set gText_Rom_5AB0FB, gText_Rom_5AB0F9 + 0x2
	.globl gText_Rom_5AB0FE
	.set gText_Rom_5AB0FE, gText_Rom_5AB0F9 + 0x5
	@ ANALYSIS: RAW_RANGE offset=0x5AB103, size=0x8
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB10B
gText_Rom_5AB10B: @ 0x085AB10B
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB10B) != 0xa
	.error "gText_Rom_5AB10B must retain its original byte length"
	.endif
	.globl gText_Rom_5AB10D
	.set gText_Rom_5AB10D, gText_Rom_5AB10B + 0x2
	.globl gText_Rom_5AB110
	.set gText_Rom_5AB110, gText_Rom_5AB10B + 0x5

	@ src/battle_message.c:419 battle_message_line_419
	.globl gText_Rom_5AB115
gText_Rom_5AB115: @ 0x085AB115
	.string "トレーナーに ボールを はじかれた!$"
	.if (. - gText_Rom_5AB115) > 0x13
	.error "gText_Rom_5AB115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB115) < 0x13
	.space 0x13 - (. - gText_Rom_5AB115)
	.endif

	@ src/battle_message.c:420 battle_message_line_420
	.globl gText_Rom_5AB128
gText_Rom_5AB128: @ 0x085AB128
	.string "ひとの ものを とったら どろぼう!$"
	.if (. - gText_Rom_5AB128) > 0x13
	.error "gText_Rom_5AB128 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB128) < 0x13
	.space 0x13 - (. - gText_Rom_5AB128)
	.endif
	@ analyzed canonical ROM range 0x085AB13B-0x085AB152
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x26, 0x09, 0x27, 0x2A, 0x10, 0xAB, 0xFE, 0x0A, 0x02, 0x12, 0x1A, 0x00, 0x12, 0x06, 0x1F, 0x28
	.byte 0x0F, 0x03, 0x16, 0x15, 0x02, 0x40, 0xAB, 0xFF
	.globl gText_Rom_5AB153
gText_Rom_5AB153: @ 0x085AB153
	.string "ポケモンに\nうまく あたらなかった!$"
	.if (. - gText_Rom_5AB153) != 0x13
	.error "gText_Rom_5AB153 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB161
	.set gText_Rom_5AB161, gText_Rom_5AB153 + 0xe

	@ src/battle_message.c:422 battle_message_line_422
	.globl gText_Rom_5AB166
gText_Rom_5AB166: @ 0x085AB166
	.string "だめだ! ポケモンが\nボールから でてしまった!$"
	.if (. - gText_Rom_5AB166) > 0x19
	.error "gText_Rom_5AB166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB166) < 0x19
	.space 0x19 - (. - gText_Rom_5AB166)
	.endif

	@ src/battle_message.c:423 battle_message_line_423
	.globl gText_Rom_5AB17F
gText_Rom_5AB17F: @ 0x085AB17F
	.string "ああ!\nつかまえたと おもったのに!$"
	.if (. - gText_Rom_5AB17F) > 0x13
	.error "gText_Rom_5AB17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB17F) < 0x13
	.space 0x13 - (. - gText_Rom_5AB17F)
	.endif

	@ src/battle_message.c:424 battle_message_line_424
	.globl gText_Rom_5AB192
gText_Rom_5AB192: @ 0x085AB192
	.string "ざんねん!\nもうすこしで つかまえられたのに!$"
	.if (. - gText_Rom_5AB192) > 0x18
	.error "gText_Rom_5AB192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB192) < 0x18
	.space 0x18 - (. - gText_Rom_5AB192)
	.endif

