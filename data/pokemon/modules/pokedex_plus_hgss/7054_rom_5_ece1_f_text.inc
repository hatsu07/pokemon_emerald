	@ src/pokedex_plus_hgss.c:176 sText_Stats_ERRATIC (+1 aliases)
	.globl sText_Stats_ERRATIC
sText_Stats_ERRATIC: @ 0x085ECE1F
	.string "きまぐれ{EOS}"
	.if (. - sText_Stats_ERRATIC) > 0x5
	.error "sText_Stats_ERRATIC may not grow beyond its original slot"
	.endif
	.if (. - sText_Stats_ERRATIC) < 0x5
	.space 0x5 - (. - sText_Stats_ERRATIC)
	.endif
