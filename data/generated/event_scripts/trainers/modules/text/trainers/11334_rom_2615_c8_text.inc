	@ data/text/trainers.inc:3080 Route129_Text_ReedIntro (+1 aliases)
	.globl gText_Rom_2615C8
gText_Rom_2615C8: @ 0x082615C8
	.string "ホラホラ!\nとっとと しょうぶ しようぜ!{EOS}"
	.if (. - gText_Rom_2615C8) > 0x16
	.error "gText_Rom_2615C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2615C8) < 0x16
	.space 0x16 - (. - gText_Rom_2615C8)
	.endif
