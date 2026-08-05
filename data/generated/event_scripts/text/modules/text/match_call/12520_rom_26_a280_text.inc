	@ data/text/match_call.inc:655 MatchCall_Text_Wattson_RematchReady
	.globl gText_Rom_26A280
gText_Rom_26A280: @ 0x0826A280
	.string "テッセン『おう おまえさんか!\nジムの じゅんびが できたぞい!\pいつでも キンセツ シティまで\nくるがいいぞ! わっははは!"
	.byte EOS
	.if (. - gText_Rom_26A280) > 0x40
	.error "gText_Rom_26A280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A280) < 0x40
	.space 0x40 - (. - gText_Rom_26A280)
	.endif
