	@ asm/berry_tag_screen.s:1746 GetEventLoadMessage
	.globl gText_Rom_5CD159
gText_Rom_5CD159: @ 0x085CD159
	.string "できごとの　よみこみが\nせいじょうに　しゅうりょう　しました$"
	.if (. - gText_Rom_5CD159) > 0x1f
	.error "gText_Rom_5CD159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD159) < 0x1f
	.space 0x1f - (. - gText_Rom_5CD159)
	.endif

	.globl gText_MysteryEventCannotConnect
gText_MysteryEventCannotConnect: @ 0x085CD178
	.string "せつぞく　できない　ききの　ようです\nただしい　ききと　やりなおしてください$"
	.if (. - gText_MysteryEventCannotConnect) != 0x27
	.error "gText_MysteryEventCannotConnect must retain its original byte length"
	.endif


	@ asm/berry_tag_screen.s:1756 GetEventLoadMessage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD19F
gText_Rom_5CD19F: @ 0x085CD19F
	.string "エラーがはっせいしました\nしゅうりょうします$"
	.if (. - gText_Rom_5CD19F) != 0x17
	.error "gText_Rom_5CD19F must retain its original byte length"
	.endif
