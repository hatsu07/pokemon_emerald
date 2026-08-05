	@ data/text/trainers.inc:857 Route110_Text_IsabelRematchIntro (+1 aliases)
	.globl gText_Rom_25B8BF
gText_Rom_25B8BF: @ 0x0825B8BF
	.string "おほほ! だいじな ポケモンなら\nなんどだって じまん しますわ!$"
	.if (. - gText_Rom_25B8BF) > 0x22
	.error "gText_Rom_25B8BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B8BF) < 0x22
	.space 0x22 - (. - gText_Rom_25B8BF)
	.endif
