	@ src/strings.c:164 gText_TossHowManyVar1s
	.globl gText_Rom_5C9523
gText_Rom_5C9523: @ 0x085C9523
	.string "{STR_VAR_1}を\nいくつ すてますか?{EOS}"
	.if (. - gText_Rom_5C9523) > 0xf
	.error "gText_Rom_5C9523 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9523) < 0xf
	.space 0xf - (. - gText_Rom_5C9523)
	.endif

	@ src/strings.c:165 gText_ThrewAwayVar2Var1s
	.globl gText_Rom_5C9532
gText_Rom_5C9532: @ 0x085C9532
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてました{EOS}"
	.if (. - gText_Rom_5C9532) > 0xe
	.error "gText_Rom_5C9532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9532) < 0xe
	.space 0xe - (. - gText_Rom_5C9532)
	.endif

	@ src/strings.c:166 gText_ConfirmTossItems
	.globl gText_Rom_5C9540
gText_Rom_5C9540: @ 0x085C9540
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてても\nよろしいですか?{EOS}"
	.if (. - gText_Rom_5C9540) > 0x16
	.error "gText_Rom_5C9540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9540) < 0x16
	.space 0x16 - (. - gText_Rom_5C9540)
	.endif

	@ src/strings.c:167 gText_DadsAdvice
	.globl gText_Rom_5C9556
gText_Rom_5C9556: @ 0x085C9556
	.string "おとうさんの ことば……\n{PLAYER}! こういうものには\lつかいどきが あるんだ!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9556) > 0x29
	.error "gText_Rom_5C9556 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9556) < 0x29
	.space 0x29 - (. - gText_Rom_5C9556)
	.endif
