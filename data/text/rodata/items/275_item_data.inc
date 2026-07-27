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
	.incbin "baserom.gba", 0x5cd178, 0x27
	.globl gUnknown_85CD19F
gUnknown_85CD19F: @ 0x085CD19F

	@ asm/berry_tag_screen.s:1756 GetEventLoadMessage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD19F
gText_Rom_5CD19F: @ 0x085CD19F
	.string "エラーがはっせいしました\nしゅうりょうします$"
	.if (. - gText_Rom_5CD19F) != 0x17
	.error "gText_Rom_5CD19F must retain its original byte length"
	.endif
	.globl gText_Rom_5CD1B2
	.set gText_Rom_5CD1B2, gText_Rom_5CD19F + 0x13
	.incbin "baserom.gba", 0x5cd1b6, 0x2c

