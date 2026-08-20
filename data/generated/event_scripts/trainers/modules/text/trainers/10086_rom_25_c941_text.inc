	@ data/text/trainers.inc:1244 Route113_Text_TiaPostBattle
	.globl gText_Rom_25C941
gText_Rom_25C941: @ 0x0825C941
	.string "ネネ『かざんばい けっこう たまったよ!\nもう しろいビードロ つくれるよ きっと!{EOS}"
	.if (. - gText_Rom_25C941) > 0x2b
	.error "gText_Rom_25C941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C941) < 0x2b
	.space 0x2b - (. - gText_Rom_25C941)
	.endif
