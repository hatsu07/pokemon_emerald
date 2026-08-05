	@ src/strings.c:126 gText_BirchInTrouble
	.globl gText_Rom_5C9363
gText_Rom_5C9363: @ 0x085C9363
	.string "オダマキはかせが ピンチだ!\nポケモンを だして たすけてあげよう!$"
	.if (. - gText_Rom_5C9363) > 0x23
	.error "gText_Rom_5C9363 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9363) < 0x23
	.space 0x23 - (. - gText_Rom_5C9363)
	.endif
