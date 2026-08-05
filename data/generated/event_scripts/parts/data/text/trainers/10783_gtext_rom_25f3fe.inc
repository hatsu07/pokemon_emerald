	@ data/text/trainers.inc:2258 Route121_Text_VanessaDefeat (+1 aliases)
	.globl gText_Rom_25F3FE
gText_Rom_25F3FE: @ 0x0825F3FE
	.string "かわいがるの いみが ちがうわ!$"
	.if (. - gText_Rom_25F3FE) > 0x11
	.error "gText_Rom_25F3FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3FE) < 0x11
	.space 0x11 - (. - gText_Rom_25F3FE)
	.endif
