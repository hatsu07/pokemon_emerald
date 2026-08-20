	@ data/text/trainers.inc:2648 Route124_Text_LilaNotEnoughMons (+2 aliases)
	.globl gText_Rom_260407
gText_Rom_260407: @ 0x08260407
	.string "カコ『あたしたちと たたかう つもり?\nポケモン 2ひき いないと ダメよ{EOS}"
	.if (. - gText_Rom_260407) > 0x26
	.error "gText_Rom_260407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260407) < 0x26
	.space 0x26 - (. - gText_Rom_260407)
	.endif
