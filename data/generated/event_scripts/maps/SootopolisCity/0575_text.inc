	@ data/maps/SootopolisCity/scripts.inc:1501 SootopolisCity_Text_KnowWhatsNeededToHelpHim
	.globl gText_Rom_1E369B
gText_Rom_1E369B: @ 0x081E369B
	.string "ダイゴ『きみなら かれの ちからに\nなって あげられると おもうよ……{EOS}"
	.if (. - gText_Rom_1E369B) > 0x24
	.error "gText_Rom_1E369B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E369B) < 0x24
	.space 0x24 - (. - gText_Rom_1E369B)
	.endif
