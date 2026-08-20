	@ data/text/trainers.inc:2453 Route123_Text_JackiRegister
	.globl gText_Rom_25FBEF
gText_Rom_25FBEF: @ 0x0825FBEF
	.string "もういちど しょうぶして みたいわ!\nいいでしょう?{EOS}"
	.if (. - gText_Rom_25FBEF) > 0x1b
	.error "gText_Rom_25FBEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FBEF) < 0x1b
	.space 0x1b - (. - gText_Rom_25FBEF)
	.endif
