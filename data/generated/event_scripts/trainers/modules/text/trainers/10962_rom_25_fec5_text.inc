	@ data/text/trainers.inc:2528 Route123_Text_JazmynIntro (+1 aliases)
	.globl gText_Rom_25FEC5
gText_Rom_25FEC5: @ 0x0825FEC5
	.string "みるからに つよそうな あなたを\nたおせば じしんが つくわね!{EOS}"
	.if (. - gText_Rom_25FEC5) > 0x21
	.error "gText_Rom_25FEC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FEC5) < 0x21
	.space 0x21 - (. - gText_Rom_25FEC5)
	.endif
