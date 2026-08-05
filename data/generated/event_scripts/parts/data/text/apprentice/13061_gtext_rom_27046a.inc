	@ data/text/apprentice.inc:508 gText_ApprenticeMonFirstThanks4
	.globl gText_Rom_27046A
gText_Rom_27046A: @ 0x0827046A
	.string "{STR_VAR_1}ね いいわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_27046A) > 0x3d
	.error "gText_Rom_27046A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27046A) < 0x3d
	.space 0x3d - (. - gText_Rom_27046A)
	.endif
