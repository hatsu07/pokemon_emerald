	@ asm/fldeff_softboiled.s:234 sub_081615C4
	.globl gText_Rom_5C9E8F
gText_Rom_5C9E8F: @ 0x085C9E8F
	.string "{0xFD}{0x02}の　たいりょくが\n{0xFD}{0x03}　かいふくした{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9E8F) > 0x17
	.error "gText_Rom_5C9E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E8F) < 0x17
	.space 0x17 - (. - gText_Rom_5C9E8F)
	.endif
