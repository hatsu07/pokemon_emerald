	@ data/text/match_call.inc:706 MatchCall_Text_Juan_PostRematch
	.globl gText_Rom_26A87D
gText_Rom_26A87D: @ 0x0826A87D
	.string "アダン『{PLAYER}{KUN}……\pユーと かなでる ポケモン しょうぶは\nせんれんされた おんがくにも にて\lハートに ふかく ひびいて きます……\pめを とじれば メロディーに あわせて\nゆうがに まう ユーの すがたが……"
	.byte EOS
	.if (. - gText_Rom_26A87D) > 0x6c
	.error "gText_Rom_26A87D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A87D) < 0x6c
	.space 0x6c - (. - gText_Rom_26A87D)
	.endif
