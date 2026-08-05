	@ data/text/trainers.inc:2393 Route121_Text_MarcelPostBattle
	.globl gText_Rom_25F968
gText_Rom_25F968: @ 0x0825F968
	.string "コンテストの まえに\nもうすこし きたえないと ダメかな$"
	.if (. - gText_Rom_25F968) > 0x1d
	.error "gText_Rom_25F968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F968) < 0x1d
	.space 0x1d - (. - gText_Rom_25F968)
	.endif
