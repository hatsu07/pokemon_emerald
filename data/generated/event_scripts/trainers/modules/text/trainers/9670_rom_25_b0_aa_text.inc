	@ data/text/trainers.inc:653 Route109_Text_AustinaDefeated (+1 aliases)
	.globl gText_Rom_25B0AA
gText_Rom_25B0AA: @ 0x0825B0AA
	.string "うきわが あるから まけちゃったのかな?{EOS}"
	.if (. - gText_Rom_25B0AA) > 0x15
	.error "gText_Rom_25B0AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0AA) < 0x15
	.space 0x15 - (. - gText_Rom_25B0AA)
	.endif
