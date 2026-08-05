	@ data/text/trainers.inc:2726 Route125_Text_TanyaIntro (+1 aliases)
	.globl gText_Rom_2607C0
gText_Rom_2607C0: @ 0x082607C0
	.string "およぎ つかれちゃった!\nわたしと ひとしょうぶ どう?$"
	.if (. - gText_Rom_2607C0) > 0x1d
	.error "gText_Rom_2607C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2607C0) < 0x1d
	.space 0x1d - (. - gText_Rom_2607C0)
	.endif
