	@ data/text/trainers.inc:2351 Route121_Text_CristinRematchIntro (+1 aliases)
	.globl gText_Rom_25F7DC
gText_Rom_25F7DC: @ 0x0825F7DC
	.string "1にちに 10にんずつ\nたおす ことが にっかよ!\lあなたが その 10にんめ!{EOS}"
	.if (. - gText_Rom_25F7DC) > 0x29
	.error "gText_Rom_25F7DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F7DC) < 0x29
	.space 0x29 - (. - gText_Rom_25F7DC)
	.endif
