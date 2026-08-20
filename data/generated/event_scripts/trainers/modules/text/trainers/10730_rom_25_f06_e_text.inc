	@ data/text/trainers.inc:2180 Route120_Text_JeffreyPostRematch
	.globl gText_Rom_25F06E
gText_Rom_25F06E: @ 0x0825F06E
	.string "…… …… ……\n…… …… ……\lまた がんばろう……\lだいじな むしポケモンの ために……{EOS}"
	.if (. - gText_Rom_25F06E) > 0x30
	.error "gText_Rom_25F06E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F06E) < 0x30
	.space 0x30 - (. - gText_Rom_25F06E)
	.endif
