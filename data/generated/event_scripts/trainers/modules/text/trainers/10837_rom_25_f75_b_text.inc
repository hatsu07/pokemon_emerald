	@ data/text/trainers.inc:2339 Route121_Text_CristinIntro (+1 aliases)
	.globl gText_Rom_25F75B
gText_Rom_25F75B: @ 0x0825F75B
	.string "1にちに 5にんずつ\nたおす ことが にっかよ!\lあなたが その 5にんめ!{EOS}"
	.if (. - gText_Rom_25F75B) > 0x27
	.error "gText_Rom_25F75B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F75B) < 0x27
	.space 0x27 - (. - gText_Rom_25F75B)
	.endif
