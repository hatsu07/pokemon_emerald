	.globl sText_TooImportantToToss

	@ src/player_pc.c:179 sText_TooImportantToToss
	.globl sText_TooImportantToToss
sText_TooImportantToToss: @ 0x085C9506
	.string "これは とても\nたいせつなモノ なので\nすてられません!{EOS}"
	.if (. - sText_TooImportantToToss) > 0x1d
	.error "sText_TooImportantToToss may not grow beyond its original slot"
	.endif
	.if (. - sText_TooImportantToToss) < 0x1d
	.space 0x1d - (. - sText_TooImportantToToss)
	.endif
	.globl gText_TossHowManyVar1s

	@ src/strings.c:164 gText_TossHowManyVar1s
	.globl gText_TossHowManyVar1s
gText_TossHowManyVar1s: @ 0x085C9523
	.string "{STR_VAR_1}を\nいくつ すてますか?{EOS}"
	.if (. - gText_TossHowManyVar1s) > 0xf
	.error "gText_TossHowManyVar1s may not grow beyond its original slot"
	.endif
	.if (. - gText_TossHowManyVar1s) < 0xf
	.space 0xf - (. - gText_TossHowManyVar1s)
	.endif

	@ src/strings.c:165 gText_ThrewAwayVar2Var1s
	.globl gText_ThrewAwayVar2Var1s
gText_ThrewAwayVar2Var1s: @ 0x085C9532
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてました{EOS}"
	.if (. - gText_ThrewAwayVar2Var1s) > 0xe
	.error "gText_ThrewAwayVar2Var1s may not grow beyond its original slot"
	.endif
	.if (. - gText_ThrewAwayVar2Var1s) < 0xe
	.space 0xe - (. - gText_ThrewAwayVar2Var1s)
	.endif

	@ src/strings.c:166 gText_ConfirmTossItems
	.globl gText_ConfirmTossItems
gText_ConfirmTossItems: @ 0x085C9540
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてても\nよろしいですか?{EOS}"
	.if (. - gText_ConfirmTossItems) > 0x16
	.error "gText_ConfirmTossItems may not grow beyond its original slot"
	.endif
	.if (. - gText_ConfirmTossItems) < 0x16
	.space 0x16 - (. - gText_ConfirmTossItems)
	.endif

	@ src/strings.c:167 gText_DadsAdvice
	.globl gText_DadsAdvice
gText_DadsAdvice: @ 0x085C9556
	.string "おとうさんの ことば……\n{PLAYER}! こういうものには\lつかいどきが あるんだ!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_DadsAdvice) > 0x29
	.error "gText_DadsAdvice may not grow beyond its original slot"
	.endif
	.if (. - gText_DadsAdvice) < 0x29
	.space 0x29 - (. - gText_DadsAdvice)
	.endif
