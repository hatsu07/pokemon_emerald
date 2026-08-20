	@ data/text/trainers.inc:1304 Route114_Text_ShaneIntro (+1 aliases)
	.globl gText_Rom_25CB93
gText_Rom_25CB93: @ 0x0825CB93
	.string "キャンプの たのしみと いえば\nつりに はなびに きもだめし!\pだけど いちばんは\nポケモンしょうぶ だね!{EOS}"
	.if (. - gText_Rom_25CB93) > 0x37
	.error "gText_Rom_25CB93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB93) < 0x37
	.space 0x37 - (. - gText_Rom_25CB93)
	.endif
