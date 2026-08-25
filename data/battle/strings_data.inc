.if .L__inc_fragment_select_2e8c2cc88ffd == 1
	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gMenuText_Confirm_Copy_Rom_57AA98
gMenuText_Confirm_Copy_Rom_57AA98: @ 0x0857AA98
	.string "けってい{EOS}"
	.if (. - gMenuText_Confirm_Copy_Rom_57AA98) > 0x5
	.error "gMenuText_Confirm_Copy_Rom_57AA98 may not grow beyond its original slot"
	.endif
	.if (. - gMenuText_Confirm_Copy_Rom_57AA98) < 0x5
	.space 0x5 - (. - gMenuText_Confirm_Copy_Rom_57AA98)
	.endif
	.space 0x3, 0x00
	@ Resolved pointer table; original ROM range 0x57AAA0..0x57AAA7.
	.4byte OAM_SIZE_3
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
.elseif .L__inc_fragment_select_2e8c2cc88ffd == 2
	@ src/strings.c:974 gText_Hoenn
	.globl gText_Hoenn
gText_Hoenn: @ 0x085C611C
	.string "ホウエンちほう{EOS}"
	.if (. - gText_Hoenn) > 0x8
	.error "gText_Hoenn may not grow beyond its original slot"
	.endif
	.if (. - gText_Hoenn) < 0x8
	.space 0x8 - (. - gText_Hoenn)
	.endif
.endif
