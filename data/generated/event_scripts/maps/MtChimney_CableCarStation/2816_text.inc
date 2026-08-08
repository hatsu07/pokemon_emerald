	@ data/maps/MtChimney_CableCarStation/scripts.inc:88 MtChimney_CableCarStation_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_212105
gText_Rom_212105: @ 0x08212105
	.string "では こちらに どうぞ!$"
	.if (. - gText_Rom_212105) > 0xd
	.error "gText_Rom_212105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212105) < 0xd
	.space 0xd - (. - gText_Rom_212105)
	.endif
