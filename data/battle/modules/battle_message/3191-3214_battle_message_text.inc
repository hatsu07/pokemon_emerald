	@ src/battle_message.c:470 battle_message_line_470
	.globl gText_Rom_5AA448
gText_Rom_5AA448: @ 0x085AA448
	.string "でんきの いりょくが よわまった!{EOS}"
	.if (. - gText_Rom_5AA448) > 0x12
	.error "gText_Rom_5AA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA448) < 0x12
	.space 0x12 - (. - gText_Rom_5AA448)
	.endif

	@ src/battle_message.c:471 battle_message_line_471
	.globl gText_Rom_5AA45A
gText_Rom_5AA45A: @ 0x085AA45A
	.string "ほのおの いりょくが よわまった!{EOS}"
	.if (. - gText_Rom_5AA45A) > 0x12
	.error "gText_Rom_5AA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA45A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA45A)
	.endif
	@ analyzed canonical ROM range 0x085AA46C-0x085AA47B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x16, 0x2D, 0xFE, 0x1B, 0x2B, 0x50, 0x13, 0x07, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA47C
gText_Rom_5AA47C: @ 0x085AA47C
	.string "ここちよい かおりが ひろがった!{EOS}"
	.if (. - gText_Rom_5AA47C) > 0x12
	.error "gText_Rom_5AA47C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA47C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA47C)
	.endif
	@ analyzed canonical ROM range 0x085AA48E-0x085AA4B4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0A, 0x0A, 0x44, 0x1A, 0x00, 0x45, 0x03, 0x39, 0x2D, 0x00, 0x12, 0x06, 0x03, 0x0A, 0x14, 0x1A
	.byte 0xFE, 0x44, 0x07, 0x1F, 0x0E, 0x2E, 0xAB, 0xFC, 0x08, 0x40, 0xFF, 0xFD, 0x16, 0x1A, 0x00, 0xFD
	.byte 0x13, 0x16, 0x1A, 0xFE, 0xFD, 0x00, 0xFF
	.globl gText_Rom_5AA4B5
gText_Rom_5AA4B5: @ 0x085AA4B5
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}を つかって\nはりきり だした!{EOS}"
	.if (. - gText_Rom_5AA4B5) > 0x17
	.error "gText_Rom_5AA4B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4B5) < 0x17
	.space 0x17 - (. - gText_Rom_5AA4B5)
	.endif
	@ analyzed canonical ROM range 0x085AA4CC-0x085AA4CF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00
	.globl gText_Rom_5AA4D0
gText_Rom_5AA4D0: @ 0x085AA4D0
	.string "しゅうちゅうりょくが\nとぎれて わざが だせなかった!{EOS}"
	.if (. - gText_Rom_5AA4D0) != 0x1c
	.error "gText_Rom_5AA4D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA4E7
	.set gText_Rom_5AA4E7, gText_Rom_5AA4D0 + 0x17

	@ src/battle_message.c:494 battle_message_line_494
	.globl gText_Rom_5AA4EC
gText_Rom_5AA4EC: @ 0x085AA4EC
	.string "{B_DEF_NAME_WITH_PREFIX}は せんとうに\nひきずりだされた!\p{EOS}"
	.if (. - gText_Rom_5AA4EC) > 0x15
	.error "gText_Rom_5AA4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4EC) < 0x15
	.space 0x15 - (. - gText_Rom_5AA4EC)
	.endif

	@ src/battle_message.c:503 battle_message_line_503
	.globl gText_Rom_5AA501
gText_Rom_5AA501: @ 0x085AA501
	.string "かべが こわれた!{EOS}"
	.if (. - gText_Rom_5AA501) > 0xa
	.error "gText_Rom_5AA501 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA501) < 0xa
	.space 0xa - (. - gText_Rom_5AA501)
	.endif

	@ src/battle_message.c:509 battle_message_line_509
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA50B
gText_Rom_5AA50B: @ 0x085AA50B
	.string "しかし こうかが なかった!{EOS}"
	.if (. - gText_Rom_5AA50B) != 0xf
	.error "gText_Rom_5AA50B must retain its original byte length"
	.endif
	.globl gText_Rom_5AA515
	.set gText_Rom_5AA515, gText_Rom_5AA50B + 0xa
	@ ANALYSIS: RAW_RANGE offset=0x5AA51A, size=0x82
	.byte 0xFD, 0x12, 0x1A, 0x00, 0x41, 0x0D, 0x0A, 0x14, 0x19, 0x00, 0x44, 0x07, 0x29, 0xFE, 0x2C, 0x3C
	.byte 0x37, 0x00, 0x15, 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A, 0x00, 0x06, 0x15, 0x0C, 0x46, 0x28
	.byte 0x44, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x41, 0x0E, 0x15, 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A
	.byte 0x00, 0x02, 0x11, 0x34, 0x23, 0x2E, 0x2D, 0x00, 0x12, 0x09, 0x27, 0x2A, 0x10, 0x19, 0x44, 0xFE
	.byte 0x12, 0x43, 0x09, 0x13, 0x00, 0x05, 0x15, 0x3D, 0x00, 0x2C, 0x3C, 0x37, 0x00, 0x41, 0x0E, 0x15
	.byte 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A, 0x00, 0x11, 0x36, 0x03, 0x1A, 0x12, 0x00, 0x0B, 0x2A
	.byte 0x13, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x41, 0x0E, 0x15, 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A
	.byte 0x00, 0x1C, 0x03, 0x02, 0x2E, 0x44, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x41, 0x0E, 0x15, 0x02, 0xAB
	.byte 0xFB, 0xFF

	@ src/battle_message.c:365 battle_message_line_365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA59C
gText_Rom_5AA59C: @ 0x085AA59C
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nあめが ふりはじめた!{EOS}"
	.if (. - gText_Rom_5AA59C) != 0x14
	.error "gText_Rom_5AA59C must retain its original byte length"
	.endif
	.globl gText_Rom_5AA5A4
	.set gText_Rom_5AA5A4, gText_Rom_5AA59C + 0x8
	@ ANALYSIS: RAW_RANGE offset=0x5AA5B0, size=0xE
	.byte 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0x0D, 0x46, 0x24, 0x0B, 0x37, 0x00

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA5BE
gText_Rom_5AA5BE: @ 0x085AA5BE
	.string "あがった！{EOS}"
	.if (. - gText_Rom_5AA5BE) > 0x6
	.error "gText_Rom_5AA5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA5BE) < 0x6
	.space 0x6 - (. - gText_Rom_5AA5BE)
	.endif

	@ src/battle_message.c:366 battle_message_line_366
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA5C4
gText_Rom_5AA5C4: @ 0x085AA5C4
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_DEF_ABILITY}で\nきかなかった!{EOS}"
	.if (. - gText_Rom_5AA5C4) != 0x10
	.error "gText_Rom_5AA5C4 must retain its original byte length"
	.endif
