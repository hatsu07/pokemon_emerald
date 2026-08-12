	@ src/battle_message.c:425 battle_message_line_425
	.globl gText_Rom_5AB1AA
gText_Rom_5AB1AA: @ 0x085AB1AA
	.string "おしい!\nあと ちょっとの ところだったのに!$"
	.if (. - gText_Rom_5AB1AA) > 0x18
	.error "gText_Rom_5AB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB1AA) < 0x18
	.space 0x18 - (. - gText_Rom_5AB1AA)
	.endif
	@ analyzed canonical ROM range 0x085AB1C2-0x085AB224
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x24, 0x50, 0x10, 0xAE, 0xAB, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x12, 0x06, 0x1F, 0x04, 0x10, 0x40
	.byte 0xAB, 0xFC, 0x0A, 0xFC, 0x0B, 0x60, 0x01, 0xFB, 0xFF, 0x24, 0x50, 0x10, 0xAE, 0xAB, 0xFE, 0xFD
	.byte 0x06, 0x2D, 0x00, 0x12, 0x06, 0x1F, 0x04, 0x10, 0x40, 0xAB, 0xFC, 0x0A, 0xFC, 0x0B, 0x60, 0x01
	.byte 0xFC, 0x08, 0x7F, 0xFF, 0x12, 0x06, 0x1F, 0x04, 0x10, 0x00, 0xFD, 0x06, 0x16, 0xFE, 0x66, 0xA0
	.byte 0x58, 0x68, 0xAE, 0x71, 0x2D, 0x00, 0x12, 0x09, 0x1F, 0x0D, 0x06, 0xAC, 0xFF, 0xFD, 0x06, 0x1A
	.byte 0x00, 0xFD, 0x27, 0x00, 0x9B, 0x5F, 0x5A, 0x7E, 0x16, 0xFE, 0x13, 0x2E, 0x0F, 0x03, 0x0B, 0x2A
	.byte 0x10, 0xAB, 0xFF

	@ src/battle_message.c:177 sText_Someones
	.globl gText_Rom_5AB225
gText_Rom_5AB225: @ 0x085AB225
	.string "だれかの$"
	.if (. - gText_Rom_5AB225) > 0x5
	.error "gText_Rom_5AB225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB225) < 0x5
	.space 0x5 - (. - gText_Rom_5AB225)
	.endif

	@ src/battle_message.c:178 sText_Lanettes
	.globl gText_Rom_5AB22A
gText_Rom_5AB22A: @ 0x085AB22A
	.string "マユミの$"
	.if (. - gText_Rom_5AB22A) > 0x5
	.error "gText_Rom_5AB22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB22A) < 0x5
	.space 0x5 - (. - gText_Rom_5AB22A)
	.endif
	@ analyzed canonical ROM range 0x085AB22F-0x085AB250
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x06, 0x19, 0x00, 0x94, 0xAE, 0x60, 0x37, 0x00, 0x01, 0x10, 0x27, 0x0C, 0x08, 0xFE, 0x9F
	.byte 0x59, 0x73, 0x7E, 0x3E, 0x06, 0x2E, 0x16, 0x00, 0x5E, 0xAE, 0x98, 0x0B, 0x2A, 0x1F, 0x0D, 0xAB
	.byte 0xFB, 0xFF
	.globl gText_Rom_5AB251
gText_Rom_5AB251: @ 0x085AB251
	.string "あめが ふっている$"
	.if (. - gText_Rom_5AB251) != 0xa
	.error "gText_Rom_5AB251 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB257
	.set gText_Rom_5AB257, gText_Rom_5AB251 + 0x6

	@ src/battle_message.c:431 battle_message_line_431
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB25B
gText_Rom_5AB25B: @ 0x085AB25B
	.string "すなあらしが ふきあれている$"
	.if (. - gText_Rom_5AB25B) != 0xf
	.error "gText_Rom_5AB25B must retain its original byte length"
	.endif
	.globl gText_Rom_5AB266
	.set gText_Rom_5AB266, gText_Rom_5AB25B + 0xb

	@ src/battle_message.c:497 battle_message_line_497
	.globl gText_Rom_5AB26A
