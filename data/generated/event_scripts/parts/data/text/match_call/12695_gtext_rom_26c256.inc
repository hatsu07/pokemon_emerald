	@ data/text/match_call.inc:916 MatchCall_Text_UnusedProfBirch
	.globl gText_Rom_26C256
gText_Rom_26C256: @ 0x0826C256
	.string "オダマキ『ずかんと ポケナビが あれば\nポケモンの ちょうさも\lより いっそう たのしくなるな!"
	.byte EOS
	.if (. - gText_Rom_26C256) > 0x31
	.error "gText_Rom_26C256 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C256) < 0x31
	.space 0x31 - (. - gText_Rom_26C256)
	.endif
