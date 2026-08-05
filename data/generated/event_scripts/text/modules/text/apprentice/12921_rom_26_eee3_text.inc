	@ data/text/apprentice.inc:298 gText_ApprenticeItemAlreadyRecommended3
	.globl gText_Rom_26EEE3
gText_Rom_26EEE3: @ 0x0826EEE3
	.string "え…… それは\nまえに おしえて いただいたと おもいます\pあ もしかして\nあたしが {STR_VAR_1}を\lつかいこなせて いないから ですか?\pそれとも {STR_VAR_2}には なにも\nもたせるなと いう こと でしょうか?"
	.byte EOS
	.if (. - gText_Rom_26EEE3) > 0x64
	.error "gText_Rom_26EEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EEE3) < 0x64
	.space 0x64 - (. - gText_Rom_26EEE3)
	.endif
