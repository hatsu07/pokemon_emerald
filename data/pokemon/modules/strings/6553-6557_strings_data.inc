	.globl gText_Rom_5CD010

	@ asm/ereader_screen.s:807 sub_081D4704
	.globl gText_Rom_5CD010
gText_Rom_5CD010: @ 0x085CD010
	.string "つうしん　しゅうりょう！{EOS}"
	.if (. - gText_Rom_5CD010) > 0xd
	.error "gText_Rom_5CD010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD010) < 0xd
	.space 0xd - (. - gText_Rom_5CD010)
	.endif
	.globl gJPText_NewTrainerHasComeToHoenn

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
	.globl gJPText_PleaseWaitAMoment
gJPText_PleaseWaitAMoment: @ 0x085CD036
	.string "しばらく おまちください{EOS}"
	.if (. - gJPText_PleaseWaitAMoment) > 0xd
	.error "gJPText_PleaseWaitAMoment may not grow beyond its original slot"
	.endif
	.if (. - gJPText_PleaseWaitAMoment) < 0xd
	.space 0xd - (. - gJPText_PleaseWaitAMoment)
	.endif

	@ src/strings.c:876 gJPText_WriteErrorUnableToSaveData
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_WriteErrorUnableToSaveData
gJPText_WriteErrorUnableToSaveData: @ 0x085CD043
	.string "かきこみ エラー です\nデータが ほぞん できませんでした{EOS}"
	.if (. - gJPText_WriteErrorUnableToSaveData) != 0x1e
	.error "gJPText_WriteErrorUnableToSaveData must retain its original byte length"
	.endif
