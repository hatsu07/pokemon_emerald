	@ data/text/trainers.inc:2225 Route120_Text_KeigoPostBattle
	.globl gText_Rom_25F2CA
gText_Rom_25F2CA: @ 0x0825F2CA
	.string "ニンジャの せんせいを さがして\nでしいり しようかな?$"
	.if (. - gText_Rom_25F2CA) > 0x1d
	.error "gText_Rom_25F2CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2CA) < 0x1d
	.space 0x1d - (. - gText_Rom_25F2CA)
	.endif
