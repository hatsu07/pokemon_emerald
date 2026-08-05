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
