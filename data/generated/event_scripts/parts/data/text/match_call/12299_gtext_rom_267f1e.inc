	@ data/text/match_call.inc:349 MatchCall_PersonalizedText46
	.globl gText_Rom_267F1E
gText_Rom_267F1E: @ 0x08267F1E
	.string "{STR_VAR_1} でーす\pねえねえ!\nうみって プールと くらべて\lうかびやすいって しってた?\pこうやって からだを よこに すれば\lかってに うくのよ\pでも あんまり ながく うかんでると\nおきに ながされるから\lきを つけないと だめよ\p……あれ? ここ どこかしら……\nじゃ じゃあ またね!$"
	.if (. - gText_Rom_267F1E) > 0x91
	.error "gText_Rom_267F1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267F1E) < 0x91
	.space 0x91 - (. - gText_Rom_267F1E)
	.endif
