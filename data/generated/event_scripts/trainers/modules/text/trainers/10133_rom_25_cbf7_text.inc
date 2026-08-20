	@ data/text/trainers.inc:1313 Route114_Text_NancyIntro (+1 aliases)
	.globl gText_Rom_25CBF7
gText_Rom_25CBF7: @ 0x0825CBF7
	.string "しょくごの うんどう!\nわたしと しょうぶ しましょうよ!{EOS}"
	.if (. - gText_Rom_25CBF7) > 0x1e
	.error "gText_Rom_25CBF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CBF7) < 0x1e
	.space 0x1e - (. - gText_Rom_25CBF7)
	.endif
