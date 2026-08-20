	@ data/text/trainers.inc:2933 Route127_Text_RogerPostBattle
	.globl gText_Rom_260FDA
gText_Rom_260FDA: @ 0x08260FDA
	.string "つりでは いとが からまることを\nマツリ と いうんだよ{EOS}"
	.if (. - gText_Rom_260FDA) > 0x1d
	.error "gText_Rom_260FDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260FDA) < 0x1d
	.space 0x1d - (. - gText_Rom_260FDA)
	.endif
