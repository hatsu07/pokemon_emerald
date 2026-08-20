	@ data/maps/SlateportCity/scripts.inc:1091 SlateportCity_Text_GetNameRaterToHelpYou
	.globl gText_Rom_1DCFCB
gText_Rom_1DCFCB: @ 0x081DCFCB
	.string "ポケモンの ニックネームを かえたいなら\nせいめい はんだんしに たのむんだね!{EOS}"
	.if (. - gText_Rom_1DCFCB) > 0x29
	.error "gText_Rom_1DCFCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCFCB) < 0x29
	.space 0x29 - (. - gText_Rom_1DCFCB)
	.endif