gText_Rom_5AB26A: @ 0x085AB26A
	.string "ボックスが いっぱいで\nこれいじょう つかまえられない!\p$"
	.if (. - gText_Rom_5AB26A) > 0x1e
	.error "gText_Rom_5AB26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB26A) < 0x1e
	.space 0x1e - (. - gText_Rom_5AB26A)
	.endif

	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl gText_Rom_5AB288
gText_Rom_5AB288: @ 0x085AB288
	.string "ナゾのみ$"
	.if (. - gText_Rom_5AB288) > 0x5
	.error "gText_Rom_5AB288 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB288) < 0x5
	.space 0x5 - (. - gText_Rom_5AB288)
	.endif

	@ asm/battle_message.s:1734 BattleStringExpandPlaceholders
	.globl gText_Rom_5AB28D
gText_Rom_5AB28D: @ 0x085AB28D
	.string "のみ$"
	.if (. - gText_Rom_5AB28D) > 0x3
	.error "gText_Rom_5AB28D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB28D) < 0x3
	.space 0x3 - (. - gText_Rom_5AB28D)
	.endif

	@ src/battle_message.c:449 battle_message_line_449
	.globl gText_Rom_5AB290
gText_Rom_5AB290: @ 0x085AB290
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nまひが なおった!$"
	.if (. - gText_Rom_5AB290) > 0x12
	.error "gText_Rom_5AB290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB290) < 0x12
	.space 0x12 - (. - gText_Rom_5AB290)
	.endif

	@ src/battle_message.c:450 battle_message_line_450
	.globl gText_Rom_5AB2A2
gText_Rom_5AB2A2: @ 0x085AB2A2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nどくが なおった!$"
	.if (. - gText_Rom_5AB2A2) > 0x12
	.error "gText_Rom_5AB2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2A2) < 0x12
	.space 0x12 - (. - gText_Rom_5AB2A2)
	.endif

	@ src/battle_message.c:451 battle_message_line_451
	.globl gText_Rom_5AB2B4
gText_Rom_5AB2B4: @ 0x085AB2B4
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nやけどが なおった!$"
	.if (. - gText_Rom_5AB2B4) > 0x13
	.error "gText_Rom_5AB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2B4) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2B4)
	.endif

	@ src/battle_message.c:452 battle_message_line_452
	.globl gText_Rom_5AB2C7
gText_Rom_5AB2C7: @ 0x085AB2C7
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこおりじょうたいが なおった!$"
	.if (. - gText_Rom_5AB2C7) > 0x18
	.error "gText_Rom_5AB2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2C7) < 0x18
	.space 0x18 - (. - gText_Rom_5AB2C7)
	.endif

	@ src/battle_message.c:453 battle_message_line_453
	.globl gText_Rom_5AB2DF
gText_Rom_5AB2DF: @ 0x085AB2DF
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nねむりから さめた!$"
	.if (. - gText_Rom_5AB2DF) > 0x13
	.error "gText_Rom_5AB2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2DF) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2DF)
	.endif

	@ src/battle_message.c:454 battle_message_line_454
	.globl gText_Rom_5AB2F2
gText_Rom_5AB2F2: @ 0x085AB2F2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこんらんが なおった!$"
	.if (. - gText_Rom_5AB2F2) > 0x14
	.error "gText_Rom_5AB2F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2F2) < 0x14
	.space 0x14 - (. - gText_Rom_5AB2F2)
	.endif
	@ analyzed canonical ROM range 0x085AB306-0x085AB31C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x16, 0x44, 0xFE, 0xFD, 0x00, 0x3D, 0x36, 0x03, 0x10, 0x02, 0x37
	.byte 0x00, 0x15, 0x05, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AB31D
gText_Rom_5AB31D: @ 0x085AB31D
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nじょうたいいじょうが なおった!$"
	.if (. - gText_Rom_5AB31D) > 0x19
	.error "gText_Rom_5AB31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB31D) < 0x19
	.space 0x19 - (. - gText_Rom_5AB31D)
	.endif
