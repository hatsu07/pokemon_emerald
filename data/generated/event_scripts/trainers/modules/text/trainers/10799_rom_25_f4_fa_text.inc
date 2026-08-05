	@ data/text/trainers.inc:2282 Route121_Text_WalterPostRematch
	.globl gText_Rom_25F4FA
gText_Rom_25F4FA: @ 0x0825F4FA
	.string "あなたと その ポケモンなら\nがいこくでも つよいと いわれるでしょう!$"
	.if (. - gText_Rom_25F4FA) > 0x25
	.error "gText_Rom_25F4FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4FA) < 0x25
	.space 0x25 - (. - gText_Rom_25F4FA)
	.endif
