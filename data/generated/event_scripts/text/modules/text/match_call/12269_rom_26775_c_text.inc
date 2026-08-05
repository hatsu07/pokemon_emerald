	@ data/text/match_call.inc:304 MatchCall_PersonalizedText31
	.globl gText_Rom_26775C
gText_Rom_26775C: @ 0x0826775C
	.string "{STR_VAR_1} じゃよ\nおんせんに つかって ごきげんだからねぇ\lこうして おはなし できて うれしいよ!\pあれから なんにんか\nわかい トレーナーさんと たたかったが\lおまえさんが いちばん つよかったよ!\pきっと としを とったら\nたつじんに なるじゃろうな!\lおっほっほっほ……$"
	.if (. - gText_Rom_26775C) > 0x8a
	.error "gText_Rom_26775C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26775C) < 0x8a
	.space 0x8a - (. - gText_Rom_26775C)
	.endif
