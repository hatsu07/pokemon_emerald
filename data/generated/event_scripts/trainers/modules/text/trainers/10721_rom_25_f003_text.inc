	@ data/text/trainers.inc:2168 Route120_Text_JeffreyPostBattle
	.globl gText_Rom_25F003
gText_Rom_25F003: @ 0x0825F003
	.string "…… …… ……\n…… …… ……\lがんばろう……{EOS}"
	.if (. - gText_Rom_25F003) > 0x1a
	.error "gText_Rom_25F003 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F003) < 0x1a
	.space 0x1a - (. - gText_Rom_25F003)
	.endif
