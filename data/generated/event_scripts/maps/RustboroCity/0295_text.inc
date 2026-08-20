	@ data/maps/RustboroCity/scripts.inc:1219 RustboroCity_Text_BrendanMrBrineyHint
	.globl gText_Rom_1DFA87
gText_Rom_1DFA87: @ 0x081DFA87
	.string "ユウキ『そういえば さっき すれちがった\nハギろうじん だけどな\p{PLAYER}は ひっこして きたばかりで\nしらないかも しれないけど\lむかしは すごい ふなのり だったんだ!{EOS}"
	.if (. - gText_Rom_1DFA87) > 0x55
	.error "gText_Rom_1DFA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA87) < 0x55
	.space 0x55 - (. - gText_Rom_1DFA87)
	.endif
