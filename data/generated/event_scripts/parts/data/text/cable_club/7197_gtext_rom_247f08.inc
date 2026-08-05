	@ data/text/cable_club.inc:99 RecordCorner_Text_ThanksForComing
	.globl gText_Rom_247F08
gText_Rom_247F08: @ 0x08247F08
	.string "ごりよう ありがとう ございました$"
	.if (. - gText_Rom_247F08) > 0x12
	.error "gText_Rom_247F08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F08) < 0x12
	.space 0x12 - (. - gText_Rom_247F08)
	.endif
