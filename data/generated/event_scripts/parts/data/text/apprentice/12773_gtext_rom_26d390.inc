	@ data/text/apprentice.inc:82 gText_ApprenticeLevelModeThanks2
	.globl gText_Rom_26D390
gText_Rom_26D390: @ 0x0826D390
	.string "{STR_VAR_1} ですね! わかりました!\nじゃあ また しつもんが あったら\lここに くるので おしえて ください!"
	.byte EOS
	.if (. - gText_Rom_26D390) > 0x36
	.error "gText_Rom_26D390 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D390) < 0x36
	.space 0x36 - (. - gText_Rom_26D390)
	.endif
