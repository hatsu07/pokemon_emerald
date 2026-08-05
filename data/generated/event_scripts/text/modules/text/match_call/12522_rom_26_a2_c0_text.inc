	@ data/text/match_call.inc:658 MatchCall_Text_Wattson_PostRematch
	.globl gText_Rom_26A2C0
gText_Rom_26A2C0: @ 0x0826A2C0
	.string "テッセン『わっははは!\pおまえさんとの ポケモン しょうぶは\nビリビリと しげきてきじゃな!"
	.byte EOS
	.if (. - gText_Rom_26A2C0) > 0x2f
	.error "gText_Rom_26A2C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A2C0) < 0x2f
	.space 0x2f - (. - gText_Rom_26A2C0)
	.endif
