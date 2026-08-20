	@ data/text/trainers.inc:635 Route109_Text_LolaPostBattle
	.globl gText_Rom_25AFF4
gText_Rom_25AFF4: @ 0x0825AFF4
	.string "おそらの うえから すなはまを みたら\nおはなばたけ みたいに みえるのよ!{EOS}"
	.if (. - gText_Rom_25AFF4) > 0x27
	.error "gText_Rom_25AFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFF4) < 0x27
	.space 0x27 - (. - gText_Rom_25AFF4)
	.endif
