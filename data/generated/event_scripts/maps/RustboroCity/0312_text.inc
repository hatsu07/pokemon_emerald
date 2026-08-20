	@ data/maps/RustboroCity/scripts.inc:1259 RustboroCity_Text_DevelopedNewPokenavFeature
	.globl gText_Rom_1DFC14
gText_Rom_1DFC14: @ 0x081DFC14
	.string "いま ポケナビの ついかきのうを\nかいはつ していたのですが……\pうまく いきましたよ!\p{PLAYER}さん!\pしゃちょうに いただいた そのポケナビ\nちょっと かしてくださいね!{EOS}"
	.if (. - gText_Rom_1DFC14) > 0x56
	.error "gText_Rom_1DFC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFC14) < 0x56
	.space 0x56 - (. - gText_Rom_1DFC14)
	.endif
