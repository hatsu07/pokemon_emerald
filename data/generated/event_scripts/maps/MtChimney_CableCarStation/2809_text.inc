	@ data/maps/MtChimney_CableCarStation/scripts.inc:88 MtChimney_CableCarStation_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_211FF8
gText_Rom_211FF8: @ 0x08211FF8
	.string "では こちらに どうぞ!{EOS}"
	.if (. - gText_Rom_211FF8) > 0xd
	.error "gText_Rom_211FF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211FF8) < 0xd
	.space 0xd - (. - gText_Rom_211FF8)
	.endif
