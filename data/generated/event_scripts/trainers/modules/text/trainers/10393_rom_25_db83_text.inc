	@ data/text/trainers.inc:1688 Route117_Text_IsaacRegister
	.globl gText_Rom_25DB83
gText_Rom_25DB83: @ 0x0825DB83
	.string "よーし ますます がんばって そだてるぞ!\nきみ そしたら みにきて くれるだろ?{EOS}"
	.if (. - gText_Rom_25DB83) > 0x2a
	.error "gText_Rom_25DB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB83) < 0x2a
	.space 0x2a - (. - gText_Rom_25DB83)
	.endif
