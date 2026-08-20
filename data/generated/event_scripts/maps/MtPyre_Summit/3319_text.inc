	@ data/maps/MtPyre_Summit/scripts.inc:433 MtPyre_Summit_Text_Grunt1PostBattle
	.globl gText_Rom_217033
gText_Rom_217033: @ 0x08217033
	.string "たしかに おまえは つよいな……\nだけど おれたちは たくさん いるんだぞ!{EOS}"
	.if (. - gText_Rom_217033) > 0x27
	.error "gText_Rom_217033 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217033) < 0x27
	.space 0x27 - (. - gText_Rom_217033)
	.endif
