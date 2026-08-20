	@ data/text/trainers.inc:2252 Route120_Text_LeonelPostBattle
	.globl gText_Rom_25F3C0
gText_Rom_25F3C0: @ 0x0825F3C0
	.string "すきな ポケモン だけで\nつよいって いうのが さいこうだね{EOS}"
	.if (. - gText_Rom_25F3C0) > 0x1f
	.error "gText_Rom_25F3C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3C0) < 0x1f
	.space 0x1f - (. - gText_Rom_25F3C0)
	.endif
