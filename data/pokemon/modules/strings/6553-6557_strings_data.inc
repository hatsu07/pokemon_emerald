	@ src/strings.c:874 gJPText_NewTrainerHasComeToHoenn
	.globl gJPText_NewTrainerHasComeToHoenn
gJPText_NewTrainerHasComeToHoenn: @ 0x085CD01D
	.string "あらたな トレーナーが\nホウエンに やってきた!{EOS}"
	.if (. - gJPText_NewTrainerHasComeToHoenn) > 0x19
	.error "gJPText_NewTrainerHasComeToHoenn may not grow beyond its original slot"
	.endif
	.if (. - gJPText_NewTrainerHasComeToHoenn) < 0x19
	.space 0x19 - (. - gJPText_NewTrainerHasComeToHoenn)
	.endif

	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gText_Rom_5CD036
gText_Rom_5CD036: @ 0x085CD036
	.string "しばらく おまちください{EOS}"
	.if (. - gText_Rom_5CD036) > 0xd
	.error "gText_Rom_5CD036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD036) < 0xd
	.space 0xd - (. - gText_Rom_5CD036)
	.endif

	@ src/strings.c:876 gJPText_WriteErrorUnableToSaveData
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_WriteErrorUnableToSaveData
gJPText_WriteErrorUnableToSaveData: @ 0x085CD043
	.string "かきこみ エラー です\nデータが ほぞん できませんでした{EOS}"
	.if (. - gJPText_WriteErrorUnableToSaveData) != 0x1e
	.error "gJPText_WriteErrorUnableToSaveData must retain its original byte length"
	.endif
