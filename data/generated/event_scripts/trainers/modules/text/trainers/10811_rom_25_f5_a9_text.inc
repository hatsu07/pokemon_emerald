	@ data/text/trainers.inc:2300 Route121_Text_KatePostBattle
	.globl gText_Rom_25F5A9
gText_Rom_25F5A9: @ 0x0825F5A9
	.string "マナ『あたしって たよられちゃうと\nつい かっこいい ところ\lみせたく なっちゃうのよね……{EOS}"
	.if (. - gText_Rom_25F5A9) > 0x2f
	.error "gText_Rom_25F5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F5A9) < 0x2f
	.space 0x2f - (. - gText_Rom_25F5A9)
	.endif
