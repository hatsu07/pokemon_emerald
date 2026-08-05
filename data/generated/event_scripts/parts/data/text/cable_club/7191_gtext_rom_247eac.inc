	@ data/text/cable_club.inc:90 CableClub_Text_GotToLookAtColoredTrainerCard
	.globl gText_Rom_247EAC
gText_Rom_247EAC: @ 0x08247EAC
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!\p…{STR_VAR_2}カードだ!$"
	.if (. - gText_Rom_247EAC) > 0x20
	.error "gText_Rom_247EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247EAC) < 0x20
	.space 0x20 - (. - gText_Rom_247EAC)
	.endif
