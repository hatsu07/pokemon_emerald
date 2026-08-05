	@ data/text/apprentice.inc:307 gText_ApprenticeThanksNoHeldItem4
	.globl gText_Rom_26EFED
gText_Rom_26EFED: @ 0x0826EFED
	.string "それが よければ そうするわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26EFED) > 0x44
	.error "gText_Rom_26EFED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EFED) < 0x44
	.space 0x44 - (. - gText_Rom_26EFED)
	.endif
