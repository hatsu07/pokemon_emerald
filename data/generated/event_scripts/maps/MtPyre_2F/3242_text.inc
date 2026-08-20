	@ data/maps/MtPyre_2F/scripts.inc:103 MtPyre_2F_Text_DezNotEnoughMons (+1 aliases)
	.globl gText_Rom_2164F9
gText_Rom_2164F9: @ 0x082164F9
	.string "マコ『あたしたちと たたかいたいなら\nせめて 2ひきは ポケモン いないと\pあたしの かれし つよいんだから\nいっぴきじゃ はなしに ならないわ{EOS}"
	.if (. - gText_Rom_2164F9) > 0x49
	.error "gText_Rom_2164F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2164F9) < 0x49
	.space 0x49 - (. - gText_Rom_2164F9)
	.endif
