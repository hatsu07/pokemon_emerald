	@ data/maps/LavaridgeTown/scripts.inc:386 LavaridgeTown_Text_HotSpringsClaims
	.globl gText_Rom_1E5DBF
gText_Rom_1E5DBF: @ 0x081E5DBF
	.string "この おんせんは……\pしんけいつう きんにくつう それから\nれんあいのなやみ おかねもうけ などに\lこうかてき なんだとさ……{EOS}"
	.if (. - gText_Rom_1E5DBF) > 0x40
	.error "gText_Rom_1E5DBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5DBF) < 0x40
	.space 0x40 - (. - gText_Rom_1E5DBF)
	.endif
