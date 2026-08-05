	@ data/text/apprentice.inc:592 gText_ApprenticeMonThanks2
	.globl gText_Rom_270F68
gText_Rom_270F68: @ 0x08270F68
	.string "{STR_VAR_1} ですね!\nわかりました!\pよし さっそく\nつよい {STR_VAR_1}を つかまえるぞ!\pじゃあ また!$"
	.if (. - gText_Rom_270F68) > 0x30
	.error "gText_Rom_270F68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270F68) < 0x30
	.space 0x30 - (. - gText_Rom_270F68)
	.endif
