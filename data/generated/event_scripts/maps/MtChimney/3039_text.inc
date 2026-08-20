	@ data/maps/MtChimney/scripts.inc:581 MtChimney_Text_MaxieDefeat (+1 aliases)
	.globl gText_Rom_215207
gText_Rom_215207: @ 0x08215207
	.string "なに!?\pこの マツブサとも あろう ものが\nゆだん したか!?{EOS}"
	.if (. - gText_Rom_215207) > 0x21
	.error "gText_Rom_215207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215207) < 0x21
	.space 0x21 - (. - gText_Rom_215207)
	.endif
