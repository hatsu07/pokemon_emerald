	@ data/text/trainers.inc:2471 Route123_Text_MiuPostBattle
	.globl gText_Rom_25FC7A
gText_Rom_25FC7A: @ 0x0825FC7A
	.string "ミウ『トレーナーさんの ポケモン\nなかが いいから つよいんですね!{EOS}"
	.if (. - gText_Rom_25FC7A) > 0x23
	.error "gText_Rom_25FC7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC7A) < 0x23
	.space 0x23 - (. - gText_Rom_25FC7A)
	.endif
