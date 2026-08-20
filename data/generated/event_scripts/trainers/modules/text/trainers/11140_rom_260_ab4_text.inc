	@ data/text/trainers.inc:2792 Route125_Text_PresleyDefeat (+1 aliases)
	.globl gText_Rom_260AB4
gText_Rom_260AB4: @ 0x08260AB4
	.string "わかった\nなんで ここに いるか おしえてやるよ{EOS}"
	.if (. - gText_Rom_260AB4) > 0x19
	.error "gText_Rom_260AB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260AB4) < 0x19
	.space 0x19 - (. - gText_Rom_260AB4)
	.endif
