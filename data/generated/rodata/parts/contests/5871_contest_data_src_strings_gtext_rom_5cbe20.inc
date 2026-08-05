	@ src/strings.c:634 gText_CheckCompleted
	.globl gText_Rom_5CBE20
gText_Rom_5CBE20: @ 0x085CBE20
	.string "けんさが しゅうりょうしました!\nもういちど レポートを かきこみます\nしばらくおまちください$"
	.if (. - gText_Rom_5CBE20) > 0x30
	.error "gText_Rom_5CBE20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBE20) < 0x30
	.space 0x30 - (. - gText_Rom_5CBE20)
	.endif
