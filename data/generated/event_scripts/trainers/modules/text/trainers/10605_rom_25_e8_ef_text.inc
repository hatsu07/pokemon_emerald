	@ data/text/trainers.inc:1997 Route119_Text_JacksonPostBattle
	.globl gText_Rom_25E8EF
gText_Rom_25E8EF: @ 0x0825E8EF
	.string "ぶんめい から はなれて\nにんげんの やせいを めざめさせる!\lそれが オレたちの テーマさ!{EOS}"
	.if (. - gText_Rom_25E8EF) > 0x30
	.error "gText_Rom_25E8EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E8EF) < 0x30
	.space 0x30 - (. - gText_Rom_25E8EF)
	.endif
