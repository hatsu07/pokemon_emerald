	@ data/text/trainers.inc:806 Route110_Text_JaclynIntro (+1 aliases)
	.globl gText_Rom_25B69E
gText_Rom_25B69E: @ 0x0825B69E
	.string "おほほほほっ!\nわたくしの ミラクルを みせてあげるわ!{EOS}"
	.if (. - gText_Rom_25B69E) > 0x1d
	.error "gText_Rom_25B69E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B69E) < 0x1d
	.space 0x1d - (. - gText_Rom_25B69E)
	.endif
