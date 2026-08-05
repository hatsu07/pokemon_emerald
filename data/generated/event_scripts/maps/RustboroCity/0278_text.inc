	@ data/maps/RustboroCity/scripts.inc:1170 RustboroCity_Text_MayMrBrineyHint
	.globl gText_Rom_1DF8A9
gText_Rom_1DF8A9: @ 0x081DF8A9
	.string "ハルカ『そういえば さっき すれちがった\nハギろうじん なんだけどね\p{PLAYER}{KUN}は ひっこして きたばかりで\nしらないかも しれないけど\lむかしは すっごい ふなのり だったのよ!$"
	.if (. - gText_Rom_1DF8A9) > 0x5a
	.error "gText_Rom_1DF8A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF8A9) < 0x5a
	.space 0x5a - (. - gText_Rom_1DF8A9)
	.endif
