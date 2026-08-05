	@ data/text/match_call.inc:880 MatchCall_Text_Norman_PreparingPostGame
	.globl gText_Rom_26BED3
gText_Rom_26BED3: @ 0x0826BED3
	.string "パパ『{PLAYER}!\pまさか おまえが でんどういりを\nはたして しまうとは……\pよし!\nわたしも まけては いられないぞ!"
	.byte EOS
	.if (. - gText_Rom_26BED3) > 0x3b
	.error "gText_Rom_26BED3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BED3) < 0x3b
	.space 0x3b - (. - gText_Rom_26BED3)
	.endif
