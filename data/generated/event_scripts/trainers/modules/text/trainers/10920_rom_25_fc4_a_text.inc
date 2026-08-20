	@ data/text/trainers.inc:2465 Route123_Text_MiuIntro (+1 aliases)
	.globl gText_Rom_25FC4A
gText_Rom_25FC4A: @ 0x0825FC4A
	.string "ミウ『トレーナーさんの ポケモン\nまけても なかないで くださいね!{EOS}"
	.if (. - gText_Rom_25FC4A) > 0x23
	.error "gText_Rom_25FC4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC4A) < 0x23
	.space 0x23 - (. - gText_Rom_25FC4A)
	.endif
