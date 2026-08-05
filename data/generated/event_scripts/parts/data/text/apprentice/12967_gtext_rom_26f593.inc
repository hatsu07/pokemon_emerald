	@ data/text/apprentice.inc:367 gText_ApprenticeThanksNoHeldItem8
	.globl gText_Rom_26F593
gText_Rom_26F593: @ 0x0826F593
	.string "りょうかいで ありますっ!\nどうぐ なしで がんばるで あります!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26F593) > 0x3e
	.error "gText_Rom_26F593 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F593) < 0x3e
	.space 0x3e - (. - gText_Rom_26F593)
	.endif
