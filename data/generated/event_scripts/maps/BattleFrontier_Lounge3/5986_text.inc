	@ data/maps/BattleFrontier_Lounge3/scripts.inc:305 BattleFrontier_Lounge3_Text_NotInterested
	.globl gText_Rom_2384BF
gText_Rom_2384BF: @ 0x082384BF
	.string "そりゃ ないぜー!\nせちがれぇ おこさま だなぁ!!"
	.byte EOS
	.if (. - gText_Rom_2384BF) > 0x1b
	.error "gText_Rom_2384BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2384BF) < 0x1b
	.space 0x1b - (. - gText_Rom_2384BF)
	.endif
