	@ data/text/apprentice.inc:604 gText_ApprenticeMonThanks4 (+1 aliases)
	.globl gText_Rom_271104
gText_Rom_271104: @ 0x08271104
	.string "{STR_VAR_1}ね ありがと!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!$"
	.if (. - gText_Rom_271104) > 0x3e
	.error "gText_Rom_271104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271104) < 0x3e
	.space 0x3e - (. - gText_Rom_271104)
	.endif
