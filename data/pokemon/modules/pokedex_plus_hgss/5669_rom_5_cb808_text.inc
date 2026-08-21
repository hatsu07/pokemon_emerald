	@ src/pokedex_plus_hgss.c:6512 pokedex_plus_hgss_line_6512 (+2 aliases)
	.globl gText_Rom_5CB808
gText_Rom_5CB808: @ 0x085CB808
	.string "ふめい{EOS}"
	.if (. - gText_Rom_5CB808) > 0x4
	.error "gText_Rom_5CB808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB808) < 0x4
	.space 0x4 - (. - gText_Rom_5CB808)
	.endif
