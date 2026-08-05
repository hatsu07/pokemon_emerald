	@ data/text/trainers.inc:2345 Route121_Text_CristinPostBattle
	.globl gText_Rom_25F78C
gText_Rom_25F78C: @ 0x0825F78C
	.string "こんなに あっさり まけるなんて……\nつぎは わたしが かつから!$"
	.if (. - gText_Rom_25F78C) > 0x22
	.error "gText_Rom_25F78C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F78C) < 0x22
	.space 0x22 - (. - gText_Rom_25F78C)
	.endif
