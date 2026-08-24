	.globl gText_Appeal

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Appeal
gText_Appeal: @ 0x085CA3AB
	.string "アピール{EOS}"
	.if (. - gText_Appeal) > 0x5
	.error "gText_Appeal may not grow beyond its original slot"
	.endif
	.if (. - gText_Appeal) < 0x5
	.space 0x5 - (. - gText_Appeal)
	.endif
	.globl gText_Jam

	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_Jam
gText_Jam: @ 0x085CA3B0
	.string "ぼうがい{EOS}"
	.if (. - gText_Jam) > 0x5
	.error "gText_Jam may not grow beyond its original slot"
	.endif
	.if (. - gText_Jam) < 0x5
	.space 0x5 - (. - gText_Jam)
	.endif
	.globl gText_Rom_5CA3B5

	@ src/battle_debug.c:321 battle_debug_line_321 (+2 aliases)
	.globl gText_Rom_5CA3B5
gText_Rom_5CA3B5: @ 0x085CA3B5
	.string "じょうたい{EOS}"
	.if (. - gText_Rom_5CA3B5) > 0x6
	.error "gText_Rom_5CA3B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3B5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA3B5)
	.endif
	.globl gText_ExpPoints

	@ src/strings.c:383 gText_ExpPoints
	.globl gText_ExpPoints
gText_ExpPoints: @ 0x085CA3BB
	.string "げんざいのけいけんち{EOS}"
	.if (. - gText_ExpPoints) > 0xb
	.error "gText_ExpPoints may not grow beyond its original slot"
	.endif
	.if (. - gText_ExpPoints) < 0xb
	.space 0xb - (. - gText_ExpPoints)
	.endif

	@ src/strings.c:384 gText_NextLv
	.globl gText_NextLv
gText_NextLv: @ 0x085CA3C6
	.string "レベルアップまで{EOS}"
	.if (. - gText_NextLv) > 0x9
	.error "gText_NextLv may not grow beyond its original slot"
	.endif
	.if (. - gText_NextLv) < 0x9
	.space 0x9 - (. - gText_NextLv)
	.endif
