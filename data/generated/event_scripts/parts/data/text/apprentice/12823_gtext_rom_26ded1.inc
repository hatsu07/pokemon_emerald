	@ data/text/apprentice.inc:154 gText_ApprenticeLevelModeThanks8
	.globl gText_Rom_26DED1
gText_Rom_26DED1: @ 0x0826DED1
	.string "{STR_VAR_1} りょうかいですっ\nりょうかいで ありますっ!\lわたし かんげき です!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26DED1) > 0x43
	.error "gText_Rom_26DED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DED1) < 0x43
	.space 0x43 - (. - gText_Rom_26DED1)
	.endif
