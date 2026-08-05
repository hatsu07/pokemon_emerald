	@ data/text/trainers.inc:2813 Route126_Text_BarryPostBattle
	.globl gText_Rom_260B8E
gText_Rom_260B8E: @ 0x08260B8E
	.string "まいにち およいでる おかげで\nみよ! この きんにくっ!!$"
	.if (. - gText_Rom_260B8E) > 0x1f
	.error "gText_Rom_260B8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260B8E) < 0x1f
	.space 0x1f - (. - gText_Rom_260B8E)
	.endif
