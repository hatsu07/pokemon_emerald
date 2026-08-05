	@ src/strings.c:874 gJPText_NewTrainerHasComeToHoenn
	.globl gText_Rom_5CD01D
gText_Rom_5CD01D: @ 0x085CD01D
	.string "あらたな トレーナーが\nホウエンに やってきた!$"
	.if (. - gText_Rom_5CD01D) > 0x19
	.error "gText_Rom_5CD01D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD01D) < 0x19
	.space 0x19 - (. - gText_Rom_5CD01D)
	.endif
	.globl gUnknown_85CD036
gUnknown_85CD036: @ 0x085CD036

	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gText_Rom_5CD036
gText_Rom_5CD036: @ 0x085CD036
	.string "しばらく おまちください$"
	.if (. - gText_Rom_5CD036) > 0xd
	.error "gText_Rom_5CD036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD036) < 0xd
	.space 0xd - (. - gText_Rom_5CD036)
	.endif
	.globl gUnknown_85CD043
gUnknown_85CD043: @ 0x085CD043

	@ src/strings.c:876 gJPText_WriteErrorUnableToSaveData
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD043
gText_Rom_5CD043: @ 0x085CD043
	.string "かきこみ エラー です\nデータが ほぞん できませんでした$"
	.if (. - gText_Rom_5CD043) != 0x1e
	.error "gText_Rom_5CD043 must retain its original byte length"
	.endif
