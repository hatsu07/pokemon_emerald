	@ data/text/trainers.inc:1241 Route113_Text_TiaDefeat (+1 aliases)
	.globl gText_Rom_25C923
gText_Rom_25C923: @ 0x0825C923
	.string "ネネ『かてなかった\nつまんないから かざんばい あつめよ!{EOS}"
	.if (. - gText_Rom_25C923) > 0x1e
	.error "gText_Rom_25C923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C923) < 0x1e
	.space 0x1e - (. - gText_Rom_25C923)
	.endif
