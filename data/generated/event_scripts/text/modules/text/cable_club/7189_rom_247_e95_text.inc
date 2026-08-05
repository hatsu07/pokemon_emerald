	@ data/text/cable_club.inc:87 CableClub_Text_GotToLookAtTrainerCard
	.globl gText_Rom_247E95
gText_Rom_247E95: @ 0x08247E95
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!$"
	.if (. - gText_Rom_247E95) > 0x17
	.error "gText_Rom_247E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E95) < 0x17
	.space 0x17 - (. - gText_Rom_247E95)
	.endif
