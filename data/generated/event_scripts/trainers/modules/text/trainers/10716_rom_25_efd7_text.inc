	@ data/text/trainers.inc:2162 Route120_Text_JeffreyIntro (+1 aliases)
	.globl gText_Rom_25EFD7
gText_Rom_25EFD7: @ 0x0825EFD7
	.string "…… …… ……\n…… …… ……\lしょうぶ する……?{EOS}"
	.if (. - gText_Rom_25EFD7) > 0x1d
	.error "gText_Rom_25EFD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EFD7) < 0x1d
	.space 0x1d - (. - gText_Rom_25EFD7)
	.endif
