	@ asm/party_menu.s:12528 GetMedicineItemEffectMessage
	.globl gText_Rom_5C9EA6
gText_Rom_5C9EA6: @ 0x085C9EA6
	.string "{0xFD}{0x02}の　どくは\nきれい　さっぱり　なくなった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9EA6) > 0x1a
	.error "gText_Rom_5C9EA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EA6) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9EA6)
	.endif
