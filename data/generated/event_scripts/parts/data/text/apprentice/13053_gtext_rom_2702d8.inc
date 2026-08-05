	@ data/text/apprentice.inc:496 gText_ApprenticeMonFirstThanks2
	.globl gText_Rom_2702D8
gText_Rom_2702D8: @ 0x082702D8
	.string "{STR_VAR_1} ですね!\nわかりました!\pじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_2702D8) > 0x18
	.error "gText_Rom_2702D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2702D8) < 0x18
	.space 0x18 - (. - gText_Rom_2702D8)
	.endif
