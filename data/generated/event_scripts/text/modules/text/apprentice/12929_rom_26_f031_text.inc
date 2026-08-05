	@ data/text/apprentice.inc:310 gText_ApprenticeThanksHeldItem4
	.globl gText_Rom_26F031
gText_Rom_26F031: @ 0x0826F031
	.string "{STR_VAR_1}か\nわるく ないわね そうするわ!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26F031) > 0x48
	.error "gText_Rom_26F031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F031) < 0x48
	.space 0x48 - (. - gText_Rom_26F031)
	.endif
